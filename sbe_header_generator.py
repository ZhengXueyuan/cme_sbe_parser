# coding: utf-8


import os
import sys
import time
import ctypes
import argparse
import xml.etree.ElementTree as ET
import csv
import re

xml_namespace_re= r'\{.*\}(.*)'
def ignore_xml_namespace( tag ):
    match = re.match(xml_namespace_re, tag)
    if match:
        return match[1]
    else:
        return tag

numeric_type=[
        'uint8','uint8_t',
        'uint16','uint16_t',
        'uint32','uint32_t',
        'uint64','uint64_t',
        'int8','int8_t',
        'int16','int16_t',
        'int32','int32_t',
        'int64','int64_t'
    ]

primitive_type_map={
        'char':'char',
        'uint8':'uint8_t',
        'uint16':'uint16_t',
        'uint32':'uint32_t',
        'uint64':'uint64_t',
        'int8':'int8_t',
        'int16':'int16_t',
        'int32':'int32_t',
        'int64':'int64_t',
    }
def convert_sbe_type_to_cpp_type(type_name):
    if type_name in primitive_type_map:
        return primitive_type_map[type_name]
    else:
        print(f'can not convert sbe type {type_name}')
        exit(-1)
types = {}
def get_original_cpp_type(type_name):
    if type_name in types:
        return types[type_name]['primitive_type']
    else:
        return type_name

field_id_map = {}   # { id: field_name }
def record_field_id(field_name, field_id):
    field_id = int(field_id)
    if field_id not in field_id_map:
        field_id_map[field_id] = field_name
    else:
        if field_id_map[field_id] != field_name:
            print(f"field has same id: {field_id_map[field_id]} {field_name}")
            exit(-1)

message_id_map = {} # { id : msg_name }
def record_msg_id(msg_name, msg_id):
    msg_id = int(msg_id)
    if msg_id not in message_id_map:
        message_id_map[msg_id] = msg_name
    else:
        if message_id_map[msg_id] != msg_name:
            print(f"message has same id: {message_id_map[msg_id]}, {msg_name}")
            exit(-1)

if __name__ == "__main__":
    print(f'{sys.argv[0]}')
    parser = argparse.ArgumentParser(description="sbe定义转换为cpp头文件")

    parser.add_argument("-i", "--input", type=str, required=True, help="输入文件路径")
    parser.add_argument("-o", "--output", type=str, required=True, help="输出文件路径")

    # 解析参数
    args = parser.parse_args()

    input_sbe_xml=args.input
    output_header = args.output
    print(f'input from {input_sbe_xml}, output to dir {output_header}')

    tree = ET.parse(input_sbe_xml)
    root = tree.getroot()

    # 获取schema属性
    print('root: ', ignore_xml_namespace(root.tag), root.attrib)
    package=root.attrib['package']
    schema_id=root.attrib['id']
    schema_version=root.attrib['version']
    semantic_version=root.attrib['semanticVersion']
    schema_description=root.attrib['description']
    byte_order=root.attrib['byteOrder']
    type_keys={}
    composites={}
    composite_attributes={}
    enums={}
    sets={}
    messages={}
    asserts=[]
    cpp_marcos=[]

    cpp_marcos.append(f'\n')
    cpp_marcos.append(f'namespace {package} {{\n\n')
    cpp_marcos.append(f'constexpr std::array<char,{len(package)+1}> package {{"{package}"}};\n')
    cpp_marcos.append(f'constexpr int schema_id {{{schema_id}}};\n')
    cpp_marcos.append(f'constexpr int schema_version {{{schema_version}}};\n')
    cpp_marcos.append(f'constexpr std::array<char,{len(semantic_version)+1}> semantic_version {{"{semantic_version}"}};\n')
    cpp_marcos.append(f'constexpr std::array<char,{len(schema_description)+1}> schema_description {{"{schema_description}"}};\n')
    cpp_marcos.append(f'constexpr std::array<char,{len(byte_order)+1}> byte_order {{"{byte_order}"}};\n')


    for node in root:
        # print( 'node: ', ignore_xml_namespace(node.tag) , node.attrib )
        if ignore_xml_namespace(node.tag) == 'types':
            for type_node in node:
                if ignore_xml_namespace(type_node.tag) == 'type':
                    name=type_node.attrib['name']
                    description=type_node.attrib.get('description', None)
                    primitive_type=type_node.attrib.get('primitiveType')
                    presence = type_node.attrib.get('presence', None)
                    length = type_node.attrib.get('length', None)
                    semantic_type = type_node.attrib.get('semanticType', None)
                    null_value = type_node.attrib.get('nullValue', None)
                    since_version = type_node.attrib.get('sinceVersion', None)
                    value = type_node.text if presence=="constant" else ''
                    types[name] = { 'name':name, 'description':description,
                                   'primitive_type':primitive_type, 'presence':presence,
                                   'length':length, 'semantic_type':semantic_type,
                                   'since_version':since_version, 'null_value':null_value,
                                   'value':value}
                    # print(f'type {name} {type[name]}')
                    type_keys = {**type_keys, **type_node.attrib}
                elif ignore_xml_namespace(type_node.tag) == 'composite':
                    header_skipped = False
                    composite_name = type_node.attrib['name']
                    composite_description=type_node.attrib.get('description', None)
                    composite_semantic_type = type_node.attrib.get('semanticType', None)
                    # print(f'composite {composite_name}')
                    composites[composite_name] = {
                        'name': composite_name,
                        'description': composite_description,
                        'semantic_type':composite_semantic_type,
                        'types':[]
                    }
                    for composite_type_node in type_node:
                        if composite_type_node.tag == 'type':
                            # print(f'{composite_name} {composite_type_node.attrib}')
                            composites[composite_name]['types'].append({
                                'name': composite_type_node.attrib.get('name'),
                                'description': composite_type_node.attrib.get('description', None),
                                'length' : composite_type_node.attrib.get('length', length),
                                'presence': composite_type_node.attrib.get('presence', None),
                                'null_value': composite_type_node.attrib.get('nullValue', None),
                                'primitive_type': composite_type_node.attrib.get('primitiveType', None),
                                'value': composite_type_node.text if composite_type_node.attrib.get('presence', '') == 'constant' else None
                            })
                        elif composite_type_node.tag == 'composite':
                            print(f'nested composite detected')
                            exit(-1)
                        else:
                            print(f'can not recognise composite type node {composite_type_node.tag} in {composite_name}')
                            exit(-1)
                elif ignore_xml_namespace(type_node.tag)== 'enum':
                    header_skipped = False
                    enum_name = type_node.attrib['name']
                    encoding_type = type_node.attrib['encodingType']
                    enums[enum_name]={
                        'name':enum_name,
                        'encoding_type':encoding_type,
                        'values':[],
                    }
                    for enum_sub_node in type_node:
                        if enum_sub_node.tag == 'validValue':
                            enums[enum_name]['values'].append({
                                'name':enum_sub_node.attrib['name'],
                                'description':enum_sub_node.attrib.get('description', None),
                                'since_version':enum_sub_node.attrib.get('sinceVersion', None),
                                'value':enum_sub_node.text,
                            })
                        elif enum_sub_node.tag == 'enum':
                            print(f'nested enum dected')
                            exit(-1)
                        else:
                            print(f'can not parse enum sub node {enum_sub_node.tag}')
                            exit(-1)
                elif ignore_xml_namespace(type_node.tag)== 'set':
                    set_name = type_node.attrib['name']
                    encoding_type = type_node.attrib['encodingType']
                    sets[set_name]={
                        'name':set_name,
                        'encoding_type':encoding_type,
                        'choices':[]
                    }
                    for set_sub_node in type_node:
                        if set_sub_node.tag == 'choice':
                            sets[set_name]['choices'].append({
                                'name':set_sub_node.attrib['name'],
                                'description':set_sub_node.attrib.get('description', None),
                                'value':set_sub_node.text,
                            })
                        elif set_sub_node.tag == 'set':
                            print(f'nested set detected. {set_name}')
                            exit(-1)
                        else:
                            print(f'can not parse set {set_name} sub node {set_sub_node.tag}')
                            exit(-1)
                else:
                    print(f'can not parse {type_node.tag}')
        if ignore_xml_namespace(node.tag) == 'message':
            # print(f'read message: {node.attrib["name"]}')
            msg_name = node.attrib["name"]
            msg_id = node.attrib["id"]
            messages[msg_name]={
                'name':msg_name,
                'id':msg_id,
                'description':node.attrib.get('description', None),
                'block_length':node.attrib.get('blockLength', None),
                'semantic_type':node.attrib.get('semanticType', None),
                'block_length':node.attrib.get('blockLength', None),
                'members':[]
            }
            record_msg_id(msg_name, msg_id)
            for message_sub_node in node:
                if message_sub_node.tag=='field':
                    field_name = message_sub_node.attrib['name']
                    field_id = message_sub_node.attrib['id']
                    messages[msg_name]['members'].append({
                        'tag':message_sub_node.tag,
                        'name':field_name,
                        'id':field_id,
                        'type':message_sub_node.attrib['type'],
                        'description':message_sub_node.attrib.get('description', None),
                        'offset':message_sub_node.attrib.get('offset', None),
                        'semantic_type':message_sub_node.attrib.get('semanticType', None),
                        'since_version':message_sub_node.attrib.get('sinceVersion', None),
                    })
                    record_field_id(field_name, field_id)
                elif message_sub_node.tag=='data':
                    field_name = message_sub_node.attrib['name']
                    field_id = message_sub_node.attrib['id']
                    messages[msg_name]['members'].append({
                        'tag':message_sub_node.tag,
                        'name':field_name,
                        'id':field_id,
                        'type':message_sub_node.attrib['type'],
                        'description':message_sub_node.attrib.get('description', None),
                        'offset':message_sub_node.attrib.get('offset', None),
                        'semantic_type':message_sub_node.attrib.get('semanticType', None),
                        'since_version':message_sub_node.attrib.get('sinceVersion', None),
                    })
                    record_field_id(field_name, field_id)
                elif message_sub_node.tag=='group':
                    group_name = message_sub_node.attrib['name']
                    group_members=[]
                    for group_sub_node in message_sub_node:
                        if group_sub_node.tag == 'group':
                            print(f'nested group detected, {msg_name} : {group_name}')
                            exit(-1)
                        elif group_sub_node.tag == 'field':
                            #name="BidSize" id="134" type="uInt32NULL" description="" offset="24" semanticType
                            group_members.append({
                                'name': group_sub_node.attrib['name'],
                                'id': group_sub_node.attrib['id'],
                                'type': group_sub_node.attrib['type'],
                                'description': group_sub_node.attrib.get('description', None),
                                'offset': group_sub_node.attrib.get('offset', None),
                                'semantic_type': group_sub_node.attrib.get('semanticType', None),
                            })
                            record_field_id(group_sub_node.attrib['name'], group_sub_node.attrib['id'])
                        else:
                            print(f'can not parse group {group_name} sub node {group_sub_node.tag}')
                            exit(-1)
                    messages[msg_name]['members'].append({
                        'tag':message_sub_node.tag,
                        'name':message_sub_node.attrib['name'],
                        'id':message_sub_node.attrib['id'],
                        'description':message_sub_node.attrib.get('description', None),
                        'block_length':message_sub_node.attrib.get('blockLength', None),
                        'since_version':message_sub_node.attrib.get('sinceVersion', None),
                        'dimension_type':message_sub_node.attrib.get('dimensionType', None),
                        'members':group_members
                    })
                    record_field_id(message_sub_node.attrib['name'], message_sub_node.attrib['id'])
                elif ignore_xml_namespace(message_sub_node.tag)=='message':
                    print(f'nested message detected: {msg_name}')
                    exit(-1)
                else:
                    print(f'can not parse message {node.attrib["name"]} sub node {message_sub_node.tag}')
                    exit(-1)
    for key, type_attribute in types.items():
        # print(f'type_keys: {type_keys.keys()}')
        # print(f'type node has {len(type_attribute) - 1}, xml has {len(type_keys)}')
        if len(type_attribute) -1 != len(type_keys):
            print(f'type node attributes and xml miss match')
            exit(0)
        break

    print(f'---------------\ntype:{len(types)}')
    for key, type in types.items():
        # print(f'type {key}: {types}\n')
        pass

    print(f'---------------\ncomposite:{len(composites)}')
    for key, composite in composites.items():
        # print(f'composite {key}: {composite}\n')
        pass

    print(f'---------------\nenum:{len(enums)}')
    for key, enum in enums.items():
        # print(f'enum {key}: {enum}\n')
        pass

    print(f'---------------\nset:{len(sets)}')
    for key, set_item in sets.items():
        # print(f'set {key}: {set_item}\n')
        pass

    print(f'---------------\nset:{len(messages)}')
    for key, msg in messages.items():
        # print(f'msg {key}: {msg}\n')
        pass

    print(f'load xml type info finish')

    # generate type definations
    const_defs={}
    type_defs={}
    print(types.keys())
    for type_name, type_info in types.items():
        primitive_type = type_info['primitive_type']
        cpp_type = convert_sbe_type_to_cpp_type(primitive_type)
        if cpp_type == type_name:
            continue
        description = type_info['description']
        length = type_info['length']
        presence = type_info['presence']
        value = type_info['value']
        null_value = type_info['null_value']
        if length == 0:
            print(f'field length is 0: {type_name}')
            exit(-1)
        type_def_str=''
        if null_value:
            if cpp_type in numeric_type or (cpp_type == 'char' and null_value=='0'):
                type_def_str = f'constexpr {cpp_type} {type_name}_NULL_VALUE {{{null_value}}}; ///< Null value of {type_name}\n'
            else:
                if not length or int(length) == 1:
                    type_def_str = f"constexpr {cpp_type} {type_name}_NULL_VALUE {{'{null_value}'}}; ///< Null value of {type_name}\n"
                else:
                    init_str = ', '.join(['\'' + char + '\'' for char in null_value])
                    type_def_str = f"constexpr std::array<{cpp_type}, {length}> {type_name}_NULL_VALUE {{{init_str}}}; ///< Null value of {type_name}\n"
                    if length and len(null_value) != int(length):
                        print(f'length of {type_name} {null_value} length not match: {len(null_value)} != {length}')
                        exit(-1)
        if presence == 'constant':
            # type_def_str = f'using {type_name} = {cpp_type}({value});'
            if cpp_type in numeric_type:
                type_def_str += f'constexpr {cpp_type} {type_name} {{{value}}};'
            else:
                if not length or int(length) == 1:
                    type_def_str += f"constexpr {cpp_type} {type_name} {{'{value}'}};"
                else:
                    init_str = ', '.join(['\'' + char + '\'' for char in value])
                    type_def_str += f"constexpr std::array<{cpp_type}, {length}> {type_name} {{{init_str}}};"
                    if length and len(value) != int(length):
                        print(f'length of {type_name} {value} length not match: {len(value)} != {length}')
                        exit(-1)
            # print(type_def_str)
        else:
            if length is None or int(length) == 1:
                type_def_str += f'using {type_name} = {cpp_type};'
            else:
                type_def_str += f'using {type_name} = std::array<{cpp_type},{length}>;'
        if description:
            type_def_str = '/// ' + description + '\n' + type_def_str + '\n'
        # print(type_def_str)
        type_defs[type_name] = type_def_str
    # print(type_defs)

    # genreate composites structs
    basic_structs_defs={}
    variable_basic_structs_defs={}
    for composite_name, composite_info in composites.items():
        variable = False
        struct_str = ''
        struct_members=[]
        for member_info in composite_info['types']:
            tmp_str=''
            member_name = member_info['name']
            primitive_type = (member_info['primitive_type'])
            cpp_type = convert_sbe_type_to_cpp_type(primitive_type)
            length = member_info.get('length', None)
            description = member_info.get('description', None)
            if length and int(length)==0:
                if not variable:
                    variable = True
                else:
                    print(f'multiple variable detected in composite {composite_name} {member_name}')
                    exit(-1)
                tmp_str = f'{cpp_type} {member_name}[0];'
            else:
                if length:
                    tmp_str = f"std::array<{cpp_type}, {length}> {member_name}"
                else:
                    tmp_str = f"{cpp_type} {member_name}"
                if member_info['null_value']:
                    null_value = member_info['null_value']
                    if cpp_type in numeric_type or (cpp_type == 'char' and null_value=='0'):
                        tmp_str+=f' {{{null_value}}};'
                    else:
                        if not length or int(length) == 1:
                            tmp_str+=f" {{'{null_value}'}};"
                        else:
                            init_str = ', '.join(['\'' + char + '\'' for char in null_value])
                            tmp_str+=f" {{{init_str}}};"
                elif member_info['presence'] == 'constant' and member_name == 'exponent':
                    value = member_info['value']
                    tmp_str = 'static constexpr ' + tmp_str
                    if cpp_type in numeric_type or (cpp_type == 'char' and null_value=='0'):
                        tmp_str+=f' {{{value}}};'
                    else:
                        if not length or int(length) == 1:
                            tmp_str+=f" {{'{value}'}};"
                        else:
                            init_str = ', '.join(['\'' + char + '\'' for char in value])
                            tmp_str+=f" {{{init_str}}};"
                else:
                    tmp_str+=';'
            if description:
                tmp_str+=f' ///< {description}\n'
            else:
                tmp_str+='\n'
            struct_members.append(tmp_str)

        composite_description = composite_info.get('description', None)
        if variable:
            variable_basic_structs_defs[composite_name] = f"struct {composite_name}_header {{\n"
            for member in struct_members:
                variable_basic_structs_defs[composite_name] += member
            variable_basic_structs_defs[composite_name] += f"}};\n"
            if composite_description:
                variable_basic_structs_defs[composite_name] = f'/// {composite_description}\n' + variable_basic_structs_defs[composite_name]
        else:
            basic_structs_defs[composite_name] = f"struct {composite_name} {{\n"
            for member in struct_members:
                basic_structs_defs[composite_name] += member
            basic_structs_defs[composite_name] += f"}};\n"
            if composite_description:
                basic_structs_defs[composite_name] = f'/// {composite_description}\n' + basic_structs_defs[composite_name]

    # generate enum delearations
    enum_defs={}
    for enum_name, enum_info in enums.items():
        encoding_type = enum_info['encoding_type']
        primitive_type = get_original_cpp_type(encoding_type)
        value_str = ''
        for enum_value in enum_info['values']:
            if primitive_type in numeric_type:
                tmp_str = f"{enum_value['name']} = {enum_value['value']},"
            else:
                tmp_str = f"{enum_value['name']} = '{enum_value['value']}',"
            tmp_str += f" ///< {enum_value['description']}" if enum_value['description'] else ''
            tmp_str += '\n'
            value_str += tmp_str
        enum_defs[enum_name]=f'enum class {enum_name}: {encoding_type}{{\n{value_str}}};\n'
        # print(enum_defs[enum_name])

    # grnerate bitset types
    bitset_defs={}
    bitset_const_defs={}
    for bitset_name, bitset_info in sets.items():
        bits_def= ''
        for bit_info in bitset_info['choices']:
            bits_def += f"constexpr int {bitset_name}_{bit_info['name']} {{{bit_info['value']}}};"
            if bit_info['description']:
                bits_def += f" ///< {bit_info['description']}\n"
            else:
                bits_def += '\n'
            bits_def += f"constexpr int {bitset_name}_{bit_info['name']}_MASK {{{1 << int(bit_info['value'])}}};\n"
        encoding_type = bitset_info['encoding_type']
        bits_def += f"using {bitset_name} = {encoding_type};\n"
        # print(bits_def)
        bitset_defs[bitset_name] = bits_def

    # generate msg structs
    msg_defs={}
    for msg_name, msg_info in messages.items():
        fixed_size = True
        internal_structs=[]
        struct_members=[]
        # check variable length
        for member_type_info in msg_info['members']:
            if member_type_info['tag'] == 'data' or member_type_info['tag'] == 'group':
                fixed_size = False
                break
            elif member_type_info['type'] in types:
                if types[member_type_info['type']]['length'] and\
                  int(types[member_type_info['type']]['length'])==0:
                    fixed_size = False
                    break
        # 1. Struct name
        # struct_name = msg_name if fixed_size else msg_name+'_header'
        struct_name = msg_name
        # 2. group to internal struct
        for member_type_info in msg_info['members']:
            if member_type_info['tag'] == 'group':
                group_name = member_type_info['name']
                group_id = member_type_info['id']
                group_description = member_type_info['description']
                group_block_length = member_type_info['block_length']
                group_dimension_type = member_type_info['dimension_type']
                group_member_strs = []
                for group_field in member_type_info['members']:
                    group_member_type = group_field['type']
                    group_member_name = group_field['name']
                    group_member_offset = group_field['offset']
                    if group_member_type in primitive_type_map:
                        tmp_str = convert_sbe_type_to_cpp_type(group_member_type)
                    else:
                        tmp_str = group_member_type
                    if tmp_str in types and types[tmp_str]['presence'] == 'constant':
                        if group_member_offset:
                            group_member_strs.append(f"const decltype({tmp_str}) {group_member_name} {{{tmp_str}}};"\
                                + (f" ///< {group_field['description']}." if group_field['description'] else '')\
                                + f" id: {group_field['id']}\n")
                        else:
                            group_member_strs.append(f"static constexpr decltype({tmp_str}) {group_member_name} {{{tmp_str}}};"\
                                + (f" ///< {group_field['description']}." if group_field['description'] else '')\
                                + f" id: {group_field['id']}\n")
                    else:
                        group_member_strs.append( f"{tmp_str} {group_member_name};" +\
                            (f" ///< {group_field['description']}." if group_field['description'] else '') +\
                            f" id: {group_field['id']}\n")
                    if group_member_offset:
                        asserts.append(f"static_assert ( offsetof({struct_name}::{group_name}, {group_member_name}) == {group_field['offset']});\n")
                tmp_str= (f"/// {group_description}" if group_description else "")\
                        + f" id: {group_id}\n"\
                        + f"struct {group_name} {{\n"\
                        + f"static constexpr int id {{FIELD_ID_{group_name}}}; ///< id = {group_id}\n"\
                        + f"using DimensionType = {group_dimension_type};\n"
                for group_member_str in group_member_strs:
                    tmp_str += group_member_str
                tmp_str += "};\n"
                internal_structs.append(tmp_str)
        # 3. compose struct
            # print(f'{msg_name} fixed size')
        for member_type_info in msg_info['members']:
            # offset assert
            if member_type_info['tag'] != 'field':
                continue
            # print(f"{msg_name}:{member_type_info['name']}, {member_type_info['tag']}")
            offset = member_type_info.get('offset',None)
            member_name = member_type_info['name']
            member_direct_type = member_type_info['type']
            member_description = member_type_info.get('description', None)
            if member_direct_type in primitive_type_map:
                # process basic types
                cpp_type = convert_sbe_type_to_cpp_type(member_direct_type)
                struct_members.append(f"{cpp_type} {member_name}; " + (f" ///< {member_description}." if member_description else '') + f" id: {member_type_info['id']}" + '\n')
            elif member_direct_type in types:
                orig_type = types[member_direct_type]
                if orig_type['presence'] == 'constant':
                    # process const type
                    cpp_type = convert_sbe_type_to_cpp_type(orig_type['primitive_type'])
                    if offset:
                        tmp_str = f"const decltype({member_direct_type}) {member_name} {{{member_direct_type}}};"
                    else:
                        tmp_str = f'static constexpr decltype({member_direct_type}) {member_name} {{{member_direct_type}}};'
                    struct_members.append(tmp_str + ( f" ///< {member_description}."\
                                if member_description else '') +\
                                f" id: {member_type_info['id']}" + '\n')
                else:
                    # process normal type registed in types
                    struct_members.append( f"{member_direct_type} {member_name};" +\
                                (f" ///< {member_description}." if member_description else '') +\
                                f" id: {member_type_info['id']}" + '\n')
            else:
                struct_members.append(f"{member_direct_type} {member_name};" + ( f" ///< {member_description}."\
                            if member_description else '') + f" id: {member_type_info['id']}" + '\n')
            if offset:
                asserts.append(f"static_assert ( offsetof({struct_name}, {member_name}) == {member_type_info['offset']});\n") 
        msg_defs[msg_name] = f"struct {msg_name} {{\n"
        msg_defs[msg_name] += f"static constexpr int id {{MSG_ID_{msg_name}}};\n"
        msg_defs[msg_name] += f"static constexpr int block_length {{{msg_info['block_length']}}};\n"
        for internal_struct in internal_structs:
            msg_defs[msg_name] += internal_struct
        for struct_member in struct_members:
            msg_defs[msg_name] += struct_member
        if not fixed_size:
            msg_defs[msg_name] += 'char VariableData [0];\n'
        msg_defs[msg_name] += "};\n"
        description = msg_info['description']
        tmp_str = ''
        if description:
            tmp_str += f"/// {description}"
        tmp_str += f" block_length: {msg_info['block_length']}.\n"
        if msg_name not in msg_defs:
            continue
        msg_defs[msg_name] = tmp_str + msg_defs[msg_name]

    # 4. generate field marcos
    cpp_marcos.append('\n/// Field name to id:\n')
    for field_id in sorted(field_id_map.keys()):
        field_name = field_id_map[field_id]
        cpp_marcos.append(f'constexpr int FIELD_ID_{field_name} {{{field_id}}};\n')

    # 5. generate msg id marcos
    cpp_marcos.append('\n/// Message name to id:\n')
    for msg_id in sorted(message_id_map.keys()):
        msg_name = message_id_map[msg_id]
        cpp_marcos.append(f'constexpr int MSG_ID_{msg_name} {{{msg_id}}};\n')

    # output cpp header
    default_cpp_headers=['array','cstddef']

    # cpp_marcos=['#define offsetof(s, m) (reinterpret_cast<size_t>(&reinterpret_cast<const volatile char&>(static_cast<s*>(nullptr)->m)))\n']

    f_out = open(output_header, 'w')
    f_out.write("#pragma once\n")
    for header in default_cpp_headers:
        f_out.write(f'#include <{header}>\n')

    for marco in cpp_marcos:
        f_out.write(marco)

    for type_name, type_str in type_defs.items():
        f_out.write(type_str)

    f_out.write("#pragma pack(1)\n")

    for struct_name, struct_str in basic_structs_defs.items():
        f_out.write(struct_str)

    for struct_name, struct_str in variable_basic_structs_defs.items():
        f_out.write(struct_str)

    for enum_name, enum_str in enum_defs.items():
        f_out.write(enum_str)

    for bitset_name, bitset_str in bitset_defs.items():
        f_out.write(bitset_str)

    for msg_name, msg_str in msg_defs.items():
        f_out.write(msg_str)

    f_out.write('#pragma pack()\n')

    f_out.write('/// check convert integrity\ninline bool check(){\n')
    for assert_str in asserts:
        f_out.write(assert_str)
    f_out.write('return true;\n}\n')

    # namespace end
    f_out.write(f'\n/// namespace {package}\n}}\n')

    f_out.close()

    exit(0)

