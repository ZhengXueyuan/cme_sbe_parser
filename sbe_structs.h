#pragma once
#include <array>
#include <cstddef>

namespace iLinkBinary {

constexpr std::array<char,12> package {"iLinkBinary"};
constexpr int schema_id {8};
constexpr int schema_version {8};
constexpr std::array<char,7> semantic_version {"FIX5.0"};
constexpr std::array<char,9> schema_description {"20220502"};
constexpr std::array<char,13> byte_order {"littleEndian"};

/// Field name to id:
constexpr int FIELD_ID_ClOrdID {11};
constexpr int FIELD_ID_CumQty {14};
constexpr int FIELD_ID_Currency {15};
constexpr int FIELD_ID_ExecID {17};
constexpr int FIELD_ID_ExecInst {18};
constexpr int FIELD_ID_SecurityIDSource {22};
constexpr int FIELD_ID_LastPx {31};
constexpr int FIELD_ID_LastQty {32};
constexpr int FIELD_ID_OrderID {37};
constexpr int FIELD_ID_OrderQty {38};
constexpr int FIELD_ID_OrdStatus {39};
constexpr int FIELD_ID_OrdType {40};
constexpr int FIELD_ID_OrigCIOrdID {41};
constexpr int FIELD_ID_Price {44};
constexpr int FIELD_ID_RefSeqNum {45};
constexpr int FIELD_ID_SecurityID {48};
constexpr int FIELD_ID_Side {54};
constexpr int FIELD_ID_Symbol {55};
constexpr int FIELD_ID_Text {58};
constexpr int FIELD_ID_TimeInForce {59};
constexpr int FIELD_ID_TransactTime {60};
constexpr int FIELD_ID_SettlDate {64};
constexpr int FIELD_ID_TradeDate {75};
constexpr int FIELD_ID_CxlQuantity {84};
constexpr int FIELD_ID_StopPx {99};
constexpr int FIELD_ID_CxlRejReason {102};
constexpr int FIELD_ID_OrdRejReason {103};
constexpr int FIELD_ID_MinQty {110};
constexpr int FIELD_ID_QuoteID {117};
constexpr int FIELD_ID_DKReason {127};
constexpr int FIELD_ID_QuoteReqID {131};
constexpr int FIELD_ID_BidPx {132};
constexpr int FIELD_ID_OfferPx {133};
constexpr int FIELD_ID_BidSize {134};
constexpr int FIELD_ID_OfferSize {135};
constexpr int FIELD_ID_NoRelatedSym {146};
constexpr int FIELD_ID_ExecType {150};
constexpr int FIELD_ID_LeavesQty {151};
constexpr int FIELD_ID_SecurityType {167};
constexpr int FIELD_ID_MaturityMonthYear {200};
constexpr int FIELD_ID_NoQuoteEntries {295};
constexpr int FIELD_ID_NoQuoteSets {296};
constexpr int FIELD_ID_QuoteStatus {297};
constexpr int FIELD_ID_QuoteCancelType {298};
constexpr int FIELD_ID_QuoteEntryID {299};
constexpr int FIELD_ID_QuoteRejectReason {300};
constexpr int FIELD_ID_QuoteSetID {302};
constexpr int FIELD_ID_TotNoQuoteEntries {304};
constexpr int FIELD_ID_UnderlyingSecurityID {309};
constexpr int FIELD_ID_SecurityReqID {320};
constexpr int FIELD_ID_SecurityReqType {321};
constexpr int FIELD_ID_SecurityResponseID {322};
constexpr int FIELD_ID_SecurityResponseType {323};
constexpr int FIELD_ID_QuoteEntryRejectReason {368};
constexpr int FIELD_ID_RefTagID {371};
constexpr int FIELD_ID_RefMsgType {372};
constexpr int FIELD_ID_ExecRestatementReason {378};
constexpr int FIELD_ID_BusinessRejectRefID {379};
constexpr int FIELD_ID_BusinessRejectReason {380};
constexpr int FIELD_ID_GrossTradeAmt {381};
constexpr int FIELD_ID_TotalNumSecurities {393};
constexpr int FIELD_ID_ExpireDate {432};
constexpr int FIELD_ID_CxlRejResponseTo {434};
constexpr int FIELD_ID_PartyIDSource {447};
constexpr int FIELD_ID_PartyID {448};
constexpr int FIELD_ID_PartyRole {452};
constexpr int FIELD_ID_NoPartyIDs {453};
constexpr int FIELD_ID_TransBkdTime {483};
constexpr int FIELD_ID_SecExecID {527};
constexpr int FIELD_ID_TotalAffectedOrders {533};
constexpr int FIELD_ID_NoAffectedOrders {534};
constexpr int FIELD_ID_AffectedOrderID {535};
constexpr int FIELD_ID_QuoteType {537};
constexpr int FIELD_ID_MaturityDate {541};
constexpr int FIELD_ID_CrossID {548};
constexpr int FIELD_ID_CrossType {549};
constexpr int FIELD_ID_CrossPrioritization {550};
constexpr int FIELD_ID_NoSides {552};
constexpr int FIELD_ID_NoLegs {555};
constexpr int FIELD_ID_LegPrice {566};
constexpr int FIELD_ID_CustOrderCapacity {582};
constexpr int FIELD_ID_MassStatusReqID {584};
constexpr int FIELD_ID_MassStatusReqType {585};
constexpr int FIELD_ID_LegSecurityID {602};
constexpr int FIELD_ID_LegSecurityIDSource {603};
constexpr int FIELD_ID_LegRatioQty {623};
constexpr int FIELD_ID_LegSide {624};
constexpr int FIELD_ID_LegLastPx {637};
constexpr int FIELD_ID_PriorityIndicator {638};
constexpr int FIELD_ID_SecuritySubType {762};
constexpr int FIELD_ID_TerminationType {788};
constexpr int FIELD_ID_OrdStatusReqID {790};
constexpr int FIELD_ID_UnderlyingPx {810};
constexpr int FIELD_ID_OptionDelta {811};
constexpr int FIELD_ID_AvgPxIndicator {819};
constexpr int FIELD_ID_TradeLinkID {820};
constexpr int FIELD_ID_ExpirationCycle {827};
constexpr int FIELD_ID_TrdType {828};
constexpr int FIELD_ID_DiscretionPrice {845};
constexpr int FIELD_ID_LastFragment {893};
constexpr int FIELD_ID_LastRptRequested {912};
constexpr int FIELD_ID_StartDate {916};
constexpr int FIELD_ID_EndDate {917};
constexpr int FIELD_ID_HostCrossID {961};
constexpr int FIELD_ID_SideTimeInForce {962};
constexpr int FIELD_ID_LegOptionDelta {1017};
constexpr int FIELD_ID_ManualOrderIndicator {1028};
constexpr int FIELD_ID_CustOrderHandlingInst {1031};
constexpr int FIELD_ID_ExecAckStatus {1036};
constexpr int FIELD_ID_CalculatedCcyLastQty {1056};
constexpr int FIELD_ID_AggressorIndicator {1057};
constexpr int FIELD_ID_DisplayQty {1138};
constexpr int FIELD_ID_SecurityGroup {1151};
constexpr int FIELD_ID_Volatility {1188};
constexpr int FIELD_ID_TimeToExpiration {1189};
constexpr int FIELD_ID_RiskFreeRate {1190};
constexpr int FIELD_ID_MarketSegmentID {1300};
constexpr int FIELD_ID_ListUpdateAction {1324};
constexpr int FIELD_ID_NoFills {1362};
constexpr int FIELD_ID_FillExecID {1363};
constexpr int FIELD_ID_FillPx {1364};
constexpr int FIELD_ID_FillQty {1365};
constexpr int FIELD_ID_MassActionReportID {1369};
constexpr int FIELD_ID_MassActionType {1373};
constexpr int FIELD_ID_MassActionScope {1374};
constexpr int FIELD_ID_MassActionResponse {1375};
constexpr int FIELD_ID_MassActionRejectReason {1376};
constexpr int FIELD_ID_LegLastQty {1418};
constexpr int FIELD_ID_PartyDetailsListReqID {1505};
constexpr int FIELD_ID_SideTradeID {1506};
constexpr int FIELD_ID_OrigSideTradeID {1507};
constexpr int FIELD_ID_PartyDetailsListReportID {1510};
constexpr int FIELD_ID_RequestResult {1511};
constexpr int FIELD_ID_TotNumParties {1512};
constexpr int FIELD_ID_ClearingTradePriceType {1598};
constexpr int FIELD_ID_TradingSystemName {1603};
constexpr int FIELD_ID_TradingSystemVersion {1604};
constexpr int FIELD_ID_TradingSystemVendor {1605};
constexpr int FIELD_ID_FillYieldType {1622};
constexpr int FIELD_ID_NoRequestingPartyIDs {1657};
constexpr int FIELD_ID_RequestingPartyID {1658};
constexpr int FIELD_ID_RequestingPartyIDSource {1659};
constexpr int FIELD_ID_RequestingPartyRole {1660};
constexpr int FIELD_ID_NoPartyDetails {1671};
constexpr int FIELD_ID_NoPartyUpdates {1676};
constexpr int FIELD_ID_PartyDetailID {1691};
constexpr int FIELD_ID_PartyDetailIDSource {1692};
constexpr int FIELD_ID_PartyDetailRole {1693};
constexpr int FIELD_ID_AvgPxGroupID {1731};
constexpr int FIELD_ID_NoOrderEvents {1795};
constexpr int FIELD_ID_OrderEventType {1796};
constexpr int FIELD_ID_OrderEventExecID {1797};
constexpr int FIELD_ID_OrderEventReason {1798};
constexpr int FIELD_ID_OrderEventPx {1799};
constexpr int FIELD_ID_OrderEventQty {1800};
constexpr int FIELD_ID_OrderEventText {1802};
constexpr int FIELD_ID_ClearingAccountType {1816};
constexpr int FIELD_ID_PartyDetailRequestStatus {1878};
constexpr int FIELD_ID_PartyDetailDefinitionStatus {1879};
constexpr int FIELD_ID_LegExecID {1893};
constexpr int FIELD_ID_LegTradeID {1894};
constexpr int FIELD_ID_LegExecRefID {1901};
constexpr int FIELD_ID_SelfMatchPreventionID {2362};
constexpr int FIELD_ID_OrderRequestID {2422};
constexpr int FIELD_ID_NoTrdRegPublications {2668};
constexpr int FIELD_ID_TrdRegPublicationType {2669};
constexpr int FIELD_ID_TrdRegPublicationReason {2670};
constexpr int FIELD_ID_FinancialInstrumentFullName {2714};
constexpr int FIELD_ID_CancelText {2807};
constexpr int FIELD_ID_OrdStatusReqType {5000};
constexpr int FIELD_ID_Memo {5149};
constexpr int FIELD_ID_Reserved {5187};
constexpr int FIELD_ID_Reserved1 {5239};
constexpr int FIELD_ID_Executor {5290};
constexpr int FIELD_ID_SendingTimeEpoch {5297};
constexpr int FIELD_ID_SenderID {5392};
constexpr int FIELD_ID_ShortSaleType {5409};
constexpr int FIELD_ID_ContraGrossTradeAmt {5542};
constexpr int FIELD_ID_SourceRepoID {5677};
constexpr int FIELD_ID_DelayDuration {5904};
constexpr int FIELD_ID_ExecutionMode {5906};
constexpr int FIELD_ID_ContraCalculatedCcyLastQty {5971};
constexpr int FIELD_ID_RequestTime {5979};
constexpr int FIELD_ID_MassCancelRequestType {6115};
constexpr int FIELD_ID_BenchmarkPrice {6262};
constexpr int FIELD_ID_OriginalOrderEventExecID {6555};
constexpr int FIELD_ID_BrokenDateTermType {6651};
constexpr int FIELD_ID_BrokenDateEnd {6741};
constexpr int FIELD_ID_BrokenDateStart {6748};
constexpr int FIELD_ID_ManagedOrder {6881};
constexpr int FIELD_ID_Ownership {7191};
constexpr int FIELD_ID_DelayToTime {7552};
constexpr int FIELD_ID_SelfMatchPreventionInstruction {8000};
constexpr int FIELD_ID_QuoteErrorCode {9030};
constexpr int FIELD_ID_QuoteEntryOpen {9182};
constexpr int FIELD_ID_DisplayLimitPrice {9264};
constexpr int FIELD_ID_LiquidityFlag {9373};
constexpr int FIELD_ID_Location {9537};
constexpr int FIELD_ID_SplitMsg {9553};
constexpr int FIELD_ID_ReservationPrice {9562};
constexpr int FIELD_ID_OrigSecondaryExecutionID {9703};
constexpr int FIELD_ID_CmtaGiveupCD {9708};
constexpr int FIELD_ID_SeqNum {9726};
constexpr int FIELD_ID_PossRetransFlag {9765};
constexpr int FIELD_ID_OFMOverride {9768};
constexpr int FIELD_ID_ExchangeQuoteReqID {9770};
constexpr int FIELD_ID_NoProcessedEntries {9772};
constexpr int FIELD_ID_MMProtectionReset {9773};
constexpr int FIELD_ID_CancelledSymbol {9774};
constexpr int FIELD_ID_UnsolicitedCancelType {9775};
constexpr int FIELD_ID_AutoQuoteRequest {9776};
constexpr int FIELD_ID_UserDefinedInstrument {9779};
constexpr int FIELD_ID_OrigOrderUser {9937};
constexpr int FIELD_ID_IDMShortCode {36023};
constexpr int FIELD_ID_MDTradeEntryID {37711};
constexpr int FIELD_ID_MaxNoOfSubstitutions {37715};
constexpr int FIELD_ID_CustomerFlow {39000};
constexpr int FIELD_ID_UUID {39001};
constexpr int FIELD_ID_RequestTimestamp {39002};
constexpr int FIELD_ID_HMACVersion {39003};
constexpr int FIELD_ID_AccessKeyID {39004};
constexpr int FIELD_ID_HMACSignature {39005};
constexpr int FIELD_ID_Session {39006};
constexpr int FIELD_ID_Firm {39007};
constexpr int FIELD_ID_Credentials {39008};
constexpr int FIELD_ID_ServerFlow {39009};
constexpr int FIELD_ID_FaultToleranceIndicator {39010};
constexpr int FIELD_ID_Reason {39011};
constexpr int FIELD_ID_ErrorCodes {39012};
constexpr int FIELD_ID_NextSeqNo {39013};
constexpr int FIELD_ID_KeepAliveInterval {39014};
constexpr int FIELD_ID_PreviousUUID {39015};
constexpr int FIELD_ID_KeepAliveIntervalLapsed {39016};
constexpr int FIELD_ID_LastUUID {39017};
constexpr int FIELD_ID_FromSeqNo {39018};
constexpr int FIELD_ID_MsgCount {39019};
constexpr int FIELD_ID_PreviousSeqNo {39021};
constexpr int FIELD_ID_SecretKeySecureIDExpiration {39022};
constexpr int FIELD_ID_LegTradeRefID {39023};
constexpr int FIELD_ID_NoBrokenDates {39026};
constexpr int FIELD_ID_BrokenDateSecurityID {39027};
constexpr int FIELD_ID_BrokenDateGUID {39031};

/// Message name to id:
constexpr int MSG_ID_Negotiate500 {500};
constexpr int MSG_ID_NegotiationResponse501 {501};
constexpr int MSG_ID_NegotiationReject502 {502};
constexpr int MSG_ID_Establish503 {503};
constexpr int MSG_ID_EstablishmentAck504 {504};
constexpr int MSG_ID_EstablishmentReject505 {505};
constexpr int MSG_ID_Sequence506 {506};
constexpr int MSG_ID_Terminate507 {507};
constexpr int MSG_ID_RetransmitRequest508 {508};
constexpr int MSG_ID_Retransmission509 {509};
constexpr int MSG_ID_RetransmitReject510 {510};
constexpr int MSG_ID_NotApplied513 {513};
constexpr int MSG_ID_NewOrderSingle514 {514};
constexpr int MSG_ID_OrderCancelReplaceRequest515 {515};
constexpr int MSG_ID_OrderCancelRequest516 {516};
constexpr int MSG_ID_MassQuote517 {517};
constexpr int MSG_ID_PartyDetailsDefinitionRequest518 {518};
constexpr int MSG_ID_PartyDetailsDefinitionRequestAck519 {519};
constexpr int MSG_ID_BusinessReject521 {521};
constexpr int MSG_ID_ExecutionReportNew522 {522};
constexpr int MSG_ID_ExecutionReportReject523 {523};
constexpr int MSG_ID_ExecutionReportElimination524 {524};
constexpr int MSG_ID_ExecutionReportTradeOutright525 {525};
constexpr int MSG_ID_ExecutionReportTradeSpread526 {526};
constexpr int MSG_ID_ExecutionReportTradeSpreadLeg527 {527};
constexpr int MSG_ID_QuoteCancel528 {528};
constexpr int MSG_ID_OrderMassActionRequest529 {529};
constexpr int MSG_ID_OrderMassStatusRequest530 {530};
constexpr int MSG_ID_ExecutionReportModify531 {531};
constexpr int MSG_ID_ExecutionReportStatus532 {532};
constexpr int MSG_ID_OrderStatusRequest533 {533};
constexpr int MSG_ID_ExecutionReportCancel534 {534};
constexpr int MSG_ID_OrderCancelReject535 {535};
constexpr int MSG_ID_OrderCancelReplaceReject536 {536};
constexpr int MSG_ID_PartyDetailsListRequest537 {537};
constexpr int MSG_ID_PartyDetailsListReport538 {538};
constexpr int MSG_ID_ExecutionAck539 {539};
constexpr int MSG_ID_RequestForQuote543 {543};
constexpr int MSG_ID_NewOrderCross544 {544};
constexpr int MSG_ID_MassQuoteAck545 {545};
constexpr int MSG_ID_RequestForQuoteAck546 {546};
constexpr int MSG_ID_ExecutionReportTradeAddendumOutright548 {548};
constexpr int MSG_ID_ExecutionReportTradeAddendumSpread549 {549};
constexpr int MSG_ID_ExecutionReportTradeAddendumSpreadLeg550 {550};
constexpr int MSG_ID_SecurityDefinitionRequest560 {560};
constexpr int MSG_ID_SecurityDefinitionResponse561 {561};
constexpr int MSG_ID_OrderMassActionReport562 {562};
constexpr int MSG_ID_QuoteCancelAck563 {563};
constexpr int MSG_ID_ExecutionReportPendingCancel564 {564};
constexpr int MSG_ID_ExecutionReportPendingReplace565 {565};
/// char
using CHAR = char;
/// ClientFlowType
constexpr std::array<char, 10> ClientFlowType {'I', 'D', 'E', 'M', 'P', 'O', 'T', 'E', 'N', 'T'};
/// Cross order type supports only limit order
constexpr char CrossOrderType {'2'};
/// Cross Prioritization
constexpr char CrossPrioritization {'0'};
/// Cross Type
constexpr char CrossType {'3'};
/// Cancel Reject
constexpr char CxlRejRsp {'1'};
/// Cancel Replace Reject
constexpr char CxrRejRsp {'2'};
/// ExchangeFlowType
constexpr std::array<char, 11> ExchFlowTyp {'R', 'E', 'C', 'O', 'V', 'E', 'R', 'A', 'B', 'L', 'E'};
/// ExecTypNew
constexpr char ExecTypNew {'0'};
/// Exec Type Reject
constexpr char ExecTypRej {'8'};
/// ExecTypStatus
constexpr char ExecTypStatus {'I'};
/// Exec Type Cxl
constexpr char ExecTypeCxl {'4'};
/// Exec Type Exp
constexpr char ExecTypeExp {'C'};
/// ExecType Modify
constexpr char ExecTypeModify {'5'};
/// Pending Cancel Type
constexpr char ExecTypePendCxl {'6'};
/// Pending Replace
constexpr char ExecTypePendModify {'E'};
/// Execution type for trade
constexpr char ExecTypeTrade {'F'};
/// HMACVersion
constexpr std::array<char, 13> HMACVersion {'C', 'M', 'E', '-', '1', '-', 'S', 'H', 'A', '-', '2', '5', '6'};
/// int32
using Int32 = int32_t;
constexpr int32_t Int32NULL_NULL_VALUE {2147483647}; ///< Null value of Int32NULL
using Int32NULL = int32_t;/// Leg security ID source in UDS creation
constexpr char LegSecIDSource {'8'};
constexpr uint16_t LocalMktDate_NULL_VALUE {65535}; ///< Null value of LocalMktDate
using LocalMktDate = uint16_t;/// Mass action type to represent mass cancel
constexpr char MassAction {'3'};
/// ModifyStatus
constexpr char ModifyStatus {'5'};
/// NoPtyUpd
constexpr uint8_t NoPtyUpd {1};
/// Ord Status Cxl
constexpr char OrdStatusCxl {'4'};
/// OrdStatusCxrRej
constexpr char OrdStatusCxlRej {'U'};
/// OrdStatusCxrRej
constexpr char OrdStatusCxrRej {'U'};
/// Order Status Exp
constexpr char OrdStatusExp {'C'};
/// Order status of New
constexpr char OrdStatusNew {'0'};
/// Pending Cancel Status
constexpr char OrdStatusPendCxl {'6'};
/// Order Status Reject
constexpr char OrdStatusRej {'8'};
/// PartyIDSource
constexpr char PartyIDSource {'C'};
/// Pending Replace Status
constexpr char PendModStatus {'E'};
/// SecurityIDSource
constexpr char SecurityIDSource {'8'};
/// Security request type for UDS creation
constexpr char SecurityReqType {'1'};
/// String with length of 10 required
using String10Req = std::array<char,10>;
/// Optional string with length of 17
using String17 = std::array<char,17>;
/// StringLength2
using String2 = std::array<char,2>;
/// String Length 20
using String20 = std::array<char,20>;
/// String With Length 20
using String20Req = std::array<char,20>;
/// String with length of 256
using String256 = std::array<char,256>;
/// String Length of 3 characters
using String3 = std::array<char,3>;
/// String Length 30
using String30 = std::array<char,30>;
/// String with length of 30 required
using String30Req = std::array<char,30>;
/// String with length of 32 required
using String32Req = std::array<char,32>;
/// String with length 3 required
using String3Req = std::array<char,3>;
/// String length 40 char
using String40 = std::array<char,40>;
/// String with length 48
using String48 = std::array<char,48>;
/// Optional string with length of 5
using String5 = std::array<char,5>;
/// String with length of 5 required
using String5Req = std::array<char,5>;
/// String with length of 75
using String75 = std::array<char,75>;
/// String field length 8
using String8 = std::array<char,8>;
/// String with length of 8 required
using String8Req = std::array<char,8>;
/// String with length of 35
using StringLength35 = std::array<char,35>;
/// StringLength6
using StringLength6 = std::array<char,6>;
/// UDI
constexpr char UDI {'Y'};
/// Char with null value
constexpr char charNULL_NULL_VALUE {0}; ///< Null value of charNULL
using charNULL = char;
constexpr uint8_t enumNULL_NULL_VALUE {255}; ///< Null value of enumNULL
using enumNULL = uint8_t;/// uInt16
using uInt16 = uint16_t;
/// Unsigned Int16 with NULL
constexpr uint16_t uInt16NULL_NULL_VALUE {65535}; ///< Null value of uInt16NULL
using uInt16NULL = uint16_t;
/// uInt32
using uInt32 = uint32_t;
/// uInt32NULL
constexpr uint32_t uInt32NULL_NULL_VALUE {4294967295}; ///< Null value of uInt32NULL
using uInt32NULL = uint32_t;
/// uInt64
using uInt64 = uint64_t;
/// uInt64NULL
constexpr uint64_t uInt64NULL_NULL_VALUE {18446744073709551615}; ///< Null value of uInt64NULL
using uInt64NULL = uint64_t;
/// uInt8
using uInt8 = uint8_t;
/// uInt8NULL
constexpr uint8_t uInt8NULL_NULL_VALUE {255}; ///< Null value of uInt8NULL
using uInt8NULL = uint8_t;
#pragma pack(1)
/// Optional floating point decimal with int32 mantissa and int8 exponent
struct Decimal32NULL {
int32_t mantissa {2147483647}; ///< mantissa
int8_t exponent {127}; ///< exponent
};
/// Optional floating point decimal
struct Decimal64NULL {
int64_t mantissa {9223372036854775807}; ///< mantissa
int8_t exponent {127}; ///< exponent
};
/// Year, Month and Date
struct MaturityMonthYear {
uint16_t year {65535}; ///< YYYY
uint8_t month {255}; ///< MM
uint8_t day {255}; ///< DD
uint8_t week {255}; ///< WW
};
/// Price with constant exponent -9
struct PRICE9 {
int64_t mantissa; ///< mantissa
static constexpr int8_t exponent {-9}; ///< exponent
};
/// Optional Price with constant exponent -9
struct PRICENULL9 {
int64_t mantissa {9223372036854775807}; ///< mantissa
static constexpr int8_t exponent {-9}; ///< exponent
};
/// Repeating group dimensions
struct groupSize {
uint16_t blockLength;
uint8_t numInGroup;
};
/// Repeating group dimensions
struct groupSizeEncoding {
uint16_t blockLength;
uint16_t numInGroup;
};
/// Template ID and length of message root
struct messageHeader {
uint16_t blockLength;
uint16_t templateId;
uint16_t schemaId;
uint16_t version;
};
/// DATA Field
struct DATA_header {
uint16_t length; ///< Length Field
char varData[0]; ///< Variable Length Data
};
enum class AvgPxInd: uInt8NULL{
NoAveragePricing = 0, ///< No Average Pricing
TradeispartofanAveragePriceGroupIdentifiedbytheAvgPxGrpID = 1, ///< Trade is part of an Average Price Group Identified by the AvgPxGrp ID
TradeispartofaNotionalValueAveragePriceGroup = 3, ///< Trade is part of a Notional Value Average Price Group
};
enum class BooleanFlag: uInt8{
False = 0, ///< False, No
True = 1, ///< True, Yes
};
enum class BooleanNULL: uInt8NULL{
False = 0, ///< False, No
True = 1, ///< True, Yes
};
enum class ClearingAcctType: enumNULL{
Customer = 0, ///< Customer
Firm = 1, ///< Firm
};
enum class CmtaGiveUpCD: charNULL{
GiveUp = 'G', ///< Give Up
SGXoffset = 'S', ///< SGX offset
};
enum class CustOrdHandlInst: charNULL{
FCMprovidedscreen = 'C', ///< FCM provided screen
Otherprovidedscreen = 'D', ///< Other provided screen
FCMAPIorFIX = 'G', ///< FCM API or FIX
AlgoEngine = 'H', ///< Algo Engine
DeskElectronic = 'W', ///< Desk Electronic
ClientElectronic = 'Y', ///< Client Electronic
};
enum class CustOrderCapacity: enumNULL{
Membertradingfortheirownaccount = 1, ///< Member trading for their own account
Memberfirmtradingforitsproprietaryaccount = 2, ///< Member firm trading for its proprietary account
Membertradingforanothermemberornonmember = 3, ///< Member trading for another member or non member
Allother = 4, ///< All other
};
enum class DKReason: charNULL{
UnknownSecurity = 'A', ///< Unknown Security
WrongSide = 'B', ///< Wrong Side
QuantityExceedsOrder = 'C', ///< Quantity Exceeds Order
NoMatchingOrder = 'D', ///< No Matching Order
PriceExceedsLimit = 'E', ///< Price Exceeds Limit
CalculationDifference = 'F', ///< Calculation Difference
NoMatchingExecutionReport = 'G', ///< No Matching Execution Report
Other = 'Z', ///< Other
};
enum class ExecAckStatus: uInt8{
Accepted = 1, ///< Accepted
Rejected = 2, ///< Rejected
};
enum class ExecMode: charNULL{
Aggressive = 'A', ///< Aggressive
Passive = 'P', ///< Passive
};
enum class ExecReason: uInt8NULL{
MarketExchangeOption = 8, ///< Market Exchange Option
CancelledNotBest = 9, ///< Cancelled Not Best
CancelOnDisconnect = 100, ///< Cancel On Disconnect
SelfMatchPreventionOldestOrderCancelled = 103, ///< Self Match Prevention Oldest Order Cancelled
CancelOnGlobexCreditControlsViolation = 104, ///< Cancel On Globex Credit Controls Violation
CancelFromFirmsoft = 105, ///< Cancel From Firmsoft
CancelFromRiskManagementAPI = 106, ///< Cancel From Risk Management API 
SelfMatchPreventionNewestOrderCancelled = 107, ///< Self Match Prevention Newest Order Cancelled
Cancelduetovolquotedoptionorderrestedqtylessthanminordersize = 108, ///< Cancel due to min qty violation
CancelRFCOrder = 109, ///< Cancel RFC Order
CancelUponContractExpiration = 110, ///< Cancel Upon Contract Expiration
SystemCancel = 111, ///< System Cancel
};
enum class ExecTypTrdCxl: CHAR{
TradeCorrection = 'G', ///< Trade Correction
TradeCancel = 'H', ///< Trade Cancel
};
enum class ExpCycle: uInt8NULL{
ExpireOnTradingSessionClose = 0, ///< Expire On Trading Session Close
Expirationatgivendate = 2, ///< Expiration at given date 
};
enum class FTI: uInt8NULL{
Backup = 0, ///< Backup
Primary = 1, ///< Primary
};
enum class KeepAliveLapsed: uInt8{
NotLapsed = 0, ///< NotLapsed
Lapsed = 1, ///< Lapsed
};
enum class ListUpdAct: CHAR{
Add = 'A', ///< Add
Delete = 'D', ///< Delete
};
enum class ManualOrdInd: enumNULL{
Automated = 0, ///< Automated
Manual = 1, ///< Manual
};
enum class ManualOrdIndReq: uInt8{
Automated = 0, ///< Automated
Manual = 1, ///< Manual
};
enum class MassActionOrdTyp: charNULL{
Limit = '2', ///< Limit
StopLimit = '4', ///< Stop Limit
};
enum class MassActionResponse: uInt8{
Rejected = 0, ///< Rejected
Accepted = 1, ///< Accepted
};
enum class MassActionScope: uInt8{
Instrument = 1, ///< Instrument
All = 7, ///< All
MarketSegmentID = 9, ///< Market Segment ID
InstrumentGroup = 10, ///< Instrument Group
QuoteSetID = 100, ///< Quote Set ID
};
enum class MassCancelTIF: uInt8NULL{
Day = 0, ///< Day
GoodTillCancel = 1, ///< Good Till Cancel
GoodTillDate = 6, ///< Good Till Date
};
enum class MassCxlReqTyp: uInt8NULL{
SenderSubID = 100, ///< Sender Sub ID
Account = 101, ///< Account
};
enum class MassStatusOrdTyp: uInt8NULL{
SenderSubID = 100, ///< SenderSubID
Account = 101, ///< Account
};
enum class MassStatusReqTyp: uInt8{
Instrument = 1, ///< Instrument
InstrumentGroup = 3, ///< Instrument Group
AllOrders = 7, ///< All Orders
MarketSegment = 100, ///< Market Segment
};
enum class MassStatusTIF: uInt8NULL{
Day = 0, ///< Day
GTC = 1, ///< GTC
GTD = 6, ///< GTD
GFS = 99, ///< GFS
};
enum class OFMOverrideReq: uInt8{
Disabled = 0, ///< Disabled
Enabled = 1, ///< Enabled
};
enum class OrdStatusTrd: uInt8{
PartiallyFilled = 1, ///< Partially Filled
Filled = 2, ///< Filled
};
enum class OrdStatusTrdCxl: CHAR{
TradeCorrection = 'G', ///< Trade Correction
TradeCancel = 'H', ///< Trade Cancel
};
enum class OrderEventType: enumNULL{
PartiallyFilled = 4, ///< Partially Filled
Filled = 5, ///< Filled
};
enum class OrderStatus: CHAR{
New = '0', ///< New
PartiallyFilled = '1', ///< Partially Filled
Filled = '2', ///< Filled
Cancelled = '4', ///< Cancelled
Replaced = '5', ///< Replaced
PendingCancel = '6', ///< Pending Cancel
Rejected = '8', ///< Rejected
Expired = 'C', ///< Expired
PendingReplace = 'E', ///< Pending Replace
Undefined = 'U', ///< Undefined
};
enum class OrderType: charNULL{
MarketWithProtection = '1', ///< Market With Protection
Limit = '2', ///< Limit
StopLimit = '4', ///< Stop Limit
MarketWithLeftoverAsLimit = 'K', ///< Market With Leftover As Limit
};
enum class OrderTypeReq: CHAR{
MarketwithProtection = '1', ///< Market with Protection
Limit = '2', ///< Limit
StopwithProtection = '3', ///< Stop with Protection
StopLimit = '4', ///< Stop Limit
MarketWithLeftoverAsLimit = 'K', ///< Market With Leftover As Limit
};
enum class PartyDetailRole: uInt16{
ExecutingFirm = 1, ///< Executing Firm
CustomerAccount = 24, ///< Customer Account
TakeUpFirm = 96, ///< Take Up Firm
Operator = 118, ///< Operator
TakeUpAccount = 1000, ///< Take Up Account
};
enum class QuoteAckStatus: uInt8{
Accepted = 0, ///< Accepted
Rejected = 5, ///< Rejected
};
enum class QuoteCxlStatus: uInt8{
CancelperInstrument = 1, ///< Cancel per Instrument
CancelperInstrumentgroup = 3, ///< Cancel per Instrument group
Cancelallquotes = 4, ///< Cancel all quotes
Rejected = 5, ///< Rejected
CancelperQuoteSet = 100, ///< Cancel per Quote Set
};
enum class QuoteCxlTyp: uInt8{
CancelperInstrument = 1, ///< Cancel per Instrument
CancelperInstrumentgroup = 3, ///< Cancel per Instrument group
Cancelallquotes = 4, ///< Cancel all quotes
CancelperQuoteSet = 100, ///< Cancel per Quote Set
};
enum class QuoteTyp: enumNULL{
Tradeable = 1, ///< Tradeable
};
enum class RFQSide: uInt8NULL{
Buy = 1, ///< Buy
Sell = 2, ///< Sell
Cross = 8, ///< Cross
};
enum class ReqResult: uInt8{
ValidRequest = 0, ///< Valid Request
NoDataFoundThatMatchedSelectionCriteria = 2, ///< No Data Found That Matched Selection Criteria
NotAuthorizedtoRetrieveData = 3, ///< Not Authorized to Retrieve Data
DataTemporarilyUnavailable = 4, ///< Data Temporarily Unavailable
};
enum class SLEDS: uInt8NULL{
TradeClearingatExecutionPrice = 0, ///< Trade Clearing at Execution Price
TradeClearingatAlternateClearingPrice = 1, ///< Trade Clearing at Alternate Clearing Price
};
enum class SMPI: charNULL{
CancelNewest = 'N', ///< Cancel Newest
CancelOldest = 'O', ///< Cancel Oldest
};
enum class SecRspTyp: uInt8{
AcceptSecurityProposalasis = 1, ///< Accept Security Proposal as is
AcceptSecurityproposalwithrevisionsasindicatedinthemessage = 2, ///< Accept Security proposal with revisions as indicated in the message
RejectSecurityProposal = 5, ///< Reject Security Proposal
};
enum class ShortSaleType: enumNULL{
LongSell = 0, ///< Long Sell
ShortSaleWithNoExemptionSESH = 1, ///< Short Sale With No Exemption SESH
ShortSaleWithExemptionSSEX = 2, ///< Short Sale With Exemption SSEX
UndisclosedSellInformationNotAvailableUNDI = 3, ///< Undisclosed Sell Information Not Available UNDI
};
enum class SideNULL: enumNULL{
Buy = 1, ///< Buy
Sell = 2, ///< Sell
};
enum class SideReq: uInt8{
Buy = 1, ///< Buy
Sell = 2, ///< Sell
Undisclosed = 7, ///< Undisclosed
};
enum class SideTimeInForce: uInt8{
Day = 0, ///< Day
FAK = 3, ///< FAK
};
enum class SplitMsg: uInt8NULL{
SplitMessageDelayed = 0, ///< Split Message Delayed
OutofOrderMessageDelayed = 1, ///< Out of Order Message Delayed
CompleteMessageDelayed = 2, ///< Complete Message Delayed
};
enum class TimeInForce: uInt8NULL{
Day = 0, ///< Day
GoodTillCancel = 1, ///< Good Till Cancel
FillAndKill = 3, ///< Fill And Kill
FillOrKill = 4, ///< Fill Or Kill
GoodTillDate = 6, ///< Good Till Date
GoodForSession = 99, ///< Good For Session
};
enum class TradeAddendum: uInt8{
PartiallyFilled = 4, ///< Partially Filled
Filled = 5, ///< Filled
TradeCancel = 100, ///< Trade Cancel
TradeCorrection = 101, ///< Trade Correction
};
constexpr int ExecInst_AON {0}; ///< 1=All Or None,0=Not All Or None
constexpr int ExecInst_AON_MASK {1};
constexpr int ExecInst_OB {1}; ///< 1=Only Best,0=Not Only Best
constexpr int ExecInst_OB_MASK {2};
constexpr int ExecInst_NH {2}; ///< 1=Not Held,0=Not Not Held
constexpr int ExecInst_NH_MASK {4};
constexpr int ExecInst_Reserved1 {3}; ///< 0=Reserved For Future Use
constexpr int ExecInst_Reserved1_MASK {8};
constexpr int ExecInst_Reserved2 {4}; ///< 0=Reserved For Future Use
constexpr int ExecInst_Reserved2_MASK {16};
constexpr int ExecInst_Reserved3 {5}; ///< 0=Reserved For Future Use
constexpr int ExecInst_Reserved3_MASK {32};
constexpr int ExecInst_Reserved4 {6}; ///< 0=Reserved For Future Use
constexpr int ExecInst_Reserved4_MASK {64};
constexpr int ExecInst_Reserved5 {7}; ///< 0=Reserved For Future Use
constexpr int ExecInst_Reserved5_MASK {128};
using ExecInst = uInt8;
/// Negotiate block_length: 76.
struct Negotiate500 {
static constexpr int id {MSG_ID_Negotiate500};
static constexpr int block_length {76};
static constexpr decltype(ClientFlowType) CustomerFlow {ClientFlowType}; ///< Constant value representing type of flow from customer to CME. id: 39000
static constexpr decltype(HMACVersion) HMACVersion {HMACVersion}; ///< Constant value representing CME HMAC version. id: 39003
String32Req HMACSignature; ///< Contains the HMAC signature.. id: 39005
String20Req AccessKeyID; ///< Contains the AccessKeyID assigned to this session on this port.. id: 39004
uInt64 UUID; ///< Session Identifier defined as type long (uInt64); recommended to use timestamp as number of microseconds since epoch (Jan 1, 1970). id: 39001
uInt64 RequestTimestamp; ///< Time of request; recommended to use timestamp as number of nanoseconds since epoch (Jan 1, 1970). id: 39002
String3Req Session; ///< Session ID. id: 39006
String5Req Firm; ///< Firm ID. id: 39007
char VariableData [0];
};
/// NegotiationResponse block_length: 32.
struct NegotiationResponse501 {
static constexpr int id {MSG_ID_NegotiationResponse501};
static constexpr int block_length {32};
static constexpr decltype(ExchFlowTyp) ServerFlow {ExchFlowTyp}; ///< Constant value representing type of flow from CME to customer. id: 39009
uInt64 UUID; ///< Matches Negotiate.UUID. id: 39001
uInt64 RequestTimestamp; ///< Matches Negotiate.RequestTimestamp. id: 39002
uInt16NULL SecretKeySecureIDExpiration; ///< This indicates in how many days the HMAC secret key will expire. id: 39022
FTI FaultToleranceIndicator; ///< Indicates whether the connection is primary or backup. id: 39010
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
uInt32 PreviousSeqNo; ///< Refers to the SeqNum sent in the previous message before this one from CME. id: 39021
uInt64 PreviousUUID; ///< Refers to the UUID sent in the previous message before this one from CME. id: 39015
char VariableData [0];
};
/// NegotiationReject block_length: 68.
struct NegotiationReject502 {
static constexpr int id {MSG_ID_NegotiationReject502};
static constexpr int block_length {68};
String48 Reason; ///< Reject reason details. id: 39011
uInt64 UUID; ///< Matches Negotiate.UUID. id: 39001
uInt64 RequestTimestamp; ///< Matches Negotiate.RequestTimestamp. id: 39002
uInt16 ErrorCodes; ///< Error code for reject reason. id: 39012
FTI FaultToleranceIndicator; ///< Indicates whether the connection is primary or backup. id: 39010
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
};
/// Establish block_length: 132.
struct Establish503 {
static constexpr int id {MSG_ID_Establish503};
static constexpr int block_length {132};
static constexpr decltype(HMACVersion) HMACVersion {HMACVersion}; ///< Constant value representing CME HMAC version. id: 39003
String32Req HMACSignature; ///< Contains the HMAC signature. id: 39005
String20Req AccessKeyID; ///< Contains the AccessKeyID assigned to this session on this port. id: 39004
String30Req TradingSystemName; ///< Provides the name of the application system being used to generate FIX application messages.. id: 1603
String10Req TradingSystemVersion; ///< Provides the version of the application system being used to initiate FIX application messages.. id: 1604
String10Req TradingSystemVendor; ///< Provides the vendor of the application system. id: 1605
uInt64 UUID; ///< Session Identifier defined as type long (uInt64); recommended to use timestamp as number of microseconds since epoch (Jan 1, 1970). id: 39001
uInt64 RequestTimestamp; ///< Time of request; recommended to use timestamp as number of nanoseconds since epoch (Jan 1, 1970). id: 39002
uInt32 NextSeqNo; ///< Next expected message sequence number. id: 39013
String3Req Session; ///< Session ID. id: 39006
String5Req Firm; ///< Firm ID. id: 39007
uInt16 KeepAliveInterval; ///< The longest time in milliseconds the customer or CME could remain silent before sending a keep alive message. id: 39014
char VariableData [0];
};
/// EstablishmentAck block_length: 38.
struct EstablishmentAck504 {
static constexpr int id {MSG_ID_EstablishmentAck504};
static constexpr int block_length {38};
uInt64 UUID; ///< Matches Establish.UUID. id: 39001
uInt64 RequestTimestamp; ///< Matches Establish.RequestTimestamp. id: 39002
uInt32 NextSeqNo; ///< Next expected message sequence number. id: 39013
uInt32 PreviousSeqNo; ///< Refers to the SeqNum sent in the previous message before this one from CME. id: 39021
uInt64 PreviousUUID; ///< Refers to the UUID sent in the previous message before this one from CME. id: 39015
uInt16 KeepAliveInterval; ///< The longest time in milliseconds the customer or CME could remain silent before sending a keep alive message. id: 39014
uInt16NULL SecretKeySecureIDExpiration; ///< This indicates in how many days the HMAC secret key will expire. id: 39022
FTI FaultToleranceIndicator; ///< Indicates whether the connection is primary or backup. id: 39010
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
};
/// EstablishmentReject block_length: 72.
struct EstablishmentReject505 {
static constexpr int id {MSG_ID_EstablishmentReject505};
static constexpr int block_length {72};
String48 Reason; ///< Reject reason details. id: 39011
uInt64 UUID; ///< Matches Establish.UUID. id: 39001
uInt64 RequestTimestamp; ///< Matches Establish.RequestTimestamp. id: 39002
uInt32 NextSeqNo; ///< Next expected message sequence number. id: 39013
uInt16 ErrorCodes; ///< Error code for reject reason. id: 39012
FTI FaultToleranceIndicator; ///< Indicates whether the connection is primary or backup. id: 39010
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
};
/// Sequence block_length: 14.
struct Sequence506 {
static constexpr int id {MSG_ID_Sequence506};
static constexpr int block_length {14};
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
uInt32 NextSeqNo; ///< Next expected message sequence number. id: 39013
FTI FaultToleranceIndicator; ///< Indicates whether the connection is primary or backup. id: 39010
KeepAliveLapsed KeepAliveIntervalLapsed; ///< This indicates if the Sequence message being sent by CME is to warn that one keep alive interval has lapsed without any message received from customer (this can also be sent from customer to CME). id: 39016
};
/// Terminate block_length: 67.
struct Terminate507 {
static constexpr int id {MSG_ID_Terminate507};
static constexpr int block_length {67};
String48 Reason; ///< Reject reason details. id: 39011
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
uInt64 RequestTimestamp; ///< Time of request; recommended to use timestamp as number of nanoseconds since epoch (Jan 1, 1970). id: 39002
uInt16 ErrorCodes; ///< Error code for reject reason. id: 39012
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
};
/// RetransmitRequest block_length: 30.
struct RetransmitRequest508 {
static constexpr int id {MSG_ID_RetransmitRequest508};
static constexpr int block_length {30};
uInt64 UUID; ///< Matches Establish.UUID. id: 39001
uInt64NULL LastUUID; ///< If RetransmitRequest is for a previous UUID then put that here otherwise put default null value. id: 39017
uInt64 RequestTimestamp; ///< Time of request; recommended to use timestamp as number of nanoseconds since epoch (Jan 1, 1970). id: 39002
uInt32 FromSeqNo; ///< Sequence number of the first business message requested. This should not be greater than the latest sequence number from CME. id: 39018
uInt16 MsgCount; ///< Count of business messages requested. id: 39019
};
/// Retransmission block_length: 31.
struct Retransmission509 {
static constexpr int id {MSG_ID_Retransmission509};
static constexpr int block_length {31};
uInt64 UUID; ///< Matches RetransmitRequest.UUID. id: 39001
uInt64NULL LastUUID; ///< Matches RetransmitRequest.LastUUID. id: 39017
uInt64 RequestTimestamp; ///< Matches RetransmitRequest.RequestTimestamp. id: 39002
uInt32 FromSeqNo; ///< Matches RetransmitRequest.FromSeqNo. id: 39018
uInt16 MsgCount; ///< Matches RetransmitRequest.MsgCount. id: 39019
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
};
/// RetransmitReject block_length: 75.
struct RetransmitReject510 {
static constexpr int id {MSG_ID_RetransmitReject510};
static constexpr int block_length {75};
String48 Reason; ///< Reject reason details. id: 39011
uInt64 UUID; ///< Matches RetransmitRequest.UUID. id: 39001
uInt64NULL LastUUID; ///< Matches RetransmitRequest.LastUUID. id: 39017
uInt64 RequestTimestamp; ///< Matches RetransmitRequest.RequestTimestamp. id: 39002
uInt16 ErrorCodes; ///< Error code for reject reason. id: 39012
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
};
/// NotApplied block_length: 17.
struct NotApplied513 {
static constexpr int id {MSG_ID_NotApplied513};
static constexpr int block_length {17};
uInt64 UUID; ///< Matches Establish.UUID. id: 39001
uInt32 FromSeqNo; ///< First not applied sequence number. id: 39018
uInt32 MsgCount; ///< Count of how many messages have not been applied. id: 39019
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. This is applicable only to the incoming message which triggers the gap detection and is not reflective of whether any message sent earlier as part of that sequence gap and not received by CME was delayed or not. id: 9553
};
/// NewOrderSingle block_length: 132.
struct NewOrderSingle514 {
static constexpr int id {MSG_ID_NewOrderSingle514};
static constexpr int block_length {132};
PRICENULL9 Price; ///< Price per share or contract. Conditionally required if the order type requires a price (not market orders).. id: 44
uInt32 OrderQty; ///< Number of shares or contracts ordered. id: 38
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages. id: 48
SideReq Side; ///< Side of order. id: 54
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 OrderRequestID; ///< Use OrderRequestID to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport representing the response. id: 2422
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
PRICENULL9 StopPx; ///< The stop price of a stop protect or stop limit order. (Conditionally required if OrdType = 3 or 4).. id: 99
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
uInt32NULL MinQty; ///< Minimum quantity of an order to be executed. id: 110
uInt32NULL DisplayQty; ///< The quantity to be displayed . Required for iceberg orders. On orders specifies the qty to be displayed, on execution reports the currently displayed quantity. id: 1138
LocalMktDate ExpireDate; ///< Date of order expiration (last day the order can trade), always expressed in terms of the local market date. Applicable only to GTD orders which expire at the end of the trading session specified. This has to be a future or current session date and cannot be in the past.. id: 432
OrderTypeReq OrdType; ///< Order type. id: 40
TimeInForce TimeInForce; ///< Specifies how long the order remains in effect. id: 59
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
ExecInst ExecInst; ///< Instructions for order handling on exchange. Since more than one instruction is applicable to an order, this field can represent those using a bitset.. id: 18
ExecMode ExecutionMode; ///< Identifies whether the order should be treated as passive (will not match when entered) or aggressive (could match when entered); default behavior when absent is aggressive. id: 5906
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
BooleanNULL ManagedOrder; ///< Boolean: flags a managed order. id: 6881
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
PRICENULL9 DiscretionPrice; ///< The presence of DiscretionPrice on an order indicates that the trader wishes to display one price but will accept trades at another price. id: 845
PRICENULL9 ReservationPrice; ///< This field specifies the highest (for a buy) or lowest (for a sell) price at which the order may trade. This price must be better than the limit price and should be multiple of reservation price tick. id: 9562
};
/// OrderCancelReplaceRequest block_length: 133.
struct OrderCancelReplaceRequest515 {
static constexpr int id {MSG_ID_OrderCancelReplaceRequest515};
static constexpr int block_length {133};
PRICENULL9 Price; ///< Price per share or contract. Conditionally required if the order type requires a price (not market orders). id: 44
uInt32 OrderQty; ///< Number of shares or contracts ordered. id: 38
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages. id: 48
SideReq Side; ///< Side of order. id: 54
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64NULL OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments.. id: 37
PRICENULL9 StopPx; ///< The stop price of a stop protect or stop limit order. (Conditionally required if OrdType = 3 or 4).. id: 99
uInt64 OrderRequestID; ///< Use OrderRequestID to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport representing the response. id: 2422
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
uInt32NULL MinQty; ///< Minimum quantity of an order to be executed. id: 110
uInt32NULL DisplayQty; ///< Maximum number of shares or contracts within an order to be shown on the match engine at any given time. id: 1138
LocalMktDate ExpireDate; ///< Date of order expiration (last day the order can trade), always expressed in terms of the local market date. Applicable only to GTD orders which expire at the end of the trading session specified. This has to be a future or current session date and cannot be in the past.. id: 432
OrderTypeReq OrdType; ///< Order type. id: 40
TimeInForce TimeInForce; ///< Specifies how long the order remains in effect. id: 59
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
OFMOverrideReq OFMOverride; ///< Flag indicating whether the order quantity stipulated on replace request should be entered into the market as stated without reduction for any fills that have occurred. Also once enabled in the order chain it cannot be disabled. id: 9768
ExecInst ExecInst; ///< Instructions for order handling on exchange. Since more than one instruction is applicable to an order, this field can represent those using a bitset.. id: 18
ExecMode ExecutionMode; ///< Identifies whether the order should be treated as passive (will not match when entered) or aggressive (could match when entered); default behavior when absent is aggressive. id: 5906
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
BooleanNULL ManagedOrder; ///< Boolean: flags a managed order. id: 6881
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated. id: 5409
PRICENULL9 DiscretionPrice; ///< The presence of DiscretionPrice on an order indicates that the trader wishes to display one price but will accept trades at another price. id: 845
};
/// OrderCancelRequest block_length: 96.
struct OrderCancelRequest516 {
static constexpr int id {MSG_ID_OrderCancelRequest516};
static constexpr int block_length {96};
uInt64NULL OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments.. id: 37
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 OrderRequestID; ///< Use OrderRequestID to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport representing the response. id: 2422
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages. Falcon ignores the incoming value except when null and returns back the correct one in the outgoing execution report.. id: 48
SideReq Side; ///< Side of order.. id: 54
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
String8 OrigOrderUser; ///< Represents the original sender comp for whom orders or quotes are to be cancelled. id: 9937
};
/// MassQuote block_length: 123.
struct MassQuote517 {
static constexpr int id {MSG_ID_MassQuote517};
static constexpr int block_length {123};
/// The number of quoute entries for a quote set id: 295
struct NoQuoteEntries {
static constexpr int id {FIELD_ID_NoQuoteEntries}; ///< id = 295
using DimensionType = groupSize;
PRICENULL9 BidPx; ///< Bid price/rate. This goes together with bid size (tag 134). Note that either BidPx, OfferPx or both must be specified for a new quote. Resting quote can be cancelled by not providing either of these four parameters.. id: 132
PRICENULL9 OfferPx; ///< Offer price/rate. This goes together with offer size (tag 135). Note that either BidPx, OfferPx or both must be specified for a new quote. Resting quote can be cancelled by not providing either of these four parameters.. id: 133
uInt32 QuoteEntryID; ///< Unique identifier for a quote. The QuoteEntryID stays with the quote as a static identifier even if the quote is updated. For fills this value is transposed into client order ID (tag 11). id: 299
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages. id: 48
uInt32NULL BidSize; ///< Quantity of bid. This goes together with bid price (tag 132).. id: 134
uInt32NULL OfferSize; ///< Quantity of offer. This goes together with offer price (tag 133).. id: 135
Int32NULL UnderlyingSecurityID; ///< Underlying Security ID. This value will be the same as that contained in Security Definition Tag 48-SecurityID of the underlying instrument. id: 309
uInt16 QuoteSetID; ///< Unique id for the Quote Set. id: 302
};
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). Reject if greater than max length. Flip back incoming value in outgoing execution report only if either Y/N otherwise ignore. . id: 1028
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
uInt64NULL QuoteReqID; ///< Unique identifier for quote request being responded to. id: 131
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
uInt32 QuoteID; ///< Unique identifier for mass quote populated by the client system. id: 117
uInt8 TotNoQuoteEntries; ///< Total number of quotes for the quote set across all messages. Should be the sum of all NoQuoteEntries in each message that has repeating quotes that are part of the same quote set. Required if NoQuoteEntries > 0. Since fragmentation is not supported in practice this will always be equal to the value of NoQuoteEntries. id: 304
BooleanFlag MMProtectionReset; ///< When market maker protection is triggered CME will not accept any new quotes from the market maker for that product group until it receives a mass quote message with the MMProtectionReset flag set to true. id: 9773
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
String30 Reserved; ///< Reserved for future use. id: 5187
String30 Reserved1; ///< Reserved for future use. id: 5239
BooleanNULL QuoteEntryOpen; ///< A boolean value indicating if new quotes should be rejected for the sender comp for whom quotes are being cancelled on behalf; also to be used to reset such a block on mass quotes being sent by the blocked sender comp  . id: 9182
char VariableData [0];
};
/// PartyDetailsDefinitionRequest block_length: 147.
struct PartyDetailsDefinitionRequest518 {
static constexpr int id {MSG_ID_PartyDetailsDefinitionRequest518};
static constexpr int block_length {147};
/// Number of party details. More than one occurrence of the same party role is not allowed and will be rejected id: 1671
struct NoPartyDetails {
static constexpr int id {FIELD_ID_NoPartyDetails}; ///< id = 1671
using DimensionType = groupSize;
String20Req PartyDetailID; ///< The identification of the party. Required when NoPartyDetails(1671) > 0. id: 1691
static constexpr decltype(PartyIDSource) PartyDetailIDSource {PartyIDSource}; ///< Used to identify source of PartyDetailID value. Required when NoPartyDetails(1671) greater than 0. Constant value of C. id: 1692
PartyDetailRole PartyDetailRole; ///< Identifies the type of PartyDetailID. Required when NoPartyDetails(1671) > 0. id: 1693
};
/// Number of regulatory publication rules in repeating group. Should always be "1" if being used otherwise set to 0 id: 2668
struct NoTrdRegPublications {
static constexpr int id {FIELD_ID_NoTrdRegPublications}; ///< id = 2668
using DimensionType = groupSize;
uInt8 TrdRegPublicationType; ///< Specifies the type of regulatory trade publication. Additional reasons for the publication type will be specified in TrdRegPublicationReason (2670). 2=Exempt from Publication. There are allowable exemptions for the post-trade publication of trade transactions. id: 2669
uInt8 TrdRegPublicationReason; ///< Additional reason for trade publication type specified in TrdRegPublicationType (2669). Reasons may be specific to regulatory trade publication rules. 12=Exempted due to European System of Central Banks (ESCB) policy transaction. id: 2670
};
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequest(35=CX) message. For use with short messages and registering party details through iLink this ID should be unique. For use with long messages this ID should be set to FFFFFFFF. id: 1505
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
ListUpdAct ListUpdateAction; ///< Indicates if all of the information sent in this message with a unique new PartyDetailsListRequestID is a new addition or deletion of existing information associated with an existing PartyDetailsListRequestID. For PartyDetailsListRequestID=FFFFFFFF this should always be set to "A". id: 1324
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
String75 Memo; ///< This general purpose text field could be mapped from iLink to Clearing STP for trades. Not available for use with the short format where PartyDetailsListRequestID not equal to FFFFFFFF. Available for use only with the long format where PartyDetailsListRequestID=FFFFFFFF. id: 5149
String20 AvgPxGroupID; ///< Used by submitting firm to group trades being allocated into an average price group. The trades in average price group will be used to calculate an average price for the group. id: 1731
uInt64NULL SelfMatchPreventionID; ///< Identifies an order or trade that should not be matched to an opposite order or trade if both buy and sell orders for the same asset contain the same SelfMatchPreventionID (2362) and submitted by the same firm. id: 2362
CmtaGiveUpCD CmtaGiveupCD; ///< Indicates if the order is a give-up or SGX offset. Reject if greater than max length or not containing valid value. . id: 9708
CustOrderCapacity CustOrderCapacity; ///< Capacity of customer placing the order. Used by futures exchanges to indicate the CTICode (customer type indicator) as required by the US CFTC (Commodity Futures Trading Commission). id: 582
ClearingAcctType ClearingAccountType; ///< Designates the account type to be used for the order when submitted to clearing. id: 1816
SMPI SelfMatchPreventionInstruction; ///< Used to act upon the outcome when a self-match is detected and an order is prevented from trading against another order with the same SelfMatchPreventionID (Tag 2362). 1=Cancel newest signifies that incoming order is cancelled. 2=Cancel Oldest signifies that the resting order is cancelled. Absence of this field (with Tag 2362) is interpreted as cancel oldest. id: 8000
AvgPxInd AvgPxIndicator; ///< Average pricing indicator. id: 819
SLEDS ClearingTradePriceType; ///< Indicates to recipient whether trade is clearing at execution prices LastPx (tag 31) or alternate clearing price (prior day settlement price). id: 1598
CustOrdHandlInst CustOrderHandlingInst; ///< Codes that apply special information that the Broker / Dealer needs to report, as specified by the customer. Defines source of the order . id: 1031
uInt64NULL Executor; ///< Will be populated with a short code for the person or algo identified in FIX tag 5392 which will be mapped to National ID or Algo at reporting time. Applicable for EU fixed income markets only. id: 5290
uInt64NULL IDMShortCode; ///< Represents the Investment Decision Maker Short Code. Applicable for EU fixed income markets only. id: 36023
static constexpr decltype(NoPtyUpd) NoPartyUpdates {NoPtyUpd}; ///< Number of party updates. Constant value of 1. id: 1676
char VariableData [0];
};
/// PartyDetailsDefinitionRequestAck block_length: 159.
struct PartyDetailsDefinitionRequestAck519 {
static constexpr int id {MSG_ID_PartyDetailsDefinitionRequestAck519};
static constexpr int block_length {159};
/// Number of party details. More than one occurrence of the same party role is not allowed and will be rejected id: 1671
struct NoPartyDetails {
static constexpr int id {FIELD_ID_NoPartyDetails}; ///< id = 1671
using DimensionType = groupSize;
String20Req PartyDetailID; ///< The identification of the party. Required when NoPartyDetails(1671) > 0. id: 1691
static constexpr decltype(PartyIDSource) PartyDetailIDSource {PartyIDSource}; ///< Used to identify source of PartyDetailID value. Required when NoPartyDetails(1671) > 0. Constant value of "C".. id: 1692
PartyDetailRole PartyDetailRole; ///< Identifies the type of PartyDetailID. Required when NoPartyDetails(1671) > 0. id: 1693
};
/// Number of regulatory publication rules in repeating group. Should always be "1" if being used otherwise set to 0 id: 2668
struct NoTrdRegPublications {
static constexpr int id {FIELD_ID_NoTrdRegPublications}; ///< id = 2668
using DimensionType = groupSize;
uInt8 TrdRegPublicationType; ///< Specifies the type of regulatory trade publication. Additional reasons for the publication type will be specified in TrdRegPublicationReason (2670). 2=Exempt from Publication. There are allowable exemptions for the post-trade publication of trade transactions. id: 2669
uInt8 TrdRegPublicationReason; ///< Additional reason for trade publication type specified in TrdRegPublicationType (2669). Reasons may be specific to regulatory trade publication rules. 12=Exempted due to European System of Central Banks (ESCB) policy transaction. id: 2670
};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String75 Memo; ///< This general purpose text field could be mapped from iLink to Clearing STP for trades. id: 5149
String20 AvgPxGroupID; ///< Used by submitting firm to group trades being allocated into an average price group. The trades in average price group will be used to calculate an average price for the group. id: 1731
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequest(35=CX) message. For use with short messages and registering party details through iLink this ID should be unique. For use with long messages this ID should be set to FFFFFFFF. id: 1505
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64NULL SelfMatchPreventionID; ///< Used by the Falcon engine to prevent orders from the same firm matching with each other. Each message sent with this tag and the same matching value will be eligible for Self-Match Prevention.. id: 2362
uInt8 PartyDetailRequestStatus; ///< Status of party details definition request. id: 1878
CustOrderCapacity CustOrderCapacity; ///< Capacity of customer placing the order. Used by futures exchanges to indicate the CTICode (customer type indicator) as required by the US CFTC (Commodity Futures Trading Commission). id: 582
ClearingAcctType ClearingAccountType; ///< Designates the account type to be used for the order when submitted to clearing. id: 1816
SMPI SelfMatchPreventionInstruction; ///< Used to act upon the outcome when a self-match is detected and an order is prevented from trading against another order with the same SelfMatchPreventionID (Tag 2362). N=Cancel newest signifies that incoming order is cancelled. O=Cancel Oldest signifies that the resting order is cancelled. Absence of this field (with Tag 2362) is interpreted as cancel oldest. id: 8000
AvgPxInd AvgPxIndicator; ///< Indicates if the resulting trade is to be average priced or not. Is also used to indicate type of average price grouping. id: 819
SLEDS ClearingTradePriceType; ///< Indicates whether spread differential trade is clearing at execution price (LastPx Tag 31) or alternate clearing price (prior day settle price). id: 1598
CmtaGiveUpCD CmtaGiveupCD; ///< Indicates if the order is a give-up or SGX offset. id: 9708
CustOrdHandlInst CustOrderHandlingInst; ///< Codes that apply special information that the Broker / Dealer needs to report, as specified by the customer. Defines source of the order . id: 1031
static constexpr decltype(NoPtyUpd) NoPartyUpdates {NoPtyUpd}; ///< Number of party updates. Constant value of 1. id: 1676
ListUpdAct ListUpdateAction; ///< Indicates if all of the information sent in this message with a unique new PartyDetailsListRequestID is a new addition or deletion of existing information (TBD) associated with an existing PartyDetailsListRequestID. For PartyDetailsListRequestID=FFFFFFFF this should always be set to "A". id: 1324
uInt8 PartyDetailDefinitionStatus; ///< Status of party detail definition for one party. id: 1879
uInt64NULL Executor; ///< Will be populated with a short code for the person or algo identified in FIX tag 5392 which will be mapped to National ID or Algo at reporting time. id: 5290
uInt64NULL IDMShortCode; ///< Represents the Investment Decision Maker Short Code. id: 36023
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
char VariableData [0];
};
/// BusinessReject block_length: 330.
struct BusinessReject521 {
static constexpr int id {MSG_ID_BusinessReject521};
static constexpr int block_length {330};
uInt32 SeqNum; ///< Sequence number of this message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String256 Text; ///< Reject reason details. Will be used only for descriptive rejects. id: 58
String20 SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
uInt64NULL PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64NULL BusinessRejectRefID; ///< The value of the business-level ID field on the message being referenced. Required unless the corresponding ID field was not specified.. id: 379
String5 Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
uInt32NULL RefSeqNum; ///< Tag 9726 - SeqNum of the rejected message. id: 45
uInt16NULL RefTagID; ///< The tag number of the FIX/FIXP field being referenced which is invalid. id: 371
uInt16 BusinessRejectReason; ///< Code to identify reason for a Business Message Reject message. id: 380
String2 RefMsgType; ///< The MsgType of the FIX message being referenced.. id: 372
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
ManualOrdInd ManualOrderIndicator; ///< Indicates if order was sent manually or generated by automated trading logic. id: 1028
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
};
/// ExecutionReportNew block_length: 226.
struct ExecutionReportNew522 {
static constexpr int id {MSG_ID_ExecutionReportNew522};
static constexpr int block_length {226};
uInt32 SeqNum; ///< Sequence number of this message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String40 ExecID; ///< Unique identifier of execution message as assigned by the exchange and is unique per day across all instruments and across all good till orders.. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequestAck attached to this message; pancake flip of what was submitted on inbound message. id: 1505
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments.. id: 37
PRICE9 Price; ///< Price per share or contract. id: 44
PRICENULL9 StopPx; ///< The stop price of a stop protect or stop limit order. (Conditionally required if OrdType = 3 or 4).. id: 99
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 OrderRequestID; ///< OrderRequestID used to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport. id: 2422
uInt64NULL CrossID; ///< Identifier for a cross order. Will be present if execution report is in response to a cross order. id: 548
uInt64NULL HostCrossID; ///< Host assigned entity ID that can be used to reference all components of a cross; sides +  strategy + legs. The HostCrossID will also be used to link together components of the  cross order. For example, each individual execution report associated with the order will carry HostCrossID in order to tie them back together to the original cross order.. id: 961
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages. id: 48
uInt32 OrderQty; ///< Order quantity submitted by client. id: 38
uInt32NULL MinQty; ///< Minimum quantity of an order to be executed.. id: 110
uInt32NULL DisplayQty; ///< The quantity to be displayed . Required for iceberg orders. On orders specifies the qty to be displayed, on execution reports the currently displayed quantity. id: 1138
LocalMktDate ExpireDate; ///< Date of order expiration (last day the order can trade), always expressed in terms of the local market date. Applicable only to GTD orders which expire at the end of the trading session specified. id: 432
uInt16NULL DelayDuration; ///< Not being currently used. id: 5904
static constexpr decltype(OrdStatusNew) OrdStatus {OrdStatusNew}; ///< Identifies status of order as new. Constant value. id: 39
static constexpr decltype(ExecTypNew) ExecType {ExecTypNew}; ///< Describes the specific ExecutionRpt as new. Constant value. id: 150
OrderType OrdType; ///< Order type.. id: 40
SideReq Side; ///< Side of order. id: 54
TimeInForce TimeInForce; ///< Specifies how long the order remains in effect. id: 59
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if order was sent manually or generated by automated trading logic. id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
uInt8NULL CrossType; ///< ype of cross being submitted to a market. (if in response to a cross order). id: 549
ExecInst ExecInst; ///< Instructions for order handling on exchange. Since more than one instruction is applicable to an order, this field can represent those using a bitset.. id: 18
ExecMode ExecutionMode; ///< Identifies whether the order should be treated as passive (will not match when entered) or aggressive (could match when entered); default behavior when absent is aggressive. id: 5906
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
BooleanNULL ManagedOrder; ///< Boolean: flags a managed order. id: 6881
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
uInt64NULL DelayToTime; ///< Indicates the amount of time that a message was delayed as a result of being split (9553=0) or as a result of being out of order due to TCP retransmission (9553=1) or as a result of being queued behind a split message (9553=2). Represented as number of nanoseconds in unix epoch format (since Jan 1, 1970). Subtracting this number from FIFO time will represent original received time of delayed message. id: 7552
PRICENULL9 DiscretionPrice; ///< The presence of DiscretionPrice on an order indicates that the trader wishes to display one price but will accept trades at another price. id: 845
PRICENULL9 ReservationPrice; ///< This field specifies the highest (for a buy) or lowest (for a sell) price at which the order may trade. This price must be better than the limit price and should be multiple of reservation price tick. id: 9562
uInt8NULL PriorityIndicator; ///< This field is being added to report whether incoming new order/cancel replace entered the book or subsequently rests on the book with either large or standard order size priority. id: 638
};
/// ExecutionReportReject block_length: 483.
struct ExecutionReportReject523 {
static constexpr int id {MSG_ID_ExecutionReportReject523};
static constexpr int block_length {483};
uInt32 SeqNum; ///< Sequence number of this message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String256 Text; ///< Reject reason details. Will be used only for descriptive rejects. id: 58
String40 ExecID; ///< Unique identifier of execution message as assigned by exchange. Uniqueness will be guaranteed within a single trading day or the life of a multi-day order. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequestAck attached to this message; pancake flip of what was submitted on inbound message. id: 1505
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments.. id: 37
PRICENULL9 Price; ///< Price per share or contract. id: 44
PRICENULL9 StopPx; ///< The stop price of a stop protect or stop limit order. (Conditionally required if OrdType = 3 or 4).. id: 99
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 OrderRequestID; ///< OrderRequestID used to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport. id: 2422
uInt64NULL CrossID; ///< Identifier for a cross order. Will be present if execution report is in response to a cross order. id: 548
uInt64NULL HostCrossID; ///< Host assigned entity ID that can be used to reference all components of a cross; sides +  strategy + legs. The HostCrossID will also be used to link together components of the  cross order. For example, each individual execution report associated with the order will carry HostCrossID in order to tie them back together to the original cross order.. id: 961
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages. id: 48
uInt32 OrderQty; ///< Number of shares or contracts ordered.. id: 38
uInt32NULL MinQty; ///< Minimum quantity of an order to be executed.. id: 110
uInt32NULL DisplayQty; ///< The quantity to be displayed . Required for iceberg orders. On orders specifies the qty to be displayed, on execution reports the currently displayed quantity. id: 1138
uInt16 OrdRejReason; ///< Code to identify reason for order rejection. id: 103
LocalMktDate ExpireDate; ///< Date of order expiration (last day the order can trade), always expressed in terms of the local market date. id: 432
uInt16NULL DelayDuration; ///< Not being currently used. id: 5904
static constexpr decltype(OrdStatusRej) OrdStatus {OrdStatusRej}; ///< Identifies current status of order as rejected. Constant value. id: 39
static constexpr decltype(ExecTypRej) ExecType {ExecTypRej}; ///< Describes the specific ExecutionRpt while OrdStatus (39) will always identify the current order status. Constant value. id: 150
OrderType OrdType; ///< Order type.. id: 40
SideReq Side; ///< Side of order.. id: 54
TimeInForce TimeInForce; ///< Specifies how long the order remains in effect. id: 59
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if order was sent manually or generated by automated trading logic . id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
uInt8NULL CrossType; ///< Type of cross being submitted to a market. (if in response to a cross order) . id: 549
ExecInst ExecInst; ///< Instructions for order handling on exchange. Since more than one instruction is applicable to an order, this field can be represented as a bitset.. id: 18
ExecMode ExecutionMode; ///< Identifies whether the order should be treated as passive (will not match when entered) or aggressive (could match when entered); default behavior when absent is aggressive. id: 5906
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
BooleanNULL ManagedOrder; ///< Boolean: flags a managed order. id: 6881
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
uInt64NULL DelayToTime; ///< Indicates the amount of time that a message was delayed as a result of being split (9553=0) or as a result of being out of order due to TCP retransmission (9553=1) or as a result of being queued behind a split message (9553=2). Represented as number of nanoseconds in unix epoch format (since Jan 1, 1970). Subtracting this number from FIFO time will represent original received time of delayed message. id: 7552
PRICENULL9 DiscretionPrice; ///< The presence of DiscretionPrice on an order indicates that the trader wishes to display one price but will accept trades at another price. id: 845
PRICENULL9 ReservationPrice; ///< This field specifies the highest (for a buy) or lowest (for a sell) price at which the order may trade. This price must be better than the limit price and should be multiple of reservation price tick. id: 9562
};
/// ExecutionReportElimination block_length: 219.
struct ExecutionReportElimination524 {
static constexpr int id {MSG_ID_ExecutionReportElimination524};
static constexpr int block_length {219};
uInt32 SeqNum; ///< Sequence number of this message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String40 ExecID; ///< Unique identifier of execution message as assigned by exchange. Uniqueness will be guaranteed within a single trading day or the life of a multi-day order. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequestAck attached to this message; pancake flip of what was submitted on inbound message. id: 1505
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments.. id: 37
PRICE9 Price; ///< Price per share or contract. id: 44
PRICENULL9 StopPx; ///< The stop price of a stop protect or stop limit order. (Conditionally required if OrdType = 3 or 4).. id: 99
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 OrderRequestID; ///< OrderRequestID used to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport. id: 2422
uInt64NULL CrossID; ///< Identifier for a cross order. Will be present if execution report is in response to a cross order. id: 548
uInt64NULL HostCrossID; ///< Host assigned entity ID that can be used to reference all components of a cross; sides +  strategy + legs. The HostCrossID will also be used to link together components of the  cross order. For example, each individual execution report associated with the order will carry HostCrossID in order to tie them back together to the original cross order.. id: 961
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages. id: 48
uInt32 CumQty; ///< Total quantity filled. id: 14
uInt32 OrderQty; ///< Order quantity submitted by client. id: 38
uInt32NULL MinQty; ///< Minimum quantity of an order to be executed.. id: 110
uInt32NULL DisplayQty; ///< The quantity to be displayed . Required for iceberg orders. On orders specifies the qty to be displayed, on execution reports the currently displayed quantity. id: 1138
static constexpr decltype(OrdStatusExp) OrdStatus {OrdStatusExp}; ///< Identifies status of order as eliminated. Constant value. id: 39
static constexpr decltype(ExecTypeExp) ExecType {ExecTypeExp}; ///< Describes the specific ExecutionRpt while OrdStatus (39) will always identify the current order status. Constant value. id: 150
LocalMktDate ExpireDate; ///< Date of order expiration (last day the order can trade), always expressed in terms of the local market date. id: 432
OrderType OrdType; ///< Order type. id: 40
SideReq Side; ///< Side of order. id: 54
TimeInForce TimeInForce; ///< Specifies how long the order remains in effect. id: 59
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if order was sent manually or generated by automated trading logic. id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
uInt8NULL CrossType; ///< Type of cross being submitted to a market. (if in response to a cross order). id: 549
ExecInst ExecInst; ///< Instructions for order handling on exchange. Since more than one instruction is applicable to an order, this field can represent those using a bitset.. id: 18
ExecMode ExecutionMode; ///< Identifies whether the order should be treated as passive (will not match when entered) or aggressive (could match when entered); default behavior when absent is aggressive. id: 5906
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
BooleanNULL ManagedOrder; ///< Boolean: flags a managed order. id: 6881
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
PRICENULL9 DiscretionPrice; ///< The presence of DiscretionPrice on an order indicates that the trader wishes to display one price but will accept trades at another price. id: 845
PRICENULL9 ReservationPrice; ///< This field specifies the highest (for a buy) or lowest (for a sell) price at which the order may trade. This price must be better than the limit price and should be multiple of reservation price tick. id: 9562
uInt8NULL PriorityIndicator; ///< This field is being added to report whether incoming new order/cancel replace entered the book or subsequently rests on the book with either large or standard order size priority. id: 638
};
/// ExecutionReportTradeOutright block_length: 293.
struct ExecutionReportTradeOutright525 {
static constexpr int id {MSG_ID_ExecutionReportTradeOutright525};
static constexpr int block_length {293};
/// Specifies the number of fill reasons included in this Execution Report id: 1362
struct NoFills {
static constexpr int id {FIELD_ID_NoFills}; ///< id = 1362
using DimensionType = groupSize;
PRICE9 FillPx; ///< Price of this fill reason or allocation. Required if NoFills(1362) > 0. Same as LastPx(31). id: 1364
uInt32 FillQty; ///< Quantity bought/sold for this fill reason. id: 1365
String2 FillExecID; ///< Used as an identifier for each fill reason or allocation reported in single Execution Report. Required if NoFills(1362) > 0. Append FillExecID with ExecID to derive unique identifier for each fill reason or allocation. id: 1363
uInt8 FillYieldType; ///< Enumeration of the Fill Reason field using Integer. This identifies the type of match algorithm. id: 1622
};
/// Number of fills which comprise fill quantity id: 1795
struct NoOrderEvents {
static constexpr int id {FIELD_ID_NoOrderEvents}; ///< id = 1795
using DimensionType = groupSize;
PRICE9 OrderEventPx; ///< Refers to the fill price; same as LastPx (Tag 31) . id: 1799
String5 OrderEventText; ///< Will not be present for BrokerTec US; Will be populated with the firm ID of the opposite order for BrokerTec EU bilateral trades. id: 1802
uInt32 OrderEventExecID; ///< This is a unique ID which ties together a specific fill between two orders; It will be unique per instrument per day. id: 1797
uInt32 OrderEventQty; ///< Refers to the specific fill quantity between this order and the opposite order . id: 1800
OrderEventType OrderEventType; ///< The type of event affecting an order. id: 1796
uInt8 OrderEventReason; ///< Action that caused the event to ocurr. 100=Binary Trade Reporting. id: 1798
Decimal64NULL ContraGrossTradeAmt; ///< Amount traded (in notional) in base currency for the Spot with this counterparty. id: 5542
Decimal64NULL ContraCalculatedCcyLastQty; ///< Amount traded (in notional) in counter currency for the Spot with this counterparty. id: 5971
};
uInt32 SeqNum; ///< Sequence number of this message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String40 ExecID; ///< Unique identifier of execution message as assigned by the exchange; unique per day across all instruments and across all good till orders.. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
PRICE9 LastPx; ///< Price of this (last) fill. id: 31
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments. id: 37
PRICE9 Price; ///< Price per share or contract. id: 44
PRICENULL9 StopPx; ///< The stop price of a stop protect or stop limit order. (Conditionally required if OrdType = 3 or 4).. id: 99
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 OrderRequestID; ///< OrderRequestID used to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport. id: 2422
uInt64 SecExecID; ///< Unique identifier that allows linking id spread summary fill notice with leg fill notice and trade cancel messages. id: 527
uInt64NULL CrossID; ///< Identifier for a cross order. Will be present if execution report is in response to a cross order. id: 548
uInt64NULL HostCrossID; ///< Host assigned entity ID that can be used to reference all components of a cross; sides +  strategy + legs. The HostCrossID will also be used to link together components of the  cross order. For example, each individual execution report associated with the order will carry HostCrossID in order to tie them back together to the original cross order. id: 961
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages. id: 48
uInt32 OrderQty; ///< Number of shares or contracts ordered.. id: 38
uInt32 LastQty; ///< Quantity of shares bought/sold on this (last) fill. id: 32
uInt32 CumQty; ///< Total quantity filled. id: 14
uInt32 MDTradeEntryID; ///< Market Data Trade Entry ID. This identifier is assigned to all trades that take place for an instrument at a particular price level. id: 37711
uInt32 SideTradeID; ///< The unique ID assigned to the trade once it is received or matched by the exchange. id: 1506
uInt32NULL TradeLinkID; ///< Contains the workup ID; unique per instrument per day. id: 820
uInt32 LeavesQty; ///< Quantity open for further execution;  LeavesQty = OrderQty (38) - CumQty (14); Only present for outrights and spreads and not spread legs. id: 151
LocalMktDate TradeDate; ///< Indicates date of trading day (expressed in local time at place of trade).. id: 75
LocalMktDate ExpireDate; ///< Date of order expiration (last day the order can trade), always expressed in terms of the local market date. id: 432
OrdStatusTrd OrdStatus; ///< Identifies status of order as partially filled or completely filled. id: 39
static constexpr decltype(ExecTypeTrade) ExecType {ExecTypeTrade}; ///< Describes the specific ExecutionRpt (e.g. Cancel) while OrdStatus (39) will always identify the current order status (e.g. Partially Filled); Constant value. id: 150
OrderType OrdType; ///< Order type.. id: 40
SideReq Side; ///< Order side. id: 54
TimeInForce TimeInForce; ///< Specifies how long the order remains in effect. id: 59
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if order was sent manually or generated by automated trading logic. id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
BooleanFlag AggressorIndicator; ///< Indicates if order was incoming or resting for the match event. id: 1057
uInt8NULL CrossType; ///< Type of cross being submitted to a market. (if in response to a cross order) . id: 549
ExecInst ExecInst; ///< Instructions for order handling on exchange. Since more than one instruction is applicable to an order, this field can be represented as a bitset.. id: 18
ExecMode ExecutionMode; ///< Identifies whether the order should be treated as passive (will not match when entered) or aggressive (could match when entered); default behavior when absent is aggressive. id: 5906
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
BooleanNULL ManagedOrder; ///< Boolean: flags a managed order. id: 6881
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
uInt8 Ownership; ///< Specifies the owner of the work up private phase. id: 7191
PRICENULL9 DiscretionPrice; ///< The presence of DiscretionPrice on an order indicates that the trader wishes to display one price but will accept trades at another price. id: 845
uInt16NULL TrdType; ///< Represents a trade at fixing price. id: 828
ExecReason ExecRestatementReason; ///< Will be present when trade at fixing is assigned fixing price. id: 378
LocalMktDate SettlDate; ///< Specific date of trade settlement. id: 64
LocalMktDate MaturityDate; ///< Date of maturity. id: 541
Decimal64NULL CalculatedCcyLastQty; ///< Total amount traded (in notional) in counter currency for the Spot. id: 1056
Decimal64NULL GrossTradeAmt; ///< Total amount traded (in notional) in base currency for the Spot. id: 381
PRICENULL9 BenchmarkPrice; ///< The price assigned to an eFIX matched trade which is determined by an automated set market mid-price from a third party market data feed. The Fixing Price will be distributed as soon as practicable after the Fixing Time. id: 6262
PRICENULL9 ReservationPrice; ///< This field specifies the highest (for a buy) or lowest (for a sell) price at which the order may trade. This price must be better than the limit price and should be multiple of reservation price tick. id: 9562
uInt8NULL PriorityIndicator; ///< This field is being added to report whether incoming new order/cancel replace entered the book or subsequently rests on the book with either large or standard order size priority. id: 638
PRICENULL9 DisplayLimitPrice; ///< The price at which opposite side orders are listed on the market. Sent only in fill messages for reservation price orders. id: 9264
char VariableData [0];
};
/// ExecutionReportTradeSpread block_length: 230.
struct ExecutionReportTradeSpread526 {
static constexpr int id {MSG_ID_ExecutionReportTradeSpread526};
static constexpr int block_length {230};
/// Specifies the number of fill reasons included in this Execution Report id: 1362
struct NoFills {
static constexpr int id {FIELD_ID_NoFills}; ///< id = 1362
using DimensionType = groupSize;
PRICE9 FillPx; ///< Price of this fill reason or allocation. Required if NoFills(1362) > 0. Same as LastPx(31). id: 1364
uInt32 FillQty; ///< Quantity bought/sold for this fill reason. id: 1365
String2 FillExecID; ///< Used as an identifier for each fill reason or allocation reported in single Execution Report. Required if NoFills(1362) > 0. Append FillExecID with ExecID to derive unique identifier for each fill reason or allocation. id: 1363
uInt8 FillYieldType; ///< Enumeration of the Fill Reason field using Integer. This identifies the type of match algorithm. id: 1622
};
/// Number of Leg executions; Will currently be set to 0 and in future will contain the leg fills for the spread when spread leg fills are consolidated with the spread fill as a single message id: 555
struct NoLegs {
static constexpr int id {FIELD_ID_NoLegs}; ///< id = 555
using DimensionType = groupSize;
uInt64 LegExecID; ///< The ExecID (17) value corresponding to a trade leg.. id: 1893
PRICE9 LegLastPx; ///< Execution price assigned to a leg of a multileg instrument. id: 637
Int32 LegSecurityID; ///< Multileg instrument's individual security's SecurityID. id: 602
uInt32 LegTradeID; ///< The TradeID value corresponding to a trade leg. id: 1894
uInt32 LegLastQty; ///< Fill quantity for the leg instrument. id: 1418
SideReq LegSide; ///< The side of this individual leg of a multileg security. id: 624
};
/// Number of fills which comprise fill quantity id: 1795
struct NoOrderEvents {
static constexpr int id {FIELD_ID_NoOrderEvents}; ///< id = 1795
using DimensionType = groupSize;
PRICE9 OrderEventPx; ///< Refers to the fill price; same as LastPx (Tag 31) . id: 1799
String5 OrderEventText; ///< Will not be present for BrokerTec US; Will be populated with the firm ID of the opposite order for BrokerTec EU bilateral trades. id: 1802
uInt32 OrderEventExecID; ///< This is a unique ID which ties together a specific fill between two orders; It will be unique per instrument per day. id: 1797
uInt32 OrderEventQty; ///< Refers to the specific fill quantity between this order and the opposite order . id: 1800
OrderEventType OrderEventType; ///< The type of event affecting an order. id: 1796
uInt8 OrderEventReason; ///< Action that caused the event to ocurr. 100=Binary Trade Reporting. id: 1798
};
uInt32 SeqNum; ///< Sequence number of this message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String40 ExecID; ///< Unique identifier of execution message as assigned by the exchange; unique per day across all instruments and across all good till orders. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
PRICE9 LastPx; ///< Price of this (last) fill. id: 31
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments.. id: 37
PRICE9 Price; ///< Price per share or contract. id: 44
PRICENULL9 StopPx; ///< The stop price of a stop protect or stop limit order. (Conditionally required if OrdType = 3 or 4).. id: 99
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 OrderRequestID; ///< OrderRequestID used to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport. id: 2422
uInt64 SecExecID; ///< Unique identifier that allows linking id spread summary fill notice with leg fill notice and trade cancel messages. id: 527
uInt64NULL CrossID; ///< Identifier for a cross order. Will be present if execution report is in response to a cross order. id: 548
uInt64NULL HostCrossID; ///< Host assigned entity ID that can be used to reference all components of a cross; sides +  strategy + legs. The HostCrossID will also be used to link together components of the  cross order. For example, each individual execution report associated with the order will carry HostCrossID in order to tie them back together to the original cross order.. id: 961
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages. id: 48
uInt32 OrderQty; ///< Number of shares or contracts ordered.. id: 38
uInt32 LastQty; ///< Quantity of shares bought/sold on this (last) fill. id: 32
uInt32 CumQty; ///< Total quantity filled. id: 14
uInt32 MDTradeEntryID; ///< Market Data Trade Entry ID. This identifier is assigned to all trades that take place for an instrument at a particular price level. id: 37711
uInt32 SideTradeID; ///< The unique ID assigned to the trade once it is received or matched by the exchange. id: 1506
uInt32 LeavesQty; ///< Quantity open for further execution;  LeavesQty = OrderQty (38) - CumQty (14); Only present for outrights and spreads and not spread legs. id: 151
LocalMktDate TradeDate; ///< Indicates date of trading day (expressed in local time at place of trade).. id: 75
LocalMktDate ExpireDate; ///< Date of order expiration (last day the order can trade), always expressed in terms of the local market date. id: 432
OrdStatusTrd OrdStatus; ///< Identifies status of order as partially filled or completely filled. id: 39
static constexpr decltype(ExecTypeTrade) ExecType {ExecTypeTrade}; ///< Describes the specific ExecutionRpt (e.g. Cancel) while OrdStatus (39) will always identify the current order status (e.g. Partially Filled); Constant value. id: 150
OrderType OrdType; ///< Order type.. id: 40
SideReq Side; ///< Order side. id: 54
TimeInForce TimeInForce; ///< Specifies how long the order remains in effect. id: 59
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if order was sent manually or generated by automated trading logic. id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
BooleanFlag AggressorIndicator; ///< Indicates if order was incoming or resting for the match event. id: 1057
uInt8NULL CrossType; ///< Type of cross being submitted to a market. (if in response to a cross order) . id: 549
uInt8 TotalNumSecurities; ///< Indicates total number of leg fills for the spread; Will represent total number of ExecutionReportTradeSpreadLeg messages sent for the spread and will be set to 0 when spread leg fills are consolidated with spread fill. id: 393
ExecInst ExecInst; ///< Instructions for order handling on exchange. Since more than one instruction is applicable to an order, this field can be represented as a bitset.. id: 18
ExecMode ExecutionMode; ///< Identifies whether the order should be treated as passive (will not match when entered) or aggressive (could match when entered); default behavior when absent is aggressive. id: 5906
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
char VariableData [0];
};
/// ExecutionReportTradeSpreadLeg block_length: 219.
struct ExecutionReportTradeSpreadLeg527 {
static constexpr int id {MSG_ID_ExecutionReportTradeSpreadLeg527};
static constexpr int block_length {219};
/// Specifies the number of fill reasons included in this Execution Report id: 1362
struct NoFills {
static constexpr int id {FIELD_ID_NoFills}; ///< id = 1362
using DimensionType = groupSize;
PRICE9 FillPx; ///< Price of this fill reason or allocation. Required if NoFills(1362) > 0. Same as LastPx(31). id: 1364
uInt32 FillQty; ///< Quantity bought/sold for this fill reason. id: 1365
String2 FillExecID; ///< Used as an identifier for each fill reason or allocation reported in single Execution Report. Required if NoFills(1362) > 0. Append FillExecID with ExecID to derive unique identifier for each fill reason or allocation. id: 1363
uInt8 FillYieldType; ///< Enumeration of the Fill Reason field using Integer. This identifies the type of match algorithm. id: 1622
};
/// Number of fills which comprise fill quantity id: 1795
struct NoOrderEvents {
static constexpr int id {FIELD_ID_NoOrderEvents}; ///< id = 1795
using DimensionType = groupSize;
PRICE9 OrderEventPx; ///< Refers to the fill price; same as LastPx (Tag 31) . id: 1799
String5 OrderEventText; ///< Will not be present for BrokerTec US; Will be populated with the firm ID of the opposite order for BrokerTec EU bilateral trades. id: 1802
uInt32 OrderEventExecID; ///< This is a unique ID which ties together a specific fill between two orders; It will be unique per instrument per day. id: 1797
uInt32 OrderEventQty; ///< Refers to the specific fill quantity between this order and the opposite order . id: 1800
OrderEventType OrderEventType; ///< The type of event affecting an order. id: 1796
uInt8 OrderEventReason; ///< Action that caused the event to ocurr. 100=Binary Trade Reporting. id: 1798
};
uInt32 SeqNum; ///< Sequence number of this message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String40 ExecID; ///< Unique identifier of execution message as assigned by the exchange; unique per day across all instruments and across all good till orders.. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
Decimal64NULL Volatility; ///< Annualized volatility for option model calculations. Only applicable for vol quoted option trades.. id: 1188
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
PRICE9 LastPx; ///< Price of this (last) fill . id: 31
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments.. id: 37
PRICENULL9 UnderlyingPx; ///< Underlying price associated with a derivative instrument. Price for the future used in calculating the conversion of vol. to premium for the option. Only applicable for vol quoted option trades.. id: 810
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 SecExecID; ///< Unique identifier that allows linking id spread summary fill notice with leg fill notice and trade cancel messages. id: 527
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Decimal32NULL OptionDelta; ///< The rate of change in the price of a derivative with respect to the movement in the price of the underlying instrument(s) upon which the derivative instrument price is based. Calculated delta, expressed as a decimal between -1 and 1. Only applicable for vol quoted option trades.. id: 811
Decimal32NULL TimeToExpiration; ///< Time to expiration in years calculated as the number of days remaining to expiration divided by 365 days per year. This value is expressed as a decimal portion of a year, typically the days to expiration divided by the days in a year. Currently the year assumption is 365. Only applicable for vol quoted option trades.. id: 1189
Decimal32NULL RiskFreeRate; ///< Interest rate. Usually some form of short term rate.. id: 1190
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages. id: 48
uInt32 LastQty; ///< Quantity of shares bought/sold on this (last) fill. id: 32
uInt32 CumQty; ///< Total quantity filled. id: 14
uInt32 SideTradeID; ///< The unique ID assigned to the trade once it is received or matched by the exchange. id: 1506
LocalMktDate TradeDate; ///< Indicates date of trading day (expressed in local time at place of trade). id: 75
OrdStatusTrd OrdStatus; ///< Identifies status of order as partially filled or completely filled. id: 39
static constexpr decltype(ExecTypeTrade) ExecType {ExecTypeTrade}; ///< Describes the specific ExecutionRpt (e.g. Cancel) while OrdStatus (39) will always identify the current order status (e.g. Partially Filled); Constant value. id: 150
OrderType OrdType; ///< Order type.. id: 40
SideReq Side; ///< Order side. id: 54
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
LocalMktDate SettlDate; ///< Specific date of trade settlement for the Spot leg. id: 64
Decimal64NULL CalculatedCcyLastQty; ///< Total amount traded (in notional) in counter currency for the Spot leg. id: 1056
Decimal64NULL GrossTradeAmt; ///< Total amount traded (in notional) in base currency for the Spot leg. id: 381
char VariableData [0];
};
/// QuoteCancel block_length: 61.
struct QuoteCancel528 {
static constexpr int id {MSG_ID_QuoteCancel528};
static constexpr int block_length {61};
/// The number of quote entries for quote sets, instruments, product group, cancel all; 298=1 (1 to 100); 298=3 (1); 298=4 (1); 298=100 (1 to 15) id: 295
struct NoQuoteEntries {
static constexpr int id {FIELD_ID_NoQuoteEntries}; ///< id = 295
using DimensionType = groupSize;
StringLength6 SecurityGroup; ///< A specific moniker assigned to a group of related securities which may be concurrently affected by market events and actions. Has to be first field in the repeating group. Should contain [N/A] for cancel all. All quote sets and individual instruments have to belong to a specific product group and the first one determines the group to be followed for the rest of the repeating group entries and if there is a mismatch then it will be rejected . id: 1151
Int32NULL SecurityID; ///< Should be conditionally populated only for 298=1 (cancel for instrument); Will be ignored if present for any other criteria specified in QuoteCancelType besides Instrument. id: 48
};
/// The number of sets of quotes in the message. Conditionally required if 298=100 id: 296
struct NoQuoteSets {
static constexpr int id {FIELD_ID_NoQuoteSets}; ///< id = 296
using DimensionType = groupSize;
uInt32NULL BidSize; ///< Should be conditionally populated and set to zero only for 298=100 (cancel for quote set) to cancel all buy side quotes for quote set ID; Will be ignored if present for any other criteria specified in QuoteCancelType besides Quote Set. id: 134
uInt32NULL OfferSize; ///< Should be conditionally populated and set to zero only for 298=100 (cancel for quote set) to cancel all sell side quotes for quote set ID; Will be ignored if present for any other criteria specified in QuoteCancelType besides Quote Set. id: 135
uInt16 QuoteSetID; ///< Should be conditionally populated only for 298=100 (cancel for quote set). Will be ignored if present for any other criteria specified in QuoteCancelType besides Quote Set. id: 302
};
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
uInt32 QuoteID; ///< Identifier of the Quote Cancel message. Should be unique per trading session. Uniqueness will not be enforced by CME and is incumbent on the market participant to maintain uniqueness. id: 117
QuoteCxlTyp QuoteCancelType; ///< Identifies the type of Quote Cancel. A working quote can be cancelled by providing either it's instrument, instrument group or by cancelling all.. id: 298
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
String8 OrigOrderUser; ///< Represents the original sender comp for whom orders or quotes are to be cancelled. id: 9937
BooleanNULL QuoteEntryOpen; ///< A boolean value indicating if new quotes should be rejected for the sender comp for whom quotes are being cancelled on behalf; also to be used to reset such a block on mass quotes being sent by the blocked sender comp  . id: 9182
char VariableData [0];
};
/// OrderMassActionRequest block_length: 79.
struct OrderMassActionRequest529 {
static constexpr int id {MSG_ID_OrderMassActionRequest529};
static constexpr int block_length {79};
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 OrderRequestID; ///< Use OrderRequestID to identify a request to enter, modify or delete an order and echo the value on the OrderMassActionReport representing the response. id: 2422
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the message was initially received manually (as opposed to electronically). id: 1028
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
static constexpr decltype(MassAction) MassActionType {MassAction}; ///< Specifies the type of action requested; Constant value. id: 1373
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
StringLength6 SecurityGroup; ///< Specifies the Product Group for which working orders should be cancelled. Conditionally required if MassActionScope=?Product Group? (Tag1374=10). Will be ignored if present for any other criteria specified in MassActionScope besides Product Group . id: 1151
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32NULL SecurityID; ///< Conditionally required if MassActionScope=?Instrument? (Tag 1374=1). Will be ignored if present for any other criteria specified in MassActionScope besides Instrument. id: 48
MassActionScope MassActionScope; ///< Specifies the scope of the action   . id: 1374
uInt8NULL MarketSegmentID; ///< Specifies the market segment (physical match engine partition) for which working orders should be cancelled. Conditionally Required if MassActionScope=?Market Segment? (Tag 1374=9). Will be ignored if present for any other criteria specified in MassActionScope besides Market Segment. id: 1300
MassCxlReqTyp MassCancelRequestType; ///< If present ? specifies the scope of the OrderMassActionRequest within the context of Session and Firm. If absent then all orders belonging to Session and Firm combination will be cancelled for specified MassActionScope   . id: 6115
SideNULL Side; ///< If provided then only orders belonging to one side will be cancelled. If absent then orders belonging to both sides will be cancelled. id: 54
MassActionOrdTyp OrdType; ///< If provided then only orders of this type will be cancelled. If absent then all order types will be cancelled. id: 40
MassCancelTIF TimeInForce; ///< If provided then only orders with this qualifier will be cancelled. If absent then all Day & GT orders will be cancelled. id: 59
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
String8 OrigOrderUser; ///< Represents the original sender comp for whom orders or quotes are to be cancelled. id: 9937
};
/// OrderMassStatusRequest block_length: 68.
struct OrderMassStatusRequest530 {
static constexpr int id {MSG_ID_OrderMassStatusRequest530};
static constexpr int block_length {68};
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 MassStatusReqID; ///< Unique ID of OrderMassStatusRequest as assigned by the customer and present in Execution Report as well. id: 584
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
StringLength6 SecurityGroup; ///< Conditionally required if OrderStatusRequestType=?Product Group? (Tag 585=3). Status for working orders belonging to this particular product group will be returned. Will be ignored if present for any other criteria specified in OrderStatusRequestType besides product group (Tag 585=3) . id: 1151
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32NULL SecurityID; ///< Conditionally required if OrderStatusRequestType=?Instrument? (Tag 585=1). Status for working orders belonging to this particular instrument will be returned. Will be ignored if present for any other criteria specified in OrderStatusRequestType besides Instrument. id: 48
MassStatusReqTyp MassStatusReqType; ///< Specifies the scope of the OrderMassStatusRequest within the context of working orders only. Status will be returned for all orders matching the criteria specified here for Session and Firm. id: 585
MassStatusOrdTyp OrdStatusReqType; ///< If present ? specifies the scope of the OrderMassStatusRequest within the context of MassStatusRequestType (585) and Session and Firm for working orders only. Status will be returned for all orders matching the criteria specified here for Session and Firm combination. id: 5000
MassStatusTIF TimeInForce; ///< Specifies the scope of the OrderMassStatusRequest within the context of MassStatusRequestType (585) if present. Absence of this field is interpreted as Day & GTC & GTD. FAK is excluded since scope is limited to working orders only. id: 59
uInt8NULL MarketSegmentID; ///< Conditionally required if OrderStatusRequestType=?Market Segment? (Tag 585=100). Status for working orders belonging to this particular market segment will be returned. Will be ignored if present for any other criteria specified in OrderStatusRequestType besides market segment (Tag 585=100). id: 1300
};
/// ExecutionReportModify block_length: 226.
struct ExecutionReportModify531 {
static constexpr int id {MSG_ID_ExecutionReportModify531};
static constexpr int block_length {226};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String40 ExecID; ///< Unique identifier of execution message as assigned by exchange. Uniqueness will be guaranteed within a single trading day or the life of a multi-day order. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequestAck attached to this message; pancake flip of what was submitted on inbound message. id: 1505
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments. id: 37
PRICE9 Price; ///< Price per share or contract. id: 44
PRICENULL9 StopPx; ///< The stop price of a stop protect or stop limit order. (Conditionally required if OrdType = 3 or 4).. id: 99
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 OrderRequestID; ///< OrderRequestID used to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport. id: 2422
uInt64NULL CrossID; ///< Identifier for a cross order. Will be present if execution report is in response to a cross order. id: 548
uInt64NULL HostCrossID; ///< Host assigned entity ID that can be used to reference all components of a cross; sides +  strategy + legs. The HostCrossID will also be used to link together components of the  cross order. For example, each individual execution report associated with the order will carry HostCrossID in order to tie them back together to the original cross order.. id: 961
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages.. id: 48
uInt32 OrderQty; ///< Number of shares or contracts ordered.. id: 38
uInt32 CumQty; ///< Total quantity filled. id: 14
uInt32 LeavesQty; ///< Quantity open for further execution; LeavesQty = OrderQty (38) - CumQty (14). id: 151
uInt32NULL MinQty; ///< Minimum quantity of an order to be executed.. id: 110
uInt32NULL DisplayQty; ///< The quantity to be displayed . Required for iceberg orders. On orders specifies the qty to be displayed, on execution reports the currently displayed quantity. id: 1138
LocalMktDate ExpireDate; ///< Date of order expiration (last day the order can trade), always expressed in terms of the local market date. id: 432
uInt16NULL DelayDuration; ///< Not being currently used. id: 5904
static constexpr decltype(ModifyStatus) OrdStatus {ModifyStatus}; ///< Identifies current status of order. Constant value. id: 39
static constexpr decltype(ExecTypeModify) ExecType {ExecTypeModify}; ///< Describes the specific ExecutionRpt (e.g. Cancel) while OrdStatus (39) will always identify the current order status (e.g. Partially Filled); Constant value. id: 150
OrderType OrdType; ///< Order type. id: 40
SideReq Side; ///< Side of order. id: 54
TimeInForce TimeInForce; ///< Specifies how long the order remains in effect. id: 59
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if order was sent manually or generated by automated trading logic. id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
uInt8NULL CrossType; ///< Type of cross being submitted to a market. (if in response to a cross order).. id: 549
ExecInst ExecInst; ///< Instructions for order handling on exchange. Since more than one instruction is applicable to an order, this field can represent those using a bitset.. id: 18
ExecMode ExecutionMode; ///< Identifies whether the order should be treated as passive (will not match when entered) or aggressive (could match when entered); default behavior when absent is aggressive. id: 5906
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
BooleanNULL ManagedOrder; ///< Boolean: flags a managed order. id: 6881
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
uInt64NULL DelayToTime; ///< Indicates the amount of time that a message was delayed as a result of being split (9553=0) or as a result of being out of order due to TCP retransmission (9553=1) or as a result of being queued behind a split message (9553=2). Represented as number of nanoseconds in unix epoch format (since Jan 1, 1970). Subtracting this number from FIFO time will represent original received time of delayed message. id: 7552
PRICENULL9 DiscretionPrice; ///< The presence of DiscretionPrice on an order indicates that the trader wishes to display one price but will accept trades at another price. id: 845
uInt8NULL PriorityIndicator; ///< This field is being added to report whether incoming new order/cancel replace entered the book or subsequently rests on the book with either large or standard order size priority. id: 638
};
/// ExecutionReportStatus block_length: 513.
struct ExecutionReportStatus532 {
static constexpr int id {MSG_ID_ExecutionReportStatus532};
static constexpr int block_length {513};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String256 Text; ///< Reject reason details; Will be used only for descriptive rejects. id: 58
String40 ExecID; ///< Unique identifier of execution message as assigned by exchange. Uniqueness will be guaranteed within a single trading day or the life of a multi-day order. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequestAck attached to this message; pancake flip of what was submitted on inbound message. id: 1505
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments. id: 37
PRICENULL9 Price; ///< Price per share or contract. id: 44
PRICENULL9 StopPx; ///< The stop price of a stop protect or stop limit order. (Conditionally required if OrdType = 3 or 4).. id: 99
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 OrderRequestID; ///< Use OrderRequestID to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport representing the response. id: 2422
uInt64NULL OrdStatusReqID; ///< Used to uniquely identify a specific Order Status Request message. id: 790
uInt64NULL MassStatusReqID; ///< Unique ID of Order Mass Status Request as assigned by the client system . id: 584
uInt64NULL CrossID; ///< Identifier for a cross order. Will be present if execution report is in response to a cross order. id: 548
uInt64NULL HostCrossID; ///< Host assigned entity ID that can be used to reference all components of a cross; sides + strategy + legs. The HostCrossID will also be used to link together components of the cross order. For example, each individual execution report associated with the order will carry HostCrossID in order to tie them back together to the original cross order.. id: 961
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages.. id: 48
uInt32 OrderQty; ///< Number of shares or contracts ordered.. id: 38
uInt32 CumQty; ///< Total quantity filled. id: 14
uInt32 LeavesQty; ///< Quantity open for further execution; LeavesQty = OrderQty (38) - CumQty (14). id: 151
uInt32NULL MinQty; ///< Minimum quantity of an order to be executed.. id: 110
uInt32NULL DisplayQty; ///< The quantity to be displayed . Required for iceberg orders. On orders specifies the qty to be displayed, on execution reports the currently displayed quantity. id: 1138
LocalMktDate ExpireDate; ///< Date of order expiration (last day the order can trade), always expressed in terms of the local market date. id: 432
OrderStatus OrdStatus; ///< Identifies status of order. id: 39
static constexpr decltype(ExecTypStatus) ExecType {ExecTypStatus}; ///< Describes the specific ExecutionRpt as order status; Constant value. id: 150
OrderType OrdType; ///< Order type. id: 40
SideReq Side; ///< Side of order. id: 54
TimeInForce TimeInForce; ///< Specifies how long the order remains in effect. id: 59
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
BooleanNULL LastRptRequested; ///< Indicates whether this message is the last report message in response to an Order Mass Status Request. Required if responding to a Order Mass Status Request.. id: 912
uInt8NULL CrossType; ///< Type of cross being submitted to a market. (if in response to a cross order). id: 549
ExecInst ExecInst; ///< Instructions for order handling on exchange. Since more than one instruction is applicable to an order, this field can be represented as a bitset.. id: 18
ExecMode ExecutionMode; ///< Identifies whether the order should be treated as passive (will not match when entered) or aggressive (could match when entered); default behavior when absent is aggressive. id: 5906
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
BooleanNULL ManagedOrder; ///< Boolean: flags a managed order. id: 6881
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
PRICENULL9 DiscretionPrice; ///< The presence of DiscretionPrice on an order indicates that the trader wishes to display one price but will accept trades at another price. id: 845
PRICENULL9 ReservationPrice; ///< This field specifies the highest (for a buy) or lowest (for a sell) price at which the order may trade. This price must be better than the limit price and should be multiple of reservation price tick. id: 9562
uInt8NULL PriorityIndicator; ///< This field is being added to report whether incoming new order/cancel replace entered the book or subsequently rests on the book with either large or standard order size priority. id: 638
String8 OrigOrderUser; ///< Represents the original sender comp for whom orders or quotes are to be cancelled. id: 9937
String8 CancelText; ///< Represents the sender comp which initiated the cancellation of orders or quotes for the original sender comp. id: 2807
};
/// OrderStatusRequest block_length: 62.
struct OrderStatusRequest533 {
static constexpr int id {MSG_ID_OrderStatusRequest533};
static constexpr int block_length {62};
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 OrdStatusReqID; ///< Used to uniquely identify a specific Order Status Request message. Echoed back on Execution Report as well. id: 790
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments. id: 37
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
};
/// ExecutionReportCancel block_length: 247.
struct ExecutionReportCancel534 {
static constexpr int id {MSG_ID_ExecutionReportCancel534};
static constexpr int block_length {247};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String40 ExecID; ///< Unique identifier of execution message as assigned by exchange. Uniqueness will be guaranteed within a single trading day or the life of a multi-day order. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments. id: 37
PRICE9 Price; ///< Price per share or contract. id: 44
PRICENULL9 StopPx; ///< The stop price of a stop protect or stop limit order. (Conditionally required if OrdType = 3 or 4).. id: 99
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 OrderRequestID; ///< Use OrderRequestID to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport representing the response. id: 2422
uInt64NULL CrossID; ///< Identifier for a cross order. Will be present if execution report is in response to a cross order. id: 548
uInt64NULL HostCrossID; ///< Host assigned entity ID that can be used to reference all components of a cross; sides +  strategy + legs. The HostCrossID will also be used to link together components of the  cross order. For example, each individual execution report associated with the order will carry HostCrossID in order to tie them back together to the original cross order.. id: 961
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages.. id: 48
uInt32 OrderQty; ///< Number of shares or contracts ordered.. id: 38
uInt32 CumQty; ///< Total quantity filled. id: 14
uInt32NULL MinQty; ///< Minimum quantity of an order to be executed.. id: 110
uInt32NULL DisplayQty; ///< The quantity to be displayed . Required for iceberg orders. On orders specifies the qty to be displayed, on execution reports the currently displayed quantity. id: 1138
LocalMktDate ExpireDate; ///< Date of order expiration (last day the order can trade), always expressed in terms of the local market date. id: 432
uInt16NULL DelayDuration; ///< Not being currently used. id: 5904
static constexpr decltype(OrdStatusCxl) OrdStatus {OrdStatusCxl}; ///< Identifies status of order as cancelled; Constant value. id: 39
static constexpr decltype(ExecTypeCxl) ExecType {ExecTypeCxl}; ///< Describes the specific ExecutionRpt as cancelled; Constant value. id: 150
OrderType OrdType; ///< Order type.. id: 40
SideReq Side; ///< Side of order. id: 54
TimeInForce TimeInForce; ///< Specifies how long the order remains in effect. id: 59
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
ExecReason ExecRestatementReason; ///< Used to communicate unsolicited cancels. id: 378
uInt8NULL CrossType; ///< Type of cross being submitted to a market. (if in response to a cross order) . id: 549
ExecInst ExecInst; ///< Instructions for order handling on exchange. Since more than one instruction is applicable to an order, this field can represent those using a bitset.. id: 18
ExecMode ExecutionMode; ///< Identifies whether the order should be treated as passive (will not match when entered) or aggressive (could match when entered); default behavior when absent is aggressive. id: 5906
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
BooleanNULL ManagedOrder; ///< Boolean: flags a managed order. id: 6881
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
uInt64NULL DelayToTime; ///< Indicates the amount of time that a message was delayed as a result of being split (9553=0) or as a result of being out of order due to TCP retransmission (9553=1) or as a result of being queued behind a split message (9553=2). Represented as number of nanoseconds in unix epoch format (since Jan 1, 1970). Subtracting this number from FIFO time will represent original received time of delayed message. id: 7552
PRICENULL9 DiscretionPrice; ///< The presence of DiscretionPrice on an order indicates that the trader wishes to display one price but will accept trades at another price. id: 845
PRICENULL9 ReservationPrice; ///< This field specifies the highest (for a buy) or lowest (for a sell) price at which the order may trade. This price must be better than the limit price and should be multiple of reservation price tick. id: 9562
uInt8NULL PriorityIndicator; ///< This field is being added to report whether incoming new order/cancel replace entered the book or subsequently rests on the book with either large or standard order size priority. id: 638
String8 OrigOrderUser; ///< Represents the original sender comp for whom orders or quotes are to be cancelled. id: 9937
String8 CancelText; ///< Represents the sender comp which initiated the cancellation of orders or quotes for the original sender comp. id: 2807
};
/// OrderCancelReject block_length: 409.
struct OrderCancelReject535 {
static constexpr int id {MSG_ID_OrderCancelReject535};
static constexpr int block_length {409};
uInt32 SeqNum; ///< Sequence number of this message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String256 Text; ///< Reject reason details; Will be used only for descriptive rejects. id: 58
String40 ExecID; ///< Unique identifier of execution message as assigned by exchange. Uniqueness will be guaranteed within a single trading day or the life of a multi-day order. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequestAck attached to this message; pancake flip of what was submitted on inbound message. id: 1505
static constexpr decltype(OrdStatusCxlRej) OrdStatus {OrdStatusCxlRej}; ///< Identifies status of modification reject; Constant value. id: 39
static constexpr decltype(CxlRejRsp) CxlRejResponseTo {CxlRejRsp}; ///< Identifies the type of request that a Cancel Reject is in response to; Constant value. id: 434
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments. id: 37
uInt64 TransactTime; ///< Time the transaction represented by this OrderCancelReject (35=9) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 OrderRequestID; ///< Use OrderRequestID to identify a request to enter, modify or delete an order and echo the value on the OrderCancelReject representing the response. id: 2422
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
uInt16 CxlRejReason; ///< Code to identify reason for cancel rejection. id: 102
uInt16NULL DelayDuration; ///< Not being currently used. id: 5904
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
uInt64NULL DelayToTime; ///< Indicates the amount of time that a message was delayed as a result of being split (9553=0) or as a result of being out of order due to TCP retransmission (9553=1) or as a result of being queued behind a split message (9553=2). Represented as number of nanoseconds in unix epoch format (since Jan 1, 1970). Subtracting this number from FIFO time will represent original received time of delayed message. id: 7552
};
/// OrderCancelReplaceReject block_length: 409.
struct OrderCancelReplaceReject536 {
static constexpr int id {MSG_ID_OrderCancelReplaceReject536};
static constexpr int block_length {409};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String256 Text; ///< Reject reason details; Will be used only for descriptive rejects. id: 58
String40 ExecID; ///< Unique identifier of execution message as assigned by exchange. Uniqueness will be guaranteed within a single trading day or the life of a multi-day order. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequestAck attached to this message; pancake flip of what was submitted on inbound message. id: 1505
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments. id: 37
uInt64 TransactTime; ///< Time the transaction represented by this OrderCancelReplaceReject (35=9) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 OrderRequestID; ///< Use OrderRequestID to identify a request to enter, modify or delete an order and echo the value on the OrderCancelReplaceReject representing the response. id: 2422
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
uInt16 CxlRejReason; ///< Code to identify reason for cancel replace rejection. id: 102
uInt16NULL DelayDuration; ///< Not being currently used. id: 5904
static constexpr decltype(OrdStatusCxrRej) OrdStatus {OrdStatusCxrRej}; ///< Identifies status of modification reject; Constant value. id: 39
static constexpr decltype(CxrRejRsp) CxlRejResponseTo {CxrRejRsp}; ///< Identifies the type of request that a Cancel Reject is in response to; Constant value. id: 434
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
uInt64NULL DelayToTime; ///< Indicates the amount of time that a message was delayed as a result of being split (9553=0) or as a result of being out of order due to TCP retransmission (9553=1) or as a result of being queued behind a split message (9553=2). Represented as number of nanoseconds in unix epoch format (since Jan 1, 1970). Subtracting this number from FIFO time will represent original received time of delayed message. id: 7552
};
/// PartyDetailsListRequest block_length: 20.
struct PartyDetailsListRequest537 {
static constexpr int id {MSG_ID_PartyDetailsListRequest537};
static constexpr int block_length {20};
/// Number of requesting party identifiers. Will be zero if specific PartyDetailsDefinitionID's are being requested. Will be populated only if all PartyDetailsDefinitions are being requested for a specific Firm id: 1657
struct NoRequestingPartyIDs {
static constexpr int id {FIELD_ID_NoRequestingPartyIDs}; ///< id = 1657
using DimensionType = groupSize;
String5 RequestingPartyID; ///< Party identifier for the requesting party. Required when NoRequestingPartyIDs(1657) > 0. id: 1658
CHAR RequestingPartyIDSource; ///< Identifies the source of the RequestingPartyID(1658) value. Required when NoRequestingPartyIDs(1657) > 0. Constant value. id: 1659
CHAR RequestingPartyRole; ///< Identifies the type or role of the RequestingPartyID(1658) specified. Constant value. id: 1660
};
/// Number of PartyID (448), PartyIDSource (447), and PartyRole (452) entries. Applicable only if specific PartyDetailsDefinitions are being requested otherwise set to 0 id: 453
struct NoPartyIDs {
static constexpr int id {FIELD_ID_NoPartyIDs}; ///< id = 453
using DimensionType = groupSize;
uInt64 PartyID; ///< Required if NoPartyIDs(453) > 0. Identification of the PartyDetailsListRequestID of PartyDetailsDefinitionRequestAck. id: 448
CHAR PartyIDSource; ///< Required if NoPartyIDs(453) > 0. Used to identify classification source. Constant value. id: 447
uInt16 PartyRole; ///< Required if NoPartyIDs(453) > 0. Identifies the type of PartyID(448). id: 452
};
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsListRequest(35=CF) message. id: 1505
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
char VariableData [0];
};
/// PartyDetailsListReport block_length: 93.
struct PartyDetailsListReport538 {
static constexpr int id {MSG_ID_PartyDetailsListReport538};
static constexpr int block_length {93};
/// Number of party details. More than one occurrence of the same party role is not allowed and will be rejected id: 1671
struct NoPartyDetails {
static constexpr int id {FIELD_ID_NoPartyDetails}; ///< id = 1671
using DimensionType = groupSize;
String20Req PartyDetailID; ///< The identification of the party. Required when NoPartyDetails(1671) > 0. id: 1691
static constexpr decltype(PartyIDSource) PartyDetailIDSource {PartyIDSource}; ///< Used to identify source of PartyDetailID value. Required when NoPartyDetails(1671) > 0. Constant value of "C". id: 1692
PartyDetailRole PartyDetailRole; ///< Identifies the type of PartyDetailID. Required when NoPartyDetails(1671) > 0. id: 1693
};
/// Number of regulatory publication rules in repeating group. Should always be "1" if being used otherwise set to 0 id: 2668
struct NoTrdRegPublications {
static constexpr int id {FIELD_ID_NoTrdRegPublications}; ///< id = 2668
using DimensionType = groupSize;
uInt8 TrdRegPublicationType; ///< Specifies the type of regulatory trade publication. Additional reasons for the publication type will be specified in TrdRegPublicationReason (2670). 2=Exempt from Publication. There are allowable exemptions for the post-trade publication of trade transactions. id: 2669
uInt8 TrdRegPublicationReason; ///< Additional reason for trade publication type specified in TrdRegPublicationType (2669). Reasons may be specific to regulatory trade publication rules. 12=Exempted due to European System of Central Banks (ESCB) policy transaction. id: 2670
};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String20 AvgPxGroupID; ///< Used by submitting firm to group trades being allocated into an average price group; The trades in average price group will be used to calculate an average price for the group. id: 1731
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequest(35=CX) message used to create the PartyDetailsDefinition. id: 1505
uInt64 PartyDetailsListReportID; ///< Refers to the unique identifier of the PartyDetailsListRequest(35=CF) message used to request this PartyDetailsListReport. id: 1510
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64NULL SelfMatchPreventionID; ///< Identifies an order or trade that should not be matched to an opposite order or trade if both buy and sell orders for the same asset contain the same SelfMatchPreventionID (2362) and submitted by the same firm. id: 2362
uInt16 TotNumParties; ///< Indicates total number of PartyDetailsListReports being returned in response to PartyDetailsListRequest. id: 1512
ReqResult RequestResult; ///< Status of party details list request. id: 1511
BooleanFlag LastFragment; ///< Indicates whether the message is the last message in a sequence of messages to support fragmentation. id: 893
CustOrderCapacity CustOrderCapacity; ///< Capacity of customer placing the order; Used by futures exchanges to indicate the CTICode (customer type indicator) as required by the US CFTC (Commodity Futures Trading Commission). id: 582
ClearingAcctType ClearingAccountType; ///< Designates the account type to be used for the order when submitted to clearing. id: 1816
SMPI SelfMatchPreventionInstruction; ///< Used to act upon the outcome when a self-match is detected and an order is prevented from trading against another order with the same SelfMatchPreventionID (Tag 2362), N=Cancel newest signifies that incoming order is cancelled, O=Cancel Oldest signifies that the resting order is cancelled. Absence of this field (with Tag 2362) is interpreted as cancel oldest. id: 8000
AvgPxInd AvgPxIndicator; ///< Average pricing indicator. id: 819
SLEDS ClearingTradePriceType; ///< Indicates to recipient whether trade is clearing at execution prices LastPx (tag 31) or alternate clearing price (prior day settlement price). id: 1598
CmtaGiveUpCD CmtaGiveupCD; ///< Indicates if the order is a give-up or SGX offset. id: 9708
CustOrdHandlInst CustOrderHandlingInst; ///< Codes that apply special information that the Broker / Dealer needs to report, as specified by the customer. Defines source of the order. id: 1031
uInt64NULL Executor; ///< Will be populated with a short code for the person or algo identified in FIX tag 5392 which will be mapped to National ID or Algo at reporting time. id: 5290
uInt64NULL IDMShortCode; ///< Represents the Investment Decision Maker Short Code. id: 36023
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
char VariableData [0];
};
/// ExecutionAck block_length: 101.
struct ExecutionAck539 {
static constexpr int id {MSG_ID_ExecutionAck539};
static constexpr int block_length {101};
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 OrderID; ///< Order ID of the problem execution. id: 37
ExecAckStatus ExecAckStatus; ///< Indicates the status of the execution acknowledgement. id: 1036
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
String20Req ClOrdID; ///< CIOrdID of the problem execution. id: 11
uInt64 SecExecID; ///< The binary trade number (Tag 1797) being accepted or rejected from the original fill . id: 527
PRICE9 LastPx; ///< Price of this fill. id: 31
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages.. id: 48
uInt32 LastQty; ///< Quantity of shares bought/sold on this fill. id: 32
DKReason DKReason; ///< Reason for execution rejection. id: 127
SideReq Side; ///< Order side. id: 54
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the message was initially received manually (as opposed to electronically) . id: 1028
};
/// RequestForQuote block_length: 55.
struct RequestForQuote543 {
static constexpr int id {MSG_ID_RequestForQuote543};
static constexpr int block_length {55};
/// Specifies the number of repeating symbols specified. id: 146
struct NoRelatedSym {
static constexpr int id {FIELD_ID_NoRelatedSym}; ///< id = 146
using DimensionType = groupSize;
Int32 SecurityID; ///< Instrument identifier. id: 48
uInt32NULL OrderQty; ///< RFQ quantity. id: 38
RFQSide Side; ///< RFQ side. id: 54
};
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 QuoteReqID; ///< Unique identifier for quote request message. id: 131
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the message was initially received manually (as opposed to electronically). id: 1028
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
QuoteTyp QuoteType; ///< Type of quote requested . id: 537
char VariableData [0];
};
/// NewOrderCross block_length: 74.
struct NewOrderCross544 {
static constexpr int id {MSG_ID_NewOrderCross544};
static constexpr int block_length {74};
/// Number of Side repeating group instances  id: 552
struct NoSides {
static constexpr int id {FIELD_ID_NoSides}; ///< id = 552
using DimensionType = groupSize;
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt32 OrderQty; ///< Order quantity. Must be the same for both sides.. id: 38
SideReq Side; ///< Side of order. id: 54
SideTimeInForce SideTimeInForce; ///< Indicates how long the order as specified in the side stays in effect. SideTimeInForce allows a two-sided cross order to specify order behavior separately for each side. Defaults to Day if absent.. id: 962
};
uInt64 CrossID; ///< Identifier for a cross order. Must be unique during a given trading day. id: 548
uInt64 OrderRequestID; ///< Use OrderRequestID to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport representing the response. id: 2422
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the message was initially received manually (as opposed to electronically). id: 1028
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
static constexpr decltype(CrossOrderType) OrdType {CrossOrderType}; ///< Only limit order supported. Constant value. id: 40
static constexpr decltype(CrossType) CrossType {CrossType}; ///< Constant. A cross order which is executed on one side with any unfilled quantity remaining active. id: 549
static constexpr decltype(CrossPrioritization) CrossPrioritization {CrossPrioritization}; ///< Constant. Indicates if one side or the other of a cross order should be prioritized. id: 550
PRICE9 Price; ///< Conditionally required when OrdType (40) = 2 (Limit). id: 44
uInt64 TransBkdTime; ///< For derivatives a date and time stamp to indicate when this order was booked with the agent prior to submission to the exchange. Indicates the time at which the order was finalized between the buyer and seller prior to submission. Expressed as nanoseconds since epoch time . id: 483
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Instrument identifier. id: 48
char VariableData [0];
};
/// MassQuoteAck block_length: 351.
struct MassQuoteAck545 {
static constexpr int id {MSG_ID_MassQuoteAck545};
static constexpr int block_length {351};
/// The number of quoute entries for a quote set. id: 295
struct NoQuoteEntries {
static constexpr int id {FIELD_ID_NoQuoteEntries}; ///< id = 295
using DimensionType = groupSize;
uInt32 QuoteEntryID; ///< Unique identifier for a quote. The QuoteEntryID stays with the quote as a static identifier even if the quote is updated. For fills this value is transposed into client order ID (tag 11). id: 299
Int32 SecurityID; ///< Unique instrument ID . id: 48
uInt16 QuoteSetID; ///< Unique id for the Quote Set. id: 302
uInt8 QuoteEntryRejectReason; ///< Reason (error code) quote has been rejected. id: 368
};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String256 Text; ///< Reject reason details. Will be used only for descriptive rejects. id: 58
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequestAck attached to this message; pancake flip of what was submitted on inbound message. id: 1505
uInt64 RequestTime; ///< Information carried on a response to convey the time (UTC) when the request was received by the MSGW application. UTC timestamps are sent in number of nanoseconds since the UNIX epoch with microsecond precision. id: 5979
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64NULL QuoteReqID; ///< Conditionally present when MassQuote was sent in response to RequestForQuote. id: 131
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
uInt32 QuoteID; ///< Unique identifier for mass quote populated by the client system. id: 117
uInt16NULL QuoteRejectReason; ///< Contains reason (error code) the corresponding MassQuote message has been rejected. When this tag is returned, all quotes in the corresponding Mass Quote message are rejected.. id: 300
uInt16NULL DelayDuration; ///< Not being used currently. id: 5904
QuoteAckStatus QuoteStatus; ///< Identifies the status of the quote acknowledgement.. id: 297
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the message was initially received manually (as opposed to electronically). id: 1028
uInt8 NoProcessedEntries; ///< Number of quotes that have been accepted from the corresponding inbound message. id: 9772
BooleanFlag MMProtectionReset; ///< When market maker protection is triggered then Falcon will not accept any new quotes from the market maker for that product group until it receives a mass quote message with the MMProtectionReset flag set to Y. id: 9773
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
uInt8NULL TotNoQuoteEntries; ///< Total number of quotes for the quote set across all messages. Should be the sum of all NoQuoteEntries in each message that has repeating quotes that are part of the same quote set. Required if NoQuoteEntries > 0. Since fragmentation is not supported in practice this will always be equal to the value of NoQuoteEntries.. id: 304
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
uInt64NULL DelayToTime; ///< Indicates the amount of time that a message was delayed as a result of being split (9553=0) or as a result of being out of order due to TCP retransmission (9553=1) or as a result of being queued behind a split message (9553=2). Represented as number of nanoseconds in unix epoch format (since Jan 1, 1970). Subtracting this number from FIFO time will represent original received time of delayed message. id: 7552
BooleanNULL QuoteEntryOpen; ///< A boolean value indicating if new quotes should be rejected for the sender comp for whom quotes are being cancelled on behalf; also to be used to reset such a block on mass quotes being sent by the blocked sender comp  . id: 9182
char VariableData [0];
};
/// RequestForQuoteAck block_length: 358.
struct RequestForQuoteAck546 {
static constexpr int id {MSG_ID_RequestForQuoteAck546};
static constexpr int block_length {358};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String256 Text; ///< Reject reason details. Will be used only for descriptive rejects. id: 58
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String17 ExchangeQuoteReqID; ///< CME Globex generated QuoteID . id: 9770
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequestAck attached to this message; pancake flip of what was submitted on inbound message. id: 1505
uInt64 RequestTime; ///< Information carried on a response to convey the time (UTC) when the request was received by the MSGW application. UTC timestamps are sent in number of nanoseconds since the UNIX epoch with microsecond precision. id: 5979
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 QuoteReqID; ///< Unique identifier for quote request message. id: 131
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
uInt16NULL QuoteRejectReason; ///< Contains reason (error code) the corresponding RequestForQuote message has been rejected. id: 300
uInt16NULL DelayDuration; ///< Not being used currently. id: 5904
QuoteAckStatus QuoteStatus; ///< Identifies the status of the quote acknowledgement.. id: 297
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the message was initially received manually (as opposed to electronically) . id: 1028
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
uInt64NULL DelayToTime; ///< Indicates the amount of time that a message was delayed as a result of being split (9553=0) or as a result of being out of order due to TCP retransmission (9553=1) or as a result of being queued behind a split message (9553=2). Represented as number of nanoseconds in unix epoch format (since Jan 1, 1970). Subtracting this number from FIFO time will represent original received time of delayed message. id: 7552
};
/// ExecutionReportTradeAddendumOutright block_length: 222.
struct ExecutionReportTradeAddendumOutright548 {
static constexpr int id {MSG_ID_ExecutionReportTradeAddendumOutright548};
static constexpr int block_length {222};
/// Specifies the number of fill reasons included in this Execution Report id: 1362
struct NoFills {
static constexpr int id {FIELD_ID_NoFills}; ///< id = 1362
using DimensionType = groupSize;
PRICE9 FillPx; ///< Price of this fill reason or allocation. Required if NoFills(1362) > 0. Same as LastPx(31). id: 1364
uInt32 FillQty; ///< Quantity bought/sold for this fill reason. id: 1365
String2 FillExecID; ///< Used as an identifier for each fill reason or allocation reported in single Execution Report. Required if NoFills(1362) > 0. Append FillExecID with ExecID to derive unique identifier for each fill reason or allocation. id: 1363
uInt8 FillYieldType; ///< Enumeration of the Fill Reason field using Integer. This identifies the type of match algorithm. id: 1622
};
/// Number of fills which comprise fill quantity id: 1795
struct NoOrderEvents {
static constexpr int id {FIELD_ID_NoOrderEvents}; ///< id = 1795
using DimensionType = groupSize;
PRICE9 OrderEventPx; ///< Refers to the fill price; same as LastPx (Tag 31) . id: 1799
String5 OrderEventText; ///< Will not be present for BrokerTec US; Will be populated with the firm ID of the opposite order for BrokerTec EU bilateral trades. id: 1802
uInt32 OrderEventExecID; ///< This is a unique ID which ties together a specific fill between two orders; It will be unique per instrument per day. id: 1797
uInt32 OrderEventQty; ///< Refers to the specific fill quantity between this order and the opposite order . id: 1800
TradeAddendum OrderEventType; ///< The type of event affecting an order. id: 1796
uInt8 OrderEventReason; ///< Action that caused the event to ocurr. 100=Binary Trade Reporting. id: 1798
uInt32NULL OriginalOrderEventExecID; ///< Contains the previous OrderEventExecID value (Tag 1797) of the trade being adjusted or busted. id: 6555
Decimal64NULL ContraGrossTradeAmt; ///< Amount traded (in notional) in base currency for the Spot with this counterparty. id: 5542
Decimal64NULL ContraCalculatedCcyLastQty; ///< Amount traded (in notional) in counter currency for the Spot with this counterparty. id: 5971
};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String40 ExecID; ///< Unique identifier of execution message as assigned by exchange. Uniqueness will be guaranteed within a single trading day or the life of a multi-day order. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
PRICE9 LastPx; ///< Price of this (last) fill. id: 31
uInt64 OrderID; ///< Unique Order ID. id: 37
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 SecExecID; ///< Unique identifier that allows linking between spread summary fill notice with leg fill notice and trade cancel messages. Trade correction of previously executed trade will assign a new value. id: 527
uInt64NULL OrigSecondaryExecutionID; ///< Unique identifier of the fill which is being corrected. id: 9703
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages.. id: 48
uInt32 LastQty; ///< Quantity of shares bought/sold on this (last) fill. id: 32
uInt32 SideTradeID; ///< The unique ID assigned to the trade once it is received or matched by the exchange. id: 1506
uInt32NULL OrigSideTradeID; ///< Refers back to the unique ID assigned to the corrected trade. id: 1507
LocalMktDate TradeDate; ///< Indicates date of trading day (expressed in local time at place of trade).. id: 75
OrdStatusTrdCxl OrdStatus; ///< Identifies status of order as trade cancellation or correction. id: 39
ExecTypTrdCxl ExecType; ///< Describes the specific ExecutionRpt as trade cancellation or correction. id: 150
SideReq Side; ///< Order side. id: 54
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
ExecInst ExecInst; ///< Instructions for order handling on exchange. If more than one instruction is applicable to an order, this field can contain multiple instructions separated by space. id: 18
ExecMode ExecutionMode; ///< Identifies whether the order should be treated as passive (will not match when entered) or aggressive (could match when entered). id: 5906
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
BooleanNULL ManagedOrder; ///< Boolean: flags a managed order. id: 6881
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
PRICENULL9 DiscretionPrice; ///< The presence of DiscretionPrice on an order indicates that the trader wishes to display one price but will accept trades at another price. id: 845
uInt16NULL TrdType; ///< Represents a trade at fixing price. id: 828
ExecReason ExecRestatementReason; ///< Will be present when trade at fixing is assigned fixing price. id: 378
LocalMktDate SettlDate; ///< Specific date of trade settlement. id: 64
LocalMktDate MaturityDate; ///< Date of maturity. id: 541
Decimal64NULL CalculatedCcyLastQty; ///< Total amount traded (in notional) in counter currency for the Spot. id: 1056
Decimal64NULL GrossTradeAmt; ///< Total amount traded (in notional) in base currency for the Spot. id: 381
PRICENULL9 BenchmarkPrice; ///< The price assigned to an eFIX matched trade which is determined by an automated set market mid-price from a third party market data feed. The Fixing Price will be distributed as soon as practicable after the Fixing Time. id: 6262
char VariableData [0];
};
/// ExecutionReportTradeAddendumSpread block_length: 187.
struct ExecutionReportTradeAddendumSpread549 {
static constexpr int id {MSG_ID_ExecutionReportTradeAddendumSpread549};
static constexpr int block_length {187};
/// Specifies the number of fill reasons included in this Execution Report id: 1362
struct NoFills {
static constexpr int id {FIELD_ID_NoFills}; ///< id = 1362
using DimensionType = groupSize;
PRICE9 FillPx; ///< Price of this fill reason or allocation. Required if NoFills(1362) > 0. Same as LastPx(31). id: 1364
uInt32 FillQty; ///< Quantity bought/sold for this fill reason. id: 1365
String2 FillExecID; ///< Used as an identifier for each fill reason or allocation reported in single Execution Report. Required if NoFills(1362) > 0. Append FillExecID with ExecID to derive unique identifier for each fill reason or allocation. id: 1363
uInt8 FillYieldType; ///< Enumeration of the Fill Reason field using Integer. This identifies the type of match algorithm. id: 1622
};
/// Number of legs (repeating groups). id: 555
struct NoLegs {
static constexpr int id {FIELD_ID_NoLegs}; ///< id = 555
using DimensionType = groupSize;
uInt64 LegExecID; ///< Refers to the Exec ID (Tag 17) of the leg execution being reported.. id: 1893
PRICE9 LegLastPx; ///< Execution price assigned to a leg of a multileg instrument. id: 637
uInt64NULL LegExecRefID; ///< The original ExecID(17) value corresponding to trade leg which is being corrected. id: 1901
uInt32 LegTradeID; ///< The TradeID value corresponding to a trade leg. id: 1894
uInt32NULL LegTradeRefID; ///< Refers to the original LegTradeID of the leg trade being corrected. id: 39023
Int32 LegSecurityID; ///< Unique instrument ID for the leg.. id: 602
uInt32 LegLastQty; ///< Fill quantity for the leg instrument. id: 1418
SideReq LegSide; ///< The side of the leg for this repeating group.. id: 624
};
/// Number of fills which comprise fill quantity id: 1795
struct NoOrderEvents {
static constexpr int id {FIELD_ID_NoOrderEvents}; ///< id = 1795
using DimensionType = groupSize;
PRICE9 OrderEventPx; ///< Refers to the fill price; same as LastPx (Tag 31) . id: 1799
String5 OrderEventText; ///< Will not be present for BrokerTec US; Will be populated with the firm ID of the opposite order for BrokerTec EU bilateral trades. id: 1802
uInt32 OrderEventExecID; ///< This is a unique ID which ties together a specific fill between two orders; It will be unique per instrument per day. id: 1797
uInt32 OrderEventQty; ///< Refers to the specific fill quantity between this order and the opposite order . id: 1800
TradeAddendum OrderEventType; ///< The type of event affecting an order. id: 1796
uInt8 OrderEventReason; ///< Action that caused the event to ocurr. id: 1798
uInt32NULL OriginalOrderEventExecID; ///< Contains the previous OrderEventExecID value (Tag 1797) of the trade being adjusted or busted. id: 6555
};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String40 ExecID; ///< Unique identifier of execution message as assigned by exchange. Uniqueness will be guaranteed within a single trading day or the life of a multi-day order. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
PRICE9 LastPx; ///< Price of this (last) fill. id: 31
uInt64 OrderID; ///< Unique Order ID. id: 37
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 SecExecID; ///< Unique identifier that allows linking between spread summary fill notice with leg fill notice and trade cancel messages. Trade correction of previously executed trade will assign a new value. id: 527
uInt64NULL OrigSecondaryExecutionID; ///< Unique identifier of the fill which is being corrected. id: 9703
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Unique instrument ID . id: 48
uInt32 MDTradeEntryID; ///< Market Data Trade Entry ID. id: 37711
uInt32 LastQty; ///< Quantity of shares bought/sold on this (last) fill. id: 32
uInt32 SideTradeID; ///< The unique ID assigned to the trade once it is received or matched by the exchange or subsequently corrected. id: 1506
uInt32NULL OrigSideTradeID; ///< Refers back to the unique ID assigned to the original trade being corrected. id: 1507
LocalMktDate TradeDate; ///< Indicates date of trading day (expressed in local time at place of trade).. id: 75
OrdStatusTrdCxl OrdStatus; ///< Identifies status of order as trade cancellation or correction. id: 39
ExecTypTrdCxl ExecType; ///< Describes the action that triggered this specific Execution Report and see the OrdStatus (39) tag for the current order status (e.g.,Partially Filled).. id: 150
OrderType OrdType; ///< Order type.. id: 40
SideReq Side; ///< Order side. id: 54
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if order was sent manually or generated by automated trading logic. id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
uInt8 TotalNumSecurities; ///< Indicates total number of leg fills for the spread. Will represent total number of ExecutionReportTradeSpreadLeg messages sent for the spread and will be set to 0 when spread leg fills are consolidated with spread fill. id: 393
ExecInst ExecInst; ///< Instructions for order handling on exchange. If more than one instruction is applicable to an order, this field can contain multiple instructions separated by space. id: 18
ExecMode ExecutionMode; ///< Identifies whether the order should be treated as passive (will not match when entered) or aggressive (could match when entered). id: 5906
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
BooleanNULL ManagedOrder; ///< Boolean: flags a managed order. id: 6881
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
char VariableData [0];
};
/// ExecutionReportTradeAddendumSpreadLeg block_length: 196.
struct ExecutionReportTradeAddendumSpreadLeg550 {
static constexpr int id {MSG_ID_ExecutionReportTradeAddendumSpreadLeg550};
static constexpr int block_length {196};
/// Specifies the number of fill reasons included in this Execution Report id: 1362
struct NoFills {
static constexpr int id {FIELD_ID_NoFills}; ///< id = 1362
using DimensionType = groupSize;
PRICE9 FillPx; ///< Price of this fill reason or allocation. Required if NoFills(1362) > 0. Same as LastPx(31). id: 1364
uInt32 FillQty; ///< Quantity bought/sold for this fill reason. id: 1365
String2 FillExecID; ///< Used as an identifier for each fill reason or allocation reported in single Execution Report. Required if NoFills(1362) > 0. Append FillExecID with ExecID to derive unique identifier for each fill reason or allocation. id: 1363
uInt8 FillYieldType; ///< Enumeration of the Fill Reason field using Integer. This identifies the type of match algorithm. id: 1622
};
/// Number of fills which comprise fill quantity id: 1795
struct NoOrderEvents {
static constexpr int id {FIELD_ID_NoOrderEvents}; ///< id = 1795
using DimensionType = groupSize;
PRICE9 OrderEventPx; ///< Refers to the fill price; same as LastPx (Tag 31) . id: 1799
String5 OrderEventText; ///< Will not be present for BrokerTec US; Will be populated with the firm ID of the opposite order for BrokerTec EU bilateral trades. id: 1802
uInt32 OrderEventExecID; ///< This is a unique ID which ties together a specific fill between two orders; It will be unique per instrument per day. id: 1797
uInt32 OrderEventQty; ///< Refers to the specific fill quantity between this order and the opposite order . id: 1800
TradeAddendum OrderEventType; ///< The type of event affecting an order. id: 1796
uInt8 OrderEventReason; ///< Action that caused the event to ocurr. id: 1798
uInt32NULL OriginalOrderEventExecID; ///< Contains the previous OrderEventExecID value (Tag 1797) of the trade being adjusted or busted. id: 6555
};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String40 ExecID; ///< Unique identifier of execution message as assigned by exchange. Uniqueness will be guaranteed within a single trading day or the life of a multi-day order. id: 17
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
PRICE9 LastPx; ///< Price of this (last) fill. id: 31
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments. id: 37
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 SecExecID; ///< Unique identifier that allows linking between spread summary fill notice with leg fill notice and trade cancel messages. Trade correction of previously executed trade will assign a new value. id: 527
uInt64NULL OrigSecondaryExecutionID; ///< Unique identifier of the fill which is being corrected. id: 9703
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages. id: 48
uInt32 LastQty; ///< Quantity of shares bought/sold on this (last) fill. id: 32
uInt32 SideTradeID; ///< The unique ID assigned to the trade once it is received or matched by the exchange. id: 1506
uInt32NULL OrigSideTradeID; ///< Refers back to the unique ID assigned to the original trade being corrected. id: 1507
LocalMktDate TradeDate; ///< Indicates date of trading day (expressed in local time at place of trade).. id: 75
OrdStatusTrdCxl OrdStatus; ///< Identifies status of order as trade cancellation or correction. id: 39
ExecTypTrdCxl ExecType; ///< Describes the specific ExecutionRpt as trade cancellation or correction. id: 150
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the message was initially received manually (as opposed to electronically) . id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
SideReq Side; ///< Order side. id: 54
LocalMktDate SettlDate; ///< Specific date of trade settlement for the Spot leg. id: 64
Decimal64NULL CalculatedCcyLastQty; ///< Total amount traded (in notional) in counter currency for the Spot leg. id: 1056
Decimal64NULL GrossTradeAmt; ///< Total amount traded (in notional) in base currency for the Spot leg. id: 381
char VariableData [0];
};
/// SecurityDefinitionRequest block_length: 72.
struct SecurityDefinitionRequest560 {
static constexpr int id {MSG_ID_SecurityDefinitionRequest560};
static constexpr int block_length {72};
/// Up to 26 legs (i.e., repeating groups) supported for UDS for options. Up to 40 legs (i.e., repeating groups) supported for UDS for futures. Will be set to 0 for REPO id: 555
struct NoLegs {
static constexpr int id {FIELD_ID_NoLegs}; ///< id = 555
using DimensionType = groupSize;
static constexpr decltype(LegSecIDSource) LegSecurityIDSource {LegSecIDSource}; ///< Identifies source of tag 602-LegSecurityID value. Constant value. id: 603
PRICENULL9 LegPrice; ///< Price of the futures contract as part of UDS Covered . id: 566
Int32 LegSecurityID; ///< ISIN code, this is the primary tag used to identify the contract and it must be populated with the corresponding tag 48-SecurityID value from the market data 35=d Security Definition message.. id: 602
Decimal32NULL LegOptionDelta; ///< Delta used to calculate the quantity of futures used to cover the option or option strategy.. id: 1017
SideReq LegSide; ///< The side of the leg for this repeating group.. id: 624
uInt8NULL LegRatioQty; ///< Specifies ratio for the instrument defined in this repeating group. Required for any UDS options leg. Optional for Covereds leg. id: 623
};
/// Used to indicate the number of custom bespoke broken dates for user defined tailor made repo id: 39026
struct NoBrokenDates {
static constexpr int id {FIELD_ID_NoBrokenDates}; ///< id = 39026
using DimensionType = groupSize;
LocalMktDate BrokenDateStart; ///< Start date of a financing deal, i.e. the date the buyer pays the seller cash and takes control of the collateral. id: 6748
LocalMktDate BrokenDateEnd; ///< End date of a financing deal, i.e. the date the seller reimburses the buyer and takes back control of the collateral.. id: 6741
};
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 SecurityReqID; ///< Unique identifier for a security definition request. It is incumbent on the market participant to maintain uniqueness. id: 320
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
String20 SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
static constexpr decltype(SecurityReqType) SecurityReqType {SecurityReqType}; ///< Type of Security Definition Request. Constant value. id: 321
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
String8Req SecuritySubType; ///< Identifies specific type of UDS; valid values are COMBO, COVERED and REPO. id: 762
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
LocalMktDate StartDate; ///< Start date of a financing deal, i.e. the date the buyer pays the seller cash and takes control of the collateral. id: 916
LocalMktDate EndDate; ///< End date of a financing deal, i.e. the date the seller reimburses the buyer and takes back control of the collateral. id: 917
uInt8NULL MaxNoOfSubstitutions; ///< Max number of substitutions allowed. The value of 0 indicates that substitutions are not allowed.. id: 37715
Int32NULL SourceRepoID; ///< Represents the source repo instrument on which the new tailor made repo should be modeled on. id: 5677
uInt8NULL BrokenDateTermType; ///< Defines how user defined tailor made repo contract is to be broken down into different broken dates. id: 6651
char VariableData [0];
};
/// SecurityDefinitionResponse block_length: 430.
struct SecurityDefinitionResponse561 {
static constexpr int id {MSG_ID_SecurityDefinitionResponse561};
static constexpr int block_length {430};
/// Number of legs (repeating groups). id: 555
struct NoLegs {
static constexpr int id {FIELD_ID_NoLegs}; ///< id = 555
using DimensionType = groupSize;
PRICENULL9 LegPrice; ///< Price for a futures leg of a covered . id: 566
Decimal32NULL LegOptionDelta; ///< Delta used to calculate the quantity of futures used to cover the option or option strategy.For a covered option outright instrument, must be between +0.01 and +1.00. For a covered option spread instrument, must be between +0.01 and +40.00. id: 1017
static constexpr decltype(LegSecIDSource) LegSecurityIDSource {LegSecIDSource}; ///< Identifies class or source of the tag 602-LegSecurityID value. Constant value. id: 603
Int32 LegSecurityID; ///< Unique instrument ID for the leg.. id: 602
SideReq LegSide; ///< For Covereds, must be present for option repeating group and must = 1 (buy). For Covereds, must be present for future repeating group as well. For Combos, the first instrument in the repeating group must = 1 (buy). All UDS contract are defined from the buy side perspective (i.e. buying the spread).. id: 624
uInt8NULL LegRatioQty; ///< Specifies ratio for the instrument defined in this repeating group. Required for any UDS options leg. Optional for Covereds leg. id: 623
};
/// Used to indicate the number of custom bespoke broken dates for user defined tailor made repo id: 39026
struct NoBrokenDates {
static constexpr int id {FIELD_ID_NoBrokenDates}; ///< id = 39026
using DimensionType = groupSize;
uInt64NULL BrokenDateGUID; ///< External unique REPO Instrument ID. CME assigned values. id: 39031
Int32NULL BrokenDateSecurityID; ///< REPO Instrument Security ID. id: 39027
LocalMktDate BrokenDateStart; ///< Start date of a financing deal, i.e. the date the buyer pays the seller cash and takes control of the collateral. id: 6748
LocalMktDate BrokenDateEnd; ///< End date of a financing deal, i.e. the date the seller reimburses the buyer and takes back control of the collateral.. id: 6741
};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String256 Text; ///< Reject reason details. Will be used only for descriptive rejects. id: 58
StringLength35 FinancialInstrumentFullName; ///< Long name of the instrument for TM Repo. id: 2714
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
String20 Symbol; ///< Instrument Short Name for TM Repo . id: 55
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 SecurityReqID; ///< Unique identifier for a security definition request. id: 320
uInt64 SecurityResponseID; ///< Unique ID of a SecurityDefinition message. id: 322
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
StringLength6 SecurityGroup; ///< Security Group Code.  This tag was previously used as Product Code. An exchange specific code assigned to a group of related securities, which are concurrently affected by market events. . id: 1151
StringLength6 SecurityType; ///< Indicates type of security. id: 167
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32NULL SecurityID; ///< Unique instrument ID . id: 48
String3 Currency; ///< Identifies the currency for the price. id: 15
static constexpr decltype(SecurityIDSource) SecurityIDSource {SecurityIDSource}; ///< Identifies class or source of the SecurityID (Tag 48) value. Constant value. id: 22
MaturityMonthYear MaturityMonthYear; ///< Instrument expiration; earliest leg maturity in the options strategy . id: 200
uInt16NULL DelayDuration; ///< Not being used currently. id: 5904
LocalMktDate StartDate; ///< Start date of a financing deal, i.e. the date the buyer pays the seller cash and takes control of the collateral. id: 916
LocalMktDate EndDate; ///< nd date of a financing deal, i.e. the date the seller reimburses the buyer and takes back control of the collateral. id: 917
uInt8NULL MaxNoOfSubstitutions; ///< Max number of substitutions allowed. The value of 0 indicates that substitutions are not allowed.. id: 37715
Int32NULL SourceRepoID; ///< Represents the source repo instrument on which the new tailor made repo should be modeled on. id: 5677
String8 TerminationType; ///< Represents the term code. id: 788
SecRspTyp SecurityResponseType; ///< Type of security definition message response. . id: 323
static constexpr decltype(UDI) UserDefinedInstrument {UDI}; ///< Identifies user-defined instruments. Constant value. id: 9779
ExpCycle ExpirationCycle; ///< For tag 827-ExpirationCycle=2, instrument expires as indicated in market data Security Definition (tag 35-MsgType=d) repeating block:  Tag 865-EventType=7 (Last Eligible Trade Date) Tag 1145-EventTime. id: 827
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
BooleanFlag AutoQuoteRequest; ///< Boolean flag (0/1) to automatically send a quote request message following the security definition (35=d) message.. id: 9776
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
uInt8NULL BrokenDateTermType; ///< Defines how user defined tailor made repo contract is to be broken down into different broken dates. id: 6651
char VariableData [0];
};
/// OrderMassActionReport block_length: 130.
struct OrderMassActionReport562 {
static constexpr int id {MSG_ID_OrderMassActionReport562};
static constexpr int block_length {130};
/// Total number of order identifiers affected by the OrderMass Action Request. Only used if orders could actually be cancelled otherwise will be set to zero. Must be followed by OrigCIOrdID id: 534
struct NoAffectedOrders {
static constexpr int id {FIELD_ID_NoAffectedOrders}; ///< id = 534
using DimensionType = groupSize;
String20Req OrigCIOrdID; ///< Contains the ClOrd of the cancelled order. id: 41
uInt64 AffectedOrderID; ///< Order ID of an order cancelled by a mass action request.. id: 535
uInt32 CxlQuantity; ///< Total quantity cancelled for this order.. id: 84
};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequestAck attached to this message; pancake flip of what was submitted on inbound message. id: 1505
uInt64 TransactTime; ///< Time of execution/order creation; expressed in UTC.. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 OrderRequestID; ///< OrderRequestID used to identify an OrderMassActionRequest and echo the value on the corresponding OrderMassActionReport. id: 2422
uInt64 MassActionReportID; ///< Unique ID of Order Mass Action Report as assigned by CME. If fragmented then all messages must have the same value.. id: 1369
static constexpr decltype(MassAction) MassActionType {MassAction}; ///< Specifies the type of action requested. Constant value . id: 1373
StringLength6 SecurityGroup; ///< Specifies the Product Group for which working orders should be cancelled. Conditionally present if MassActionScope=Product Group (Tag1374=10).. id: 1151
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32NULL SecurityID; ///< Conditionally present if MassActionScope=Instrument (Tag 1374=1). id: 48
uInt16NULL DelayDuration; ///< Not being used currently. id: 5904
MassActionResponse MassActionResponse; ///< Specifies the action taken by CME when it received the Order Mass Action Request.. id: 1375
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the order was initially received manually (as opposed to electronically). id: 1028
MassActionScope MassActionScope; ///< Specifies the scope of the action  . id: 1374
uInt32 TotalAffectedOrders; ///< Total number of orders affected by the Order Mass  Action Request. Will be returned as zero for rejects or if request is accepted but no orders could be cancelled. If fragmented then this is the sum of NoAffectedOrders across all messages with the same MassActionReportID. Otherwise will have same value as NoAffectedOrders when one or more orders is cancelled.. id: 533
BooleanFlag LastFragment; ///< Indicates whether the message is the last message in a sequence of messages to support fragmentation. id: 893
uInt8NULL MassActionRejectReason; ///< Reason Order Mass Action Request was rejected. Required if Mass Action Response=0.. id: 1376
uInt8NULL MarketSegmentID; ///< Specifies the market segment (physical match engine partition) for which working orders should be cancelled. Conditionally present if MassActionScope=Market Segment (Tag 1374=9). id: 1300
MassCxlReqTyp MassCancelRequestType; ///< If present specifies the scope of the OrderMassActionRequest within the context of Session and Firm. If absent then all orders belonging to Session and Firm combination will be cancelled for specified MassActionScope. id: 6115
SideNULL Side; ///< f provided then only orders belonging to one side will be cancelled. If absent then orders belonging to both sides will be cancelled. id: 54
MassActionOrdTyp OrdType; ///< If provided then only orders of this type will be cancelled. If absent then all order types will be cancelled. id: 40
MassCancelTIF TimeInForce; ///< If provided then only orders with this qualifier will be cancelled. If absent then all Day & GT orders will be cancelled. id: 59
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
uInt64NULL DelayToTime; ///< Indicates the amount of time that a message was delayed as a result of being split (9553=0) or as a result of being out of order due to TCP retransmission (9553=1) or as a result of being queued behind a split message (9553=2). Represented as number of nanoseconds in unix epoch format (since Jan 1, 1970). Subtracting this number from FIFO time will represent original received time of delayed message. id: 7552
String8 OrigOrderUser; ///< Represents the original sender comp for whom orders or quotes are to be cancelled. id: 9937
String8 CancelText; ///< Represents the sender comp which initiated the cancellation of orders or quotes for the original sender comp. id: 2807
char VariableData [0];
};
/// QuoteCancelAck block_length: 368.
struct QuoteCancelAck563 {
static constexpr int id {MSG_ID_QuoteCancelAck563};
static constexpr int block_length {368};
/// The number of quote entries for a quote set. Will be populated only for enumerated rejects for Cancel By Instrument id: 295
struct NoQuoteEntries {
static constexpr int id {FIELD_ID_NoQuoteEntries}; ///< id = 295
using DimensionType = groupSize;
uInt32 QuoteEntryID; ///< Unique identifier for a quote. The QuoteEntryID stays with the quote as a static identifier even if the quote is updated. For fills this value is transposed into client order ID (tag 11). id: 299
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages. id: 48
uInt8 QuoteEntryRejectReason; ///< Reason (error code) quote has been rejected. id: 368
};
/// The number of sets of quotes in the message. Will be populated only for enumerated rejects for Cancel By Quote Set id: 296
struct NoQuoteSets {
static constexpr int id {FIELD_ID_NoQuoteSets}; ///< id = 296
using DimensionType = groupSize;
uInt16 QuoteSetID; ///< Unique id for the Quote Set. id: 302
uInt16 QuoteErrorCode; ///< Reason (error code) quote set cancel has been rejected.. id: 9030
};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String256 Text; ///< Reject reason details. Will be used only for descriptive rejects. id: 58
String20Req SenderID; ///< Operator ID. Should be unique per Firm ID. Assigned value used to identify specific message originator. Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. id: 5392
uInt64 PartyDetailsListReqID; ///< The unique identifier of the PartyDetailsDefinitionRequestAck attached to this message; pancake flip of what was submitted on inbound message. id: 1505
uInt64 RequestTime; ///< Information carried on a response to convey the time (UTC) when the request was received by the MSGW application. UTC timestamps are sent in number of nanoseconds since the UNIX epoch with microsecond precision. id: 5979
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
StringLength6 CancelledSymbol; ///< Instrument Group cancelled for a Quote Cancel acknowledgement.. id: 9774
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
uInt32 QuoteID; ///< Unique identifier for quote cancel message. id: 117
uInt16NULL QuoteRejectReason; ///< Contains reason (error code) the corresponding QuoteCancel message has been rejected. id: 300
uInt16NULL DelayDuration; ///< Not being currently used. id: 5904
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if the message was initially received manually (as opposed to electronically). id: 1028
QuoteCxlStatus QuoteStatus; ///< Identifies the type of Quote Cancel. A working quote can be cancelled by providing either it's instrument, quote set, product group, or by cancelling all. id: 297
uInt32 NoProcessedEntries; ///< Number of quotes successfully cancelled (if in response to a Quote Cancel message). id: 9772
BooleanFlag MMProtectionReset; ///< This tag is sent and set to '1' on the quote cancel acknowledgment which is sent after Market Maker protection is triggered and all resting quotes are cancelled for that particular group (297=3). id: 9773
charNULL UnsolicitedCancelType; ///< Type of quote cancel generated by CME -- returned only for unsolicited quote cancels. id: 9775
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
uInt8NULL TotNoQuoteEntries; ///< Total number of quotes for the quote set across all messages. Will be populated only for enumerated rejects for Cancel By Instrument. id: 304
BooleanNULL LiquidityFlag; ///< Represents the market making MiFID obligation reporting. id: 9373
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
uInt64NULL DelayToTime; ///< Indicates the amount of time that a message was delayed as a result of being split (9553=0) or as a result of being out of order due to TCP retransmission (9553=1) or as a result of being queued behind a split message (9553=2). Represented as number of nanoseconds in unix epoch format (since Jan 1, 1970). Subtracting this number from FIFO time will represent original received time of delayed message. id: 7552
String8 OrigOrderUser; ///< Represents the original sender comp for whom orders or quotes are to be cancelled. id: 9937
String8 CancelText; ///< Represents the sender comp which initiated the cancellation of orders or quotes for the original sender comp. id: 2807
BooleanNULL QuoteEntryOpen; ///< A boolean value indicating if new quotes should be rejected for the sender comp for whom quotes are being cancelled on behalf; also to be used to reset such a block on mass quotes being sent by the blocked sender comp  . id: 9182
char VariableData [0];
};
/// ExecutionReportPendingCancel block_length: 219.
struct ExecutionReportPendingCancel564 {
static constexpr int id {MSG_ID_ExecutionReportPendingCancel564};
static constexpr int block_length {219};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String40 ExecID; ///< Unique identifier of execution message as assigned by the exchange. Unique per day across all instruments and across all good till orders.. id: 17
String20Req SenderID; ///< For futures and options markets:  Operator ID  Should be unique per Firm ID  Assigned value used to identify specific message originator  Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. For fixed income markets: represents the Entering Trader. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments. id: 37
PRICE9 Price; ///< Price per share or contract. id: 44
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 OrderRequestID; ///< OrderRequestID used to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport. id: 2422
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages.. id: 48
uInt32 OrderQty; ///< Number of shares or contracts ordered.. id: 38
uInt32 CumQty; ///< Total quantity filled. Will be set to 0. id: 14
uInt32NULL LeavesQty; ///< Amount of shares open for further execution, or unexecuted. Will not be rolled back in case of trade cancel. Will not be returned in trade cancels and leg fills. . id: 151
uInt32NULL MinQty; ///< Minimum quantity of an order to be executed.. id: 110
uInt32NULL DisplayQty; ///< The quantity to be displayed . Required for iceberg orders. On orders specifies the qty to be displayed, on execution reports the currently displayed quantity. id: 1138
LocalMktDate ExpireDate; ///< Date of order expiration (last day the order can trade), always expressed in terms of the local market date. Default: days since Unix epoch. Range: Jan. 1, 1970 - June 7, 2149 local. id: 432
static constexpr decltype(OrdStatusPendCxl) OrdStatus {OrdStatusPendCxl}; ///< Identifies status of order as subject to pending cancellation. Constant value. id: 39
static constexpr decltype(ExecTypePendCxl) ExecType {ExecTypePendCxl}; ///< Describes the specific ExecutionRpt as subject to pending cancellation. Constant value. id: 150
OrderType OrdType; ///< Order type.. id: 40
SideReq Side; ///< Order side. id: 54
TimeInForce TimeInForce; ///< Specifies how long the order remains in effect. FOK is supported only for BrokerTec/EBS. GFS is supported only for EBS. id: 59
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if order was sent manually or generated by automated trading logic. id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission or duplicate. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest or possible duplicate. This will become pertinent when original messages get interleaved with Retransmission responses. Possible duplicate means that same message could have been sent again with different sequence number. id: 9765
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
uInt64NULL DelayToTime; ///< Indicates the amount of time that a message was delayed as a result of being split (9553=0) or as a result of being out of order due to TCP retransmission (9553=1) or as a result of being queued behind a split message (9553=2). Represented as number of nanoseconds in unix epoch format (since Jan 1, 1970). Subtracting this number from Tag 60 will represent original received time of delayed message. id: 7552
PRICENULL9 DiscretionPrice; ///< The presence of DiscretionPrice on an order indicates that the trader wishes to display one price but will accept trades at another price. id: 845
PRICENULL9 ReservationPrice; ///< This field specifies the highest (for a buy) or lowest (for a sell) price at which the order may trade. This price must be better than the limit price and should be multiple of reservation price tick. id: 9562
uInt8NULL PriorityIndicator; ///< This field is being added to report whether incoming new order/cancel replace entered the book or subsequently rests on the book with either large or standard order size priority. id: 638
String8 OrigOrderUser; ///< Represents the original sender comp for whom orders or quotes are to be cancelled. id: 9937
String8 CancelText; ///< Represents the sender comp which initiated the cancellation of orders or quotes for the original sender comp. id: 2807
};
/// ExecutionReportPendingReplace block_length: 196.
struct ExecutionReportPendingReplace565 {
static constexpr int id {MSG_ID_ExecutionReportPendingReplace565};
static constexpr int block_length {196};
uInt32 SeqNum; ///< Sequence number as assigned to message. id: 9726
uInt64 UUID; ///< Matches Establish.UUID used to establish the connection. id: 39001
String40 ExecID; ///< Unique identifier of execution message as assigned by exchange. Uniqueness will be guaranteed within a single trading day or the life of a multi-day order. id: 17
String20Req SenderID; ///< For futures and options markets:  Operator ID  Should be unique per Firm ID  Assigned value used to identify specific message originator  Represents last individual or team in charge of the system which modifies the order before submission to the Globex platform, or if not modified from initiator (party role=118), last individual or team in charge of the system, which submit the order to the Globex platform. For fixed income markets: represents the Entering Trader. id: 5392
String20Req ClOrdID; ///< Unique identifier for Order as assigned by the buy-side (institution, broker, intermediary etc.). Uniqueness must be guaranteed within a single trading day. Firms, particularly those which electronically submit multi-day orders, trade globally or throughout market close periods, should ensure uniqueness across days, for example by embedding a date within the ClOrdID field. id: 11
uInt64 PartyDetailsListReqID; ///< Refers to the ID of the related PartyDetailsDefinitionRequest message which will logically be tied to this message. id: 1505
uInt64 OrderID; ///< Unique identifier for order as assigned by the exchange. Uniqueness is guaranteed within a single trading day across all instruments. id: 37
PRICE9 Price; ///< Price per share or contract. id: 44
uInt64 TransactTime; ///< Time the transaction represented by this ExecutionReport (35=8) occurred. Expressed as nanoseconds since epoch time. id: 60
uInt64 SendingTimeEpoch; ///< Time when the message is sent. 64-bit integer expressing the number of nano seconds since midnight January 1, 1970.. id: 5297
uInt64 OrderRequestID; ///< OrderRequestID used to identify a request to enter, modify or delete an order and echo the value on the ExecutionReport. id: 2422
String5Req Location; ///< Text describing sender's location (i.e. geopraphic location and/or desk). id: 9537
Int32 SecurityID; ///< Security ID as defined by CME. For the security ID list, see the security definition messages.. id: 48
uInt32 OrderQty; ///< Number of shares or contracts ordered.. id: 38
uInt32 CumQty; ///< Total quantity filled. Will be set to 0 for OFMOverride=0 (Disabled). Will be set to total quantity filled for OFMOverride=1 (Enabled). id: 14
uInt32 LeavesQty; ///< Quantity open for further execution. LeavesQty = OrderQty (38) - CumQty (14). id: 151
uInt32NULL MinQty; ///< Minimum quantity of an order to be executed.. id: 110
uInt32NULL DisplayQty; ///< The quantity to be displayed . Required for iceberg orders. On orders specifies the qty to be displayed, on execution reports the currently displayed quantity. id: 1138
LocalMktDate ExpireDate; ///< Date of order expiration (last day the order can trade), always expressed in terms of the local market date. Default: days since Unix epoch. Range: Jan. 1, 1970 - June 7, 2149 local. id: 432
static constexpr decltype(PendModStatus) OrdStatus {PendModStatus}; ///< Identifies status of order as subject to pending replace. Constant value. id: 39
static constexpr decltype(ExecTypePendModify) ExecType {ExecTypePendModify}; ///< Describes the specific ExecutionRpt as subject to pending replace. Constant value. id: 150
OrderType OrdType; ///< Order type.. id: 40
SideReq Side; ///< Side of order. id: 54
TimeInForce TimeInForce; ///< Specifies how long the order remains in effect. FOK is supported only for BrokerTec/EBS. GFS is supported only for EBS. id: 59
ManualOrdIndReq ManualOrderIndicator; ///< Indicates if order was sent manually or generated by automated trading logic. id: 1028
BooleanFlag PossRetransFlag; ///< Flags message as possible retransmission. This will convey whether a message is an original transmission or duplicate in response to RetransmissionRequest. This will become pertinent when original messages get interleaved with Retransmission responses. id: 9765
SplitMsg SplitMsg; ///< Indicates whether a message was delayed as a result of being split among multiple packets (0) or if a message was delayed as a result of TCP re-transmission (1) or if a complete message was delayed due to a previously submitted split or out of order message (2). If absent then the message was not delayed and was neither split nor received out of order. id: 9553
BooleanNULL LiquidityFlag; ///< Field added to capture if an order was submitted for market making obligation or not. Applicable only for EU BrokerTec and EBS MiFID regulated instruments. id: 9373
ShortSaleType ShortSaleType; ///< Indicates the type of short sale. Will not be used for Buy orders but Sell orders should have this tag populated for MiFID. id: 5409
uInt64NULL DelayToTime; ///< Indicates the amount of time that a message was delayed as a result of being split (9553=0) or as a result of being out of order due to TCP retransmission (9553=1) or as a result of being queued behind a split message (9553=2). Represented as number of nanoseconds in unix epoch format (since Jan 1, 1970). Subtracting this number from FIFO time will represent original received time of delayed message. id: 7552
PRICENULL9 DiscretionPrice; ///< The presence of DiscretionPrice on an order indicates that the trader wishes to display one price but will accept trades at another price. id: 845
uInt8NULL PriorityIndicator; ///< This field is being added to report whether incoming new order/cancel replace entered the book or subsequently rests on the book with either large or standard order size priority. id: 638
};
#pragma pack()
/// check convert integrity
inline bool check(){
static_assert ( offsetof(Negotiate500, HMACSignature) == 0);
static_assert ( offsetof(Negotiate500, AccessKeyID) == 32);
static_assert ( offsetof(Negotiate500, UUID) == 52);
static_assert ( offsetof(Negotiate500, RequestTimestamp) == 60);
static_assert ( offsetof(Negotiate500, Session) == 68);
static_assert ( offsetof(Negotiate500, Firm) == 71);
static_assert ( offsetof(NegotiationResponse501, UUID) == 0);
static_assert ( offsetof(NegotiationResponse501, RequestTimestamp) == 8);
static_assert ( offsetof(NegotiationResponse501, SecretKeySecureIDExpiration) == 16);
static_assert ( offsetof(NegotiationResponse501, FaultToleranceIndicator) == 18);
static_assert ( offsetof(NegotiationResponse501, SplitMsg) == 19);
static_assert ( offsetof(NegotiationResponse501, PreviousSeqNo) == 20);
static_assert ( offsetof(NegotiationResponse501, PreviousUUID) == 24);
static_assert ( offsetof(NegotiationReject502, Reason) == 0);
static_assert ( offsetof(NegotiationReject502, UUID) == 48);
static_assert ( offsetof(NegotiationReject502, RequestTimestamp) == 56);
static_assert ( offsetof(NegotiationReject502, ErrorCodes) == 64);
static_assert ( offsetof(NegotiationReject502, FaultToleranceIndicator) == 66);
static_assert ( offsetof(NegotiationReject502, SplitMsg) == 67);
static_assert ( offsetof(Establish503, HMACSignature) == 0);
static_assert ( offsetof(Establish503, AccessKeyID) == 32);
static_assert ( offsetof(Establish503, TradingSystemName) == 52);
static_assert ( offsetof(Establish503, TradingSystemVersion) == 82);
static_assert ( offsetof(Establish503, TradingSystemVendor) == 92);
static_assert ( offsetof(Establish503, UUID) == 102);
static_assert ( offsetof(Establish503, RequestTimestamp) == 110);
static_assert ( offsetof(Establish503, NextSeqNo) == 118);
static_assert ( offsetof(Establish503, Session) == 122);
static_assert ( offsetof(Establish503, Firm) == 125);
static_assert ( offsetof(Establish503, KeepAliveInterval) == 130);
static_assert ( offsetof(EstablishmentAck504, UUID) == 0);
static_assert ( offsetof(EstablishmentAck504, RequestTimestamp) == 8);
static_assert ( offsetof(EstablishmentAck504, NextSeqNo) == 16);
static_assert ( offsetof(EstablishmentAck504, PreviousSeqNo) == 20);
static_assert ( offsetof(EstablishmentAck504, PreviousUUID) == 24);
static_assert ( offsetof(EstablishmentAck504, KeepAliveInterval) == 32);
static_assert ( offsetof(EstablishmentAck504, SecretKeySecureIDExpiration) == 34);
static_assert ( offsetof(EstablishmentAck504, FaultToleranceIndicator) == 36);
static_assert ( offsetof(EstablishmentAck504, SplitMsg) == 37);
static_assert ( offsetof(EstablishmentReject505, Reason) == 0);
static_assert ( offsetof(EstablishmentReject505, UUID) == 48);
static_assert ( offsetof(EstablishmentReject505, RequestTimestamp) == 56);
static_assert ( offsetof(EstablishmentReject505, NextSeqNo) == 64);
static_assert ( offsetof(EstablishmentReject505, ErrorCodes) == 68);
static_assert ( offsetof(EstablishmentReject505, FaultToleranceIndicator) == 70);
static_assert ( offsetof(EstablishmentReject505, SplitMsg) == 71);
static_assert ( offsetof(Sequence506, UUID) == 0);
static_assert ( offsetof(Sequence506, NextSeqNo) == 8);
static_assert ( offsetof(Sequence506, FaultToleranceIndicator) == 12);
static_assert ( offsetof(Sequence506, KeepAliveIntervalLapsed) == 13);
static_assert ( offsetof(Terminate507, Reason) == 0);
static_assert ( offsetof(Terminate507, UUID) == 48);
static_assert ( offsetof(Terminate507, RequestTimestamp) == 56);
static_assert ( offsetof(Terminate507, ErrorCodes) == 64);
static_assert ( offsetof(Terminate507, SplitMsg) == 66);
static_assert ( offsetof(RetransmitRequest508, UUID) == 0);
static_assert ( offsetof(RetransmitRequest508, LastUUID) == 8);
static_assert ( offsetof(RetransmitRequest508, RequestTimestamp) == 16);
static_assert ( offsetof(RetransmitRequest508, FromSeqNo) == 24);
static_assert ( offsetof(RetransmitRequest508, MsgCount) == 28);
static_assert ( offsetof(Retransmission509, UUID) == 0);
static_assert ( offsetof(Retransmission509, LastUUID) == 8);
static_assert ( offsetof(Retransmission509, RequestTimestamp) == 16);
static_assert ( offsetof(Retransmission509, FromSeqNo) == 24);
static_assert ( offsetof(Retransmission509, MsgCount) == 28);
static_assert ( offsetof(Retransmission509, SplitMsg) == 30);
static_assert ( offsetof(RetransmitReject510, Reason) == 0);
static_assert ( offsetof(RetransmitReject510, UUID) == 48);
static_assert ( offsetof(RetransmitReject510, LastUUID) == 56);
static_assert ( offsetof(RetransmitReject510, RequestTimestamp) == 64);
static_assert ( offsetof(RetransmitReject510, ErrorCodes) == 72);
static_assert ( offsetof(RetransmitReject510, SplitMsg) == 74);
static_assert ( offsetof(NotApplied513, UUID) == 0);
static_assert ( offsetof(NotApplied513, FromSeqNo) == 8);
static_assert ( offsetof(NotApplied513, MsgCount) == 12);
static_assert ( offsetof(NotApplied513, SplitMsg) == 16);
static_assert ( offsetof(NewOrderSingle514, Price) == 0);
static_assert ( offsetof(NewOrderSingle514, OrderQty) == 8);
static_assert ( offsetof(NewOrderSingle514, SecurityID) == 12);
static_assert ( offsetof(NewOrderSingle514, Side) == 16);
static_assert ( offsetof(NewOrderSingle514, SeqNum) == 17);
static_assert ( offsetof(NewOrderSingle514, SenderID) == 21);
static_assert ( offsetof(NewOrderSingle514, ClOrdID) == 41);
static_assert ( offsetof(NewOrderSingle514, PartyDetailsListReqID) == 61);
static_assert ( offsetof(NewOrderSingle514, OrderRequestID) == 69);
static_assert ( offsetof(NewOrderSingle514, SendingTimeEpoch) == 77);
static_assert ( offsetof(NewOrderSingle514, StopPx) == 85);
static_assert ( offsetof(NewOrderSingle514, Location) == 93);
static_assert ( offsetof(NewOrderSingle514, MinQty) == 98);
static_assert ( offsetof(NewOrderSingle514, DisplayQty) == 102);
static_assert ( offsetof(NewOrderSingle514, ExpireDate) == 106);
static_assert ( offsetof(NewOrderSingle514, OrdType) == 108);
static_assert ( offsetof(NewOrderSingle514, TimeInForce) == 109);
static_assert ( offsetof(NewOrderSingle514, ManualOrderIndicator) == 110);
static_assert ( offsetof(NewOrderSingle514, ExecInst) == 111);
static_assert ( offsetof(NewOrderSingle514, ExecutionMode) == 112);
static_assert ( offsetof(NewOrderSingle514, LiquidityFlag) == 113);
static_assert ( offsetof(NewOrderSingle514, ManagedOrder) == 114);
static_assert ( offsetof(NewOrderSingle514, ShortSaleType) == 115);
static_assert ( offsetof(NewOrderSingle514, DiscretionPrice) == 116);
static_assert ( offsetof(NewOrderSingle514, ReservationPrice) == 124);
static_assert ( offsetof(OrderCancelReplaceRequest515, Price) == 0);
static_assert ( offsetof(OrderCancelReplaceRequest515, OrderQty) == 8);
static_assert ( offsetof(OrderCancelReplaceRequest515, SecurityID) == 12);
static_assert ( offsetof(OrderCancelReplaceRequest515, Side) == 16);
static_assert ( offsetof(OrderCancelReplaceRequest515, SeqNum) == 17);
static_assert ( offsetof(OrderCancelReplaceRequest515, SenderID) == 21);
static_assert ( offsetof(OrderCancelReplaceRequest515, ClOrdID) == 41);
static_assert ( offsetof(OrderCancelReplaceRequest515, PartyDetailsListReqID) == 61);
static_assert ( offsetof(OrderCancelReplaceRequest515, OrderID) == 69);
static_assert ( offsetof(OrderCancelReplaceRequest515, StopPx) == 77);
static_assert ( offsetof(OrderCancelReplaceRequest515, OrderRequestID) == 85);
static_assert ( offsetof(OrderCancelReplaceRequest515, SendingTimeEpoch) == 93);
static_assert ( offsetof(OrderCancelReplaceRequest515, Location) == 101);
static_assert ( offsetof(OrderCancelReplaceRequest515, MinQty) == 106);
static_assert ( offsetof(OrderCancelReplaceRequest515, DisplayQty) == 110);
static_assert ( offsetof(OrderCancelReplaceRequest515, ExpireDate) == 114);
static_assert ( offsetof(OrderCancelReplaceRequest515, OrdType) == 116);
static_assert ( offsetof(OrderCancelReplaceRequest515, TimeInForce) == 117);
static_assert ( offsetof(OrderCancelReplaceRequest515, ManualOrderIndicator) == 118);
static_assert ( offsetof(OrderCancelReplaceRequest515, OFMOverride) == 119);
static_assert ( offsetof(OrderCancelReplaceRequest515, ExecInst) == 120);
static_assert ( offsetof(OrderCancelReplaceRequest515, ExecutionMode) == 121);
static_assert ( offsetof(OrderCancelReplaceRequest515, LiquidityFlag) == 122);
static_assert ( offsetof(OrderCancelReplaceRequest515, ManagedOrder) == 123);
static_assert ( offsetof(OrderCancelReplaceRequest515, ShortSaleType) == 124);
static_assert ( offsetof(OrderCancelReplaceRequest515, DiscretionPrice) == 125);
static_assert ( offsetof(OrderCancelRequest516, OrderID) == 0);
static_assert ( offsetof(OrderCancelRequest516, PartyDetailsListReqID) == 8);
static_assert ( offsetof(OrderCancelRequest516, ManualOrderIndicator) == 16);
static_assert ( offsetof(OrderCancelRequest516, SeqNum) == 17);
static_assert ( offsetof(OrderCancelRequest516, SenderID) == 21);
static_assert ( offsetof(OrderCancelRequest516, ClOrdID) == 41);
static_assert ( offsetof(OrderCancelRequest516, OrderRequestID) == 61);
static_assert ( offsetof(OrderCancelRequest516, SendingTimeEpoch) == 69);
static_assert ( offsetof(OrderCancelRequest516, Location) == 77);
static_assert ( offsetof(OrderCancelRequest516, SecurityID) == 82);
static_assert ( offsetof(OrderCancelRequest516, Side) == 86);
static_assert ( offsetof(OrderCancelRequest516, LiquidityFlag) == 87);
static_assert ( offsetof(OrderCancelRequest516, OrigOrderUser) == 88);
static_assert ( offsetof(MassQuote517::NoQuoteEntries, BidPx) == 0);
static_assert ( offsetof(MassQuote517::NoQuoteEntries, OfferPx) == 8);
static_assert ( offsetof(MassQuote517::NoQuoteEntries, QuoteEntryID) == 16);
static_assert ( offsetof(MassQuote517::NoQuoteEntries, SecurityID) == 20);
static_assert ( offsetof(MassQuote517::NoQuoteEntries, BidSize) == 24);
static_assert ( offsetof(MassQuote517::NoQuoteEntries, OfferSize) == 28);
static_assert ( offsetof(MassQuote517::NoQuoteEntries, UnderlyingSecurityID) == 32);
static_assert ( offsetof(MassQuote517::NoQuoteEntries, QuoteSetID) == 36);
static_assert ( offsetof(MassQuote517, PartyDetailsListReqID) == 0);
static_assert ( offsetof(MassQuote517, SendingTimeEpoch) == 8);
static_assert ( offsetof(MassQuote517, ManualOrderIndicator) == 16);
static_assert ( offsetof(MassQuote517, SeqNum) == 17);
static_assert ( offsetof(MassQuote517, SenderID) == 21);
static_assert ( offsetof(MassQuote517, QuoteReqID) == 41);
static_assert ( offsetof(MassQuote517, Location) == 49);
static_assert ( offsetof(MassQuote517, QuoteID) == 54);
static_assert ( offsetof(MassQuote517, TotNoQuoteEntries) == 58);
static_assert ( offsetof(MassQuote517, MMProtectionReset) == 59);
static_assert ( offsetof(MassQuote517, LiquidityFlag) == 60);
static_assert ( offsetof(MassQuote517, ShortSaleType) == 61);
static_assert ( offsetof(MassQuote517, Reserved) == 62);
static_assert ( offsetof(MassQuote517, Reserved1) == 92);
static_assert ( offsetof(MassQuote517, QuoteEntryOpen) == 122);
static_assert ( offsetof(PartyDetailsDefinitionRequest518::NoPartyDetails, PartyDetailID) == 0);
static_assert ( offsetof(PartyDetailsDefinitionRequest518::NoPartyDetails, PartyDetailRole) == 20);
static_assert ( offsetof(PartyDetailsDefinitionRequest518::NoTrdRegPublications, TrdRegPublicationType) == 0);
static_assert ( offsetof(PartyDetailsDefinitionRequest518::NoTrdRegPublications, TrdRegPublicationReason) == 1);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, PartyDetailsListReqID) == 0);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, SendingTimeEpoch) == 8);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, ListUpdateAction) == 16);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, SeqNum) == 17);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, Memo) == 21);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, AvgPxGroupID) == 96);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, SelfMatchPreventionID) == 116);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, CmtaGiveupCD) == 124);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, CustOrderCapacity) == 125);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, ClearingAccountType) == 126);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, SelfMatchPreventionInstruction) == 127);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, AvgPxIndicator) == 128);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, ClearingTradePriceType) == 129);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, CustOrderHandlingInst) == 130);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, Executor) == 131);
static_assert ( offsetof(PartyDetailsDefinitionRequest518, IDMShortCode) == 139);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519::NoPartyDetails, PartyDetailID) == 0);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519::NoPartyDetails, PartyDetailRole) == 20);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519::NoTrdRegPublications, TrdRegPublicationType) == 0);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519::NoTrdRegPublications, TrdRegPublicationReason) == 1);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, SeqNum) == 0);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, UUID) == 4);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, Memo) == 12);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, AvgPxGroupID) == 87);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, PartyDetailsListReqID) == 107);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, SendingTimeEpoch) == 115);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, SelfMatchPreventionID) == 123);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, PartyDetailRequestStatus) == 131);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, CustOrderCapacity) == 132);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, ClearingAccountType) == 133);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, SelfMatchPreventionInstruction) == 134);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, AvgPxIndicator) == 135);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, ClearingTradePriceType) == 136);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, CmtaGiveupCD) == 137);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, CustOrderHandlingInst) == 138);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, ListUpdateAction) == 139);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, PartyDetailDefinitionStatus) == 140);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, Executor) == 141);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, IDMShortCode) == 149);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, PossRetransFlag) == 157);
static_assert ( offsetof(PartyDetailsDefinitionRequestAck519, SplitMsg) == 158);
static_assert ( offsetof(BusinessReject521, SeqNum) == 0);
static_assert ( offsetof(BusinessReject521, UUID) == 4);
static_assert ( offsetof(BusinessReject521, Text) == 12);
static_assert ( offsetof(BusinessReject521, SenderID) == 268);
static_assert ( offsetof(BusinessReject521, PartyDetailsListReqID) == 288);
static_assert ( offsetof(BusinessReject521, SendingTimeEpoch) == 296);
static_assert ( offsetof(BusinessReject521, BusinessRejectRefID) == 304);
static_assert ( offsetof(BusinessReject521, Location) == 312);
static_assert ( offsetof(BusinessReject521, RefSeqNum) == 317);
static_assert ( offsetof(BusinessReject521, RefTagID) == 321);
static_assert ( offsetof(BusinessReject521, BusinessRejectReason) == 323);
static_assert ( offsetof(BusinessReject521, RefMsgType) == 325);
static_assert ( offsetof(BusinessReject521, PossRetransFlag) == 327);
static_assert ( offsetof(BusinessReject521, ManualOrderIndicator) == 328);
static_assert ( offsetof(BusinessReject521, SplitMsg) == 329);
static_assert ( offsetof(ExecutionReportNew522, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportNew522, UUID) == 4);
static_assert ( offsetof(ExecutionReportNew522, ExecID) == 12);
static_assert ( offsetof(ExecutionReportNew522, SenderID) == 52);
static_assert ( offsetof(ExecutionReportNew522, ClOrdID) == 72);
static_assert ( offsetof(ExecutionReportNew522, PartyDetailsListReqID) == 92);
static_assert ( offsetof(ExecutionReportNew522, OrderID) == 100);
static_assert ( offsetof(ExecutionReportNew522, Price) == 108);
static_assert ( offsetof(ExecutionReportNew522, StopPx) == 116);
static_assert ( offsetof(ExecutionReportNew522, TransactTime) == 124);
static_assert ( offsetof(ExecutionReportNew522, SendingTimeEpoch) == 132);
static_assert ( offsetof(ExecutionReportNew522, OrderRequestID) == 140);
static_assert ( offsetof(ExecutionReportNew522, CrossID) == 148);
static_assert ( offsetof(ExecutionReportNew522, HostCrossID) == 156);
static_assert ( offsetof(ExecutionReportNew522, Location) == 164);
static_assert ( offsetof(ExecutionReportNew522, SecurityID) == 169);
static_assert ( offsetof(ExecutionReportNew522, OrderQty) == 173);
static_assert ( offsetof(ExecutionReportNew522, MinQty) == 177);
static_assert ( offsetof(ExecutionReportNew522, DisplayQty) == 181);
static_assert ( offsetof(ExecutionReportNew522, ExpireDate) == 185);
static_assert ( offsetof(ExecutionReportNew522, DelayDuration) == 187);
static_assert ( offsetof(ExecutionReportNew522, OrdType) == 189);
static_assert ( offsetof(ExecutionReportNew522, Side) == 190);
static_assert ( offsetof(ExecutionReportNew522, TimeInForce) == 191);
static_assert ( offsetof(ExecutionReportNew522, ManualOrderIndicator) == 192);
static_assert ( offsetof(ExecutionReportNew522, PossRetransFlag) == 193);
static_assert ( offsetof(ExecutionReportNew522, SplitMsg) == 194);
static_assert ( offsetof(ExecutionReportNew522, CrossType) == 195);
static_assert ( offsetof(ExecutionReportNew522, ExecInst) == 196);
static_assert ( offsetof(ExecutionReportNew522, ExecutionMode) == 197);
static_assert ( offsetof(ExecutionReportNew522, LiquidityFlag) == 198);
static_assert ( offsetof(ExecutionReportNew522, ManagedOrder) == 199);
static_assert ( offsetof(ExecutionReportNew522, ShortSaleType) == 200);
static_assert ( offsetof(ExecutionReportNew522, DelayToTime) == 201);
static_assert ( offsetof(ExecutionReportNew522, DiscretionPrice) == 209);
static_assert ( offsetof(ExecutionReportNew522, ReservationPrice) == 217);
static_assert ( offsetof(ExecutionReportNew522, PriorityIndicator) == 225);
static_assert ( offsetof(ExecutionReportReject523, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportReject523, UUID) == 4);
static_assert ( offsetof(ExecutionReportReject523, Text) == 12);
static_assert ( offsetof(ExecutionReportReject523, ExecID) == 268);
static_assert ( offsetof(ExecutionReportReject523, SenderID) == 308);
static_assert ( offsetof(ExecutionReportReject523, ClOrdID) == 328);
static_assert ( offsetof(ExecutionReportReject523, PartyDetailsListReqID) == 348);
static_assert ( offsetof(ExecutionReportReject523, OrderID) == 356);
static_assert ( offsetof(ExecutionReportReject523, Price) == 364);
static_assert ( offsetof(ExecutionReportReject523, StopPx) == 372);
static_assert ( offsetof(ExecutionReportReject523, TransactTime) == 380);
static_assert ( offsetof(ExecutionReportReject523, SendingTimeEpoch) == 388);
static_assert ( offsetof(ExecutionReportReject523, OrderRequestID) == 396);
static_assert ( offsetof(ExecutionReportReject523, CrossID) == 404);
static_assert ( offsetof(ExecutionReportReject523, HostCrossID) == 412);
static_assert ( offsetof(ExecutionReportReject523, Location) == 420);
static_assert ( offsetof(ExecutionReportReject523, SecurityID) == 425);
static_assert ( offsetof(ExecutionReportReject523, OrderQty) == 429);
static_assert ( offsetof(ExecutionReportReject523, MinQty) == 433);
static_assert ( offsetof(ExecutionReportReject523, DisplayQty) == 437);
static_assert ( offsetof(ExecutionReportReject523, OrdRejReason) == 441);
static_assert ( offsetof(ExecutionReportReject523, ExpireDate) == 443);
static_assert ( offsetof(ExecutionReportReject523, DelayDuration) == 445);
static_assert ( offsetof(ExecutionReportReject523, OrdType) == 447);
static_assert ( offsetof(ExecutionReportReject523, Side) == 448);
static_assert ( offsetof(ExecutionReportReject523, TimeInForce) == 449);
static_assert ( offsetof(ExecutionReportReject523, ManualOrderIndicator) == 450);
static_assert ( offsetof(ExecutionReportReject523, PossRetransFlag) == 451);
static_assert ( offsetof(ExecutionReportReject523, SplitMsg) == 452);
static_assert ( offsetof(ExecutionReportReject523, CrossType) == 453);
static_assert ( offsetof(ExecutionReportReject523, ExecInst) == 454);
static_assert ( offsetof(ExecutionReportReject523, ExecutionMode) == 455);
static_assert ( offsetof(ExecutionReportReject523, LiquidityFlag) == 456);
static_assert ( offsetof(ExecutionReportReject523, ManagedOrder) == 457);
static_assert ( offsetof(ExecutionReportReject523, ShortSaleType) == 458);
static_assert ( offsetof(ExecutionReportReject523, DelayToTime) == 459);
static_assert ( offsetof(ExecutionReportReject523, DiscretionPrice) == 467);
static_assert ( offsetof(ExecutionReportReject523, ReservationPrice) == 475);
static_assert ( offsetof(ExecutionReportElimination524, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportElimination524, UUID) == 4);
static_assert ( offsetof(ExecutionReportElimination524, ExecID) == 12);
static_assert ( offsetof(ExecutionReportElimination524, SenderID) == 52);
static_assert ( offsetof(ExecutionReportElimination524, ClOrdID) == 72);
static_assert ( offsetof(ExecutionReportElimination524, PartyDetailsListReqID) == 92);
static_assert ( offsetof(ExecutionReportElimination524, OrderID) == 100);
static_assert ( offsetof(ExecutionReportElimination524, Price) == 108);
static_assert ( offsetof(ExecutionReportElimination524, StopPx) == 116);
static_assert ( offsetof(ExecutionReportElimination524, TransactTime) == 124);
static_assert ( offsetof(ExecutionReportElimination524, SendingTimeEpoch) == 132);
static_assert ( offsetof(ExecutionReportElimination524, OrderRequestID) == 140);
static_assert ( offsetof(ExecutionReportElimination524, CrossID) == 148);
static_assert ( offsetof(ExecutionReportElimination524, HostCrossID) == 156);
static_assert ( offsetof(ExecutionReportElimination524, Location) == 164);
static_assert ( offsetof(ExecutionReportElimination524, SecurityID) == 169);
static_assert ( offsetof(ExecutionReportElimination524, CumQty) == 173);
static_assert ( offsetof(ExecutionReportElimination524, OrderQty) == 177);
static_assert ( offsetof(ExecutionReportElimination524, MinQty) == 181);
static_assert ( offsetof(ExecutionReportElimination524, DisplayQty) == 185);
static_assert ( offsetof(ExecutionReportElimination524, ExpireDate) == 189);
static_assert ( offsetof(ExecutionReportElimination524, OrdType) == 191);
static_assert ( offsetof(ExecutionReportElimination524, Side) == 192);
static_assert ( offsetof(ExecutionReportElimination524, TimeInForce) == 193);
static_assert ( offsetof(ExecutionReportElimination524, ManualOrderIndicator) == 194);
static_assert ( offsetof(ExecutionReportElimination524, PossRetransFlag) == 195);
static_assert ( offsetof(ExecutionReportElimination524, CrossType) == 196);
static_assert ( offsetof(ExecutionReportElimination524, ExecInst) == 197);
static_assert ( offsetof(ExecutionReportElimination524, ExecutionMode) == 198);
static_assert ( offsetof(ExecutionReportElimination524, LiquidityFlag) == 199);
static_assert ( offsetof(ExecutionReportElimination524, ManagedOrder) == 200);
static_assert ( offsetof(ExecutionReportElimination524, ShortSaleType) == 201);
static_assert ( offsetof(ExecutionReportElimination524, DiscretionPrice) == 202);
static_assert ( offsetof(ExecutionReportElimination524, ReservationPrice) == 210);
static_assert ( offsetof(ExecutionReportElimination524, PriorityIndicator) == 218);
static_assert ( offsetof(ExecutionReportTradeOutright525::NoFills, FillPx) == 0);
static_assert ( offsetof(ExecutionReportTradeOutright525::NoFills, FillQty) == 8);
static_assert ( offsetof(ExecutionReportTradeOutright525::NoFills, FillExecID) == 12);
static_assert ( offsetof(ExecutionReportTradeOutright525::NoFills, FillYieldType) == 14);
static_assert ( offsetof(ExecutionReportTradeOutright525::NoOrderEvents, OrderEventPx) == 0);
static_assert ( offsetof(ExecutionReportTradeOutright525::NoOrderEvents, OrderEventText) == 8);
static_assert ( offsetof(ExecutionReportTradeOutright525::NoOrderEvents, OrderEventExecID) == 13);
static_assert ( offsetof(ExecutionReportTradeOutright525::NoOrderEvents, OrderEventQty) == 17);
static_assert ( offsetof(ExecutionReportTradeOutright525::NoOrderEvents, OrderEventType) == 21);
static_assert ( offsetof(ExecutionReportTradeOutright525::NoOrderEvents, OrderEventReason) == 22);
static_assert ( offsetof(ExecutionReportTradeOutright525::NoOrderEvents, ContraGrossTradeAmt) == 23);
static_assert ( offsetof(ExecutionReportTradeOutright525::NoOrderEvents, ContraCalculatedCcyLastQty) == 32);
static_assert ( offsetof(ExecutionReportTradeOutright525, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportTradeOutright525, UUID) == 4);
static_assert ( offsetof(ExecutionReportTradeOutright525, ExecID) == 12);
static_assert ( offsetof(ExecutionReportTradeOutright525, SenderID) == 52);
static_assert ( offsetof(ExecutionReportTradeOutright525, ClOrdID) == 72);
static_assert ( offsetof(ExecutionReportTradeOutright525, PartyDetailsListReqID) == 92);
static_assert ( offsetof(ExecutionReportTradeOutright525, LastPx) == 100);
static_assert ( offsetof(ExecutionReportTradeOutright525, OrderID) == 108);
static_assert ( offsetof(ExecutionReportTradeOutright525, Price) == 116);
static_assert ( offsetof(ExecutionReportTradeOutright525, StopPx) == 124);
static_assert ( offsetof(ExecutionReportTradeOutright525, TransactTime) == 132);
static_assert ( offsetof(ExecutionReportTradeOutright525, SendingTimeEpoch) == 140);
static_assert ( offsetof(ExecutionReportTradeOutright525, OrderRequestID) == 148);
static_assert ( offsetof(ExecutionReportTradeOutright525, SecExecID) == 156);
static_assert ( offsetof(ExecutionReportTradeOutright525, CrossID) == 164);
static_assert ( offsetof(ExecutionReportTradeOutright525, HostCrossID) == 172);
static_assert ( offsetof(ExecutionReportTradeOutright525, Location) == 180);
static_assert ( offsetof(ExecutionReportTradeOutright525, SecurityID) == 185);
static_assert ( offsetof(ExecutionReportTradeOutright525, OrderQty) == 189);
static_assert ( offsetof(ExecutionReportTradeOutright525, LastQty) == 193);
static_assert ( offsetof(ExecutionReportTradeOutright525, CumQty) == 197);
static_assert ( offsetof(ExecutionReportTradeOutright525, MDTradeEntryID) == 201);
static_assert ( offsetof(ExecutionReportTradeOutright525, SideTradeID) == 205);
static_assert ( offsetof(ExecutionReportTradeOutright525, TradeLinkID) == 209);
static_assert ( offsetof(ExecutionReportTradeOutright525, LeavesQty) == 213);
static_assert ( offsetof(ExecutionReportTradeOutright525, TradeDate) == 217);
static_assert ( offsetof(ExecutionReportTradeOutright525, ExpireDate) == 219);
static_assert ( offsetof(ExecutionReportTradeOutright525, OrdStatus) == 221);
static_assert ( offsetof(ExecutionReportTradeOutright525, OrdType) == 222);
static_assert ( offsetof(ExecutionReportTradeOutright525, Side) == 223);
static_assert ( offsetof(ExecutionReportTradeOutright525, TimeInForce) == 224);
static_assert ( offsetof(ExecutionReportTradeOutright525, ManualOrderIndicator) == 225);
static_assert ( offsetof(ExecutionReportTradeOutright525, PossRetransFlag) == 226);
static_assert ( offsetof(ExecutionReportTradeOutright525, AggressorIndicator) == 227);
static_assert ( offsetof(ExecutionReportTradeOutright525, CrossType) == 228);
static_assert ( offsetof(ExecutionReportTradeOutright525, ExecInst) == 229);
static_assert ( offsetof(ExecutionReportTradeOutright525, ExecutionMode) == 230);
static_assert ( offsetof(ExecutionReportTradeOutright525, LiquidityFlag) == 231);
static_assert ( offsetof(ExecutionReportTradeOutright525, ManagedOrder) == 232);
static_assert ( offsetof(ExecutionReportTradeOutright525, ShortSaleType) == 233);
static_assert ( offsetof(ExecutionReportTradeOutright525, Ownership) == 234);
static_assert ( offsetof(ExecutionReportTradeOutright525, DiscretionPrice) == 235);
static_assert ( offsetof(ExecutionReportTradeOutright525, TrdType) == 243);
static_assert ( offsetof(ExecutionReportTradeOutright525, ExecRestatementReason) == 245);
static_assert ( offsetof(ExecutionReportTradeOutright525, SettlDate) == 246);
static_assert ( offsetof(ExecutionReportTradeOutright525, MaturityDate) == 248);
static_assert ( offsetof(ExecutionReportTradeOutright525, CalculatedCcyLastQty) == 250);
static_assert ( offsetof(ExecutionReportTradeOutright525, GrossTradeAmt) == 259);
static_assert ( offsetof(ExecutionReportTradeOutright525, BenchmarkPrice) == 268);
static_assert ( offsetof(ExecutionReportTradeOutright525, ReservationPrice) == 276);
static_assert ( offsetof(ExecutionReportTradeOutright525, PriorityIndicator) == 284);
static_assert ( offsetof(ExecutionReportTradeOutright525, DisplayLimitPrice) == 285);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoFills, FillPx) == 0);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoFills, FillQty) == 8);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoFills, FillExecID) == 12);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoFills, FillYieldType) == 14);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoLegs, LegExecID) == 0);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoLegs, LegLastPx) == 8);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoLegs, LegSecurityID) == 16);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoLegs, LegTradeID) == 20);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoLegs, LegLastQty) == 24);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoLegs, LegSide) == 28);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoOrderEvents, OrderEventPx) == 0);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoOrderEvents, OrderEventText) == 8);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoOrderEvents, OrderEventExecID) == 13);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoOrderEvents, OrderEventQty) == 17);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoOrderEvents, OrderEventType) == 21);
static_assert ( offsetof(ExecutionReportTradeSpread526::NoOrderEvents, OrderEventReason) == 22);
static_assert ( offsetof(ExecutionReportTradeSpread526, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportTradeSpread526, UUID) == 4);
static_assert ( offsetof(ExecutionReportTradeSpread526, ExecID) == 12);
static_assert ( offsetof(ExecutionReportTradeSpread526, SenderID) == 52);
static_assert ( offsetof(ExecutionReportTradeSpread526, ClOrdID) == 72);
static_assert ( offsetof(ExecutionReportTradeSpread526, PartyDetailsListReqID) == 92);
static_assert ( offsetof(ExecutionReportTradeSpread526, LastPx) == 100);
static_assert ( offsetof(ExecutionReportTradeSpread526, OrderID) == 108);
static_assert ( offsetof(ExecutionReportTradeSpread526, Price) == 116);
static_assert ( offsetof(ExecutionReportTradeSpread526, StopPx) == 124);
static_assert ( offsetof(ExecutionReportTradeSpread526, TransactTime) == 132);
static_assert ( offsetof(ExecutionReportTradeSpread526, SendingTimeEpoch) == 140);
static_assert ( offsetof(ExecutionReportTradeSpread526, OrderRequestID) == 148);
static_assert ( offsetof(ExecutionReportTradeSpread526, SecExecID) == 156);
static_assert ( offsetof(ExecutionReportTradeSpread526, CrossID) == 164);
static_assert ( offsetof(ExecutionReportTradeSpread526, HostCrossID) == 172);
static_assert ( offsetof(ExecutionReportTradeSpread526, Location) == 180);
static_assert ( offsetof(ExecutionReportTradeSpread526, SecurityID) == 185);
static_assert ( offsetof(ExecutionReportTradeSpread526, OrderQty) == 189);
static_assert ( offsetof(ExecutionReportTradeSpread526, LastQty) == 193);
static_assert ( offsetof(ExecutionReportTradeSpread526, CumQty) == 197);
static_assert ( offsetof(ExecutionReportTradeSpread526, MDTradeEntryID) == 201);
static_assert ( offsetof(ExecutionReportTradeSpread526, SideTradeID) == 205);
static_assert ( offsetof(ExecutionReportTradeSpread526, LeavesQty) == 209);
static_assert ( offsetof(ExecutionReportTradeSpread526, TradeDate) == 213);
static_assert ( offsetof(ExecutionReportTradeSpread526, ExpireDate) == 215);
static_assert ( offsetof(ExecutionReportTradeSpread526, OrdStatus) == 217);
static_assert ( offsetof(ExecutionReportTradeSpread526, OrdType) == 218);
static_assert ( offsetof(ExecutionReportTradeSpread526, Side) == 219);
static_assert ( offsetof(ExecutionReportTradeSpread526, TimeInForce) == 220);
static_assert ( offsetof(ExecutionReportTradeSpread526, ManualOrderIndicator) == 221);
static_assert ( offsetof(ExecutionReportTradeSpread526, PossRetransFlag) == 222);
static_assert ( offsetof(ExecutionReportTradeSpread526, AggressorIndicator) == 223);
static_assert ( offsetof(ExecutionReportTradeSpread526, CrossType) == 224);
static_assert ( offsetof(ExecutionReportTradeSpread526, TotalNumSecurities) == 225);
static_assert ( offsetof(ExecutionReportTradeSpread526, ExecInst) == 226);
static_assert ( offsetof(ExecutionReportTradeSpread526, ExecutionMode) == 227);
static_assert ( offsetof(ExecutionReportTradeSpread526, LiquidityFlag) == 228);
static_assert ( offsetof(ExecutionReportTradeSpread526, ShortSaleType) == 229);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527::NoFills, FillPx) == 0);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527::NoFills, FillQty) == 8);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527::NoFills, FillExecID) == 12);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527::NoFills, FillYieldType) == 14);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527::NoOrderEvents, OrderEventPx) == 0);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527::NoOrderEvents, OrderEventText) == 8);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527::NoOrderEvents, OrderEventExecID) == 13);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527::NoOrderEvents, OrderEventQty) == 17);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527::NoOrderEvents, OrderEventType) == 21);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527::NoOrderEvents, OrderEventReason) == 22);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, UUID) == 4);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, ExecID) == 12);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, SenderID) == 52);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, ClOrdID) == 72);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, Volatility) == 92);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, PartyDetailsListReqID) == 101);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, LastPx) == 109);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, OrderID) == 117);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, UnderlyingPx) == 125);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, TransactTime) == 133);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, SendingTimeEpoch) == 141);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, SecExecID) == 149);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, Location) == 157);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, OptionDelta) == 162);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, TimeToExpiration) == 167);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, RiskFreeRate) == 172);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, SecurityID) == 177);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, LastQty) == 181);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, CumQty) == 185);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, SideTradeID) == 189);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, TradeDate) == 193);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, OrdStatus) == 195);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, OrdType) == 196);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, Side) == 197);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, PossRetransFlag) == 198);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, SettlDate) == 199);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, CalculatedCcyLastQty) == 201);
static_assert ( offsetof(ExecutionReportTradeSpreadLeg527, GrossTradeAmt) == 210);
static_assert ( offsetof(QuoteCancel528::NoQuoteEntries, SecurityGroup) == 0);
static_assert ( offsetof(QuoteCancel528::NoQuoteEntries, SecurityID) == 6);
static_assert ( offsetof(QuoteCancel528::NoQuoteSets, BidSize) == 0);
static_assert ( offsetof(QuoteCancel528::NoQuoteSets, OfferSize) == 4);
static_assert ( offsetof(QuoteCancel528::NoQuoteSets, QuoteSetID) == 8);
static_assert ( offsetof(QuoteCancel528, PartyDetailsListReqID) == 0);
static_assert ( offsetof(QuoteCancel528, SendingTimeEpoch) == 8);
static_assert ( offsetof(QuoteCancel528, ManualOrderIndicator) == 16);
static_assert ( offsetof(QuoteCancel528, SeqNum) == 17);
static_assert ( offsetof(QuoteCancel528, SenderID) == 21);
static_assert ( offsetof(QuoteCancel528, Location) == 41);
static_assert ( offsetof(QuoteCancel528, QuoteID) == 46);
static_assert ( offsetof(QuoteCancel528, QuoteCancelType) == 50);
static_assert ( offsetof(QuoteCancel528, LiquidityFlag) == 51);
static_assert ( offsetof(QuoteCancel528, OrigOrderUser) == 52);
static_assert ( offsetof(QuoteCancel528, QuoteEntryOpen) == 60);
static_assert ( offsetof(OrderMassActionRequest529, PartyDetailsListReqID) == 0);
static_assert ( offsetof(OrderMassActionRequest529, OrderRequestID) == 8);
static_assert ( offsetof(OrderMassActionRequest529, ManualOrderIndicator) == 16);
static_assert ( offsetof(OrderMassActionRequest529, SeqNum) == 17);
static_assert ( offsetof(OrderMassActionRequest529, SenderID) == 21);
static_assert ( offsetof(OrderMassActionRequest529, SendingTimeEpoch) == 41);
static_assert ( offsetof(OrderMassActionRequest529, SecurityGroup) == 49);
static_assert ( offsetof(OrderMassActionRequest529, Location) == 55);
static_assert ( offsetof(OrderMassActionRequest529, SecurityID) == 60);
static_assert ( offsetof(OrderMassActionRequest529, MassActionScope) == 64);
static_assert ( offsetof(OrderMassActionRequest529, MarketSegmentID) == 65);
static_assert ( offsetof(OrderMassActionRequest529, MassCancelRequestType) == 66);
static_assert ( offsetof(OrderMassActionRequest529, Side) == 67);
static_assert ( offsetof(OrderMassActionRequest529, OrdType) == 68);
static_assert ( offsetof(OrderMassActionRequest529, TimeInForce) == 69);
static_assert ( offsetof(OrderMassActionRequest529, LiquidityFlag) == 70);
static_assert ( offsetof(OrderMassActionRequest529, OrigOrderUser) == 71);
static_assert ( offsetof(OrderMassStatusRequest530, PartyDetailsListReqID) == 0);
static_assert ( offsetof(OrderMassStatusRequest530, MassStatusReqID) == 8);
static_assert ( offsetof(OrderMassStatusRequest530, ManualOrderIndicator) == 16);
static_assert ( offsetof(OrderMassStatusRequest530, SeqNum) == 17);
static_assert ( offsetof(OrderMassStatusRequest530, SenderID) == 21);
static_assert ( offsetof(OrderMassStatusRequest530, SendingTimeEpoch) == 41);
static_assert ( offsetof(OrderMassStatusRequest530, SecurityGroup) == 49);
static_assert ( offsetof(OrderMassStatusRequest530, Location) == 55);
static_assert ( offsetof(OrderMassStatusRequest530, SecurityID) == 60);
static_assert ( offsetof(OrderMassStatusRequest530, MassStatusReqType) == 64);
static_assert ( offsetof(OrderMassStatusRequest530, OrdStatusReqType) == 65);
static_assert ( offsetof(OrderMassStatusRequest530, TimeInForce) == 66);
static_assert ( offsetof(OrderMassStatusRequest530, MarketSegmentID) == 67);
static_assert ( offsetof(ExecutionReportModify531, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportModify531, UUID) == 4);
static_assert ( offsetof(ExecutionReportModify531, ExecID) == 12);
static_assert ( offsetof(ExecutionReportModify531, SenderID) == 52);
static_assert ( offsetof(ExecutionReportModify531, ClOrdID) == 72);
static_assert ( offsetof(ExecutionReportModify531, PartyDetailsListReqID) == 92);
static_assert ( offsetof(ExecutionReportModify531, OrderID) == 100);
static_assert ( offsetof(ExecutionReportModify531, Price) == 108);
static_assert ( offsetof(ExecutionReportModify531, StopPx) == 116);
static_assert ( offsetof(ExecutionReportModify531, TransactTime) == 124);
static_assert ( offsetof(ExecutionReportModify531, SendingTimeEpoch) == 132);
static_assert ( offsetof(ExecutionReportModify531, OrderRequestID) == 140);
static_assert ( offsetof(ExecutionReportModify531, CrossID) == 148);
static_assert ( offsetof(ExecutionReportModify531, HostCrossID) == 156);
static_assert ( offsetof(ExecutionReportModify531, Location) == 164);
static_assert ( offsetof(ExecutionReportModify531, SecurityID) == 169);
static_assert ( offsetof(ExecutionReportModify531, OrderQty) == 173);
static_assert ( offsetof(ExecutionReportModify531, CumQty) == 177);
static_assert ( offsetof(ExecutionReportModify531, LeavesQty) == 181);
static_assert ( offsetof(ExecutionReportModify531, MinQty) == 185);
static_assert ( offsetof(ExecutionReportModify531, DisplayQty) == 189);
static_assert ( offsetof(ExecutionReportModify531, ExpireDate) == 193);
static_assert ( offsetof(ExecutionReportModify531, DelayDuration) == 195);
static_assert ( offsetof(ExecutionReportModify531, OrdType) == 197);
static_assert ( offsetof(ExecutionReportModify531, Side) == 198);
static_assert ( offsetof(ExecutionReportModify531, TimeInForce) == 199);
static_assert ( offsetof(ExecutionReportModify531, ManualOrderIndicator) == 200);
static_assert ( offsetof(ExecutionReportModify531, PossRetransFlag) == 201);
static_assert ( offsetof(ExecutionReportModify531, SplitMsg) == 202);
static_assert ( offsetof(ExecutionReportModify531, CrossType) == 203);
static_assert ( offsetof(ExecutionReportModify531, ExecInst) == 204);
static_assert ( offsetof(ExecutionReportModify531, ExecutionMode) == 205);
static_assert ( offsetof(ExecutionReportModify531, LiquidityFlag) == 206);
static_assert ( offsetof(ExecutionReportModify531, ManagedOrder) == 207);
static_assert ( offsetof(ExecutionReportModify531, ShortSaleType) == 208);
static_assert ( offsetof(ExecutionReportModify531, DelayToTime) == 209);
static_assert ( offsetof(ExecutionReportModify531, DiscretionPrice) == 217);
static_assert ( offsetof(ExecutionReportModify531, PriorityIndicator) == 225);
static_assert ( offsetof(ExecutionReportStatus532, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportStatus532, UUID) == 4);
static_assert ( offsetof(ExecutionReportStatus532, Text) == 12);
static_assert ( offsetof(ExecutionReportStatus532, ExecID) == 268);
static_assert ( offsetof(ExecutionReportStatus532, SenderID) == 308);
static_assert ( offsetof(ExecutionReportStatus532, ClOrdID) == 328);
static_assert ( offsetof(ExecutionReportStatus532, PartyDetailsListReqID) == 348);
static_assert ( offsetof(ExecutionReportStatus532, OrderID) == 356);
static_assert ( offsetof(ExecutionReportStatus532, Price) == 364);
static_assert ( offsetof(ExecutionReportStatus532, StopPx) == 372);
static_assert ( offsetof(ExecutionReportStatus532, TransactTime) == 380);
static_assert ( offsetof(ExecutionReportStatus532, SendingTimeEpoch) == 388);
static_assert ( offsetof(ExecutionReportStatus532, OrderRequestID) == 396);
static_assert ( offsetof(ExecutionReportStatus532, OrdStatusReqID) == 404);
static_assert ( offsetof(ExecutionReportStatus532, MassStatusReqID) == 412);
static_assert ( offsetof(ExecutionReportStatus532, CrossID) == 420);
static_assert ( offsetof(ExecutionReportStatus532, HostCrossID) == 428);
static_assert ( offsetof(ExecutionReportStatus532, Location) == 436);
static_assert ( offsetof(ExecutionReportStatus532, SecurityID) == 441);
static_assert ( offsetof(ExecutionReportStatus532, OrderQty) == 445);
static_assert ( offsetof(ExecutionReportStatus532, CumQty) == 449);
static_assert ( offsetof(ExecutionReportStatus532, LeavesQty) == 453);
static_assert ( offsetof(ExecutionReportStatus532, MinQty) == 457);
static_assert ( offsetof(ExecutionReportStatus532, DisplayQty) == 461);
static_assert ( offsetof(ExecutionReportStatus532, ExpireDate) == 465);
static_assert ( offsetof(ExecutionReportStatus532, OrdStatus) == 467);
static_assert ( offsetof(ExecutionReportStatus532, OrdType) == 468);
static_assert ( offsetof(ExecutionReportStatus532, Side) == 469);
static_assert ( offsetof(ExecutionReportStatus532, TimeInForce) == 470);
static_assert ( offsetof(ExecutionReportStatus532, ManualOrderIndicator) == 471);
static_assert ( offsetof(ExecutionReportStatus532, PossRetransFlag) == 472);
static_assert ( offsetof(ExecutionReportStatus532, LastRptRequested) == 473);
static_assert ( offsetof(ExecutionReportStatus532, CrossType) == 474);
static_assert ( offsetof(ExecutionReportStatus532, ExecInst) == 475);
static_assert ( offsetof(ExecutionReportStatus532, ExecutionMode) == 476);
static_assert ( offsetof(ExecutionReportStatus532, LiquidityFlag) == 477);
static_assert ( offsetof(ExecutionReportStatus532, ManagedOrder) == 478);
static_assert ( offsetof(ExecutionReportStatus532, ShortSaleType) == 479);
static_assert ( offsetof(ExecutionReportStatus532, DiscretionPrice) == 480);
static_assert ( offsetof(ExecutionReportStatus532, ReservationPrice) == 488);
static_assert ( offsetof(ExecutionReportStatus532, PriorityIndicator) == 496);
static_assert ( offsetof(ExecutionReportStatus532, OrigOrderUser) == 497);
static_assert ( offsetof(ExecutionReportStatus532, CancelText) == 505);
static_assert ( offsetof(OrderStatusRequest533, PartyDetailsListReqID) == 0);
static_assert ( offsetof(OrderStatusRequest533, OrdStatusReqID) == 8);
static_assert ( offsetof(OrderStatusRequest533, ManualOrderIndicator) == 16);
static_assert ( offsetof(OrderStatusRequest533, SeqNum) == 17);
static_assert ( offsetof(OrderStatusRequest533, SenderID) == 21);
static_assert ( offsetof(OrderStatusRequest533, OrderID) == 41);
static_assert ( offsetof(OrderStatusRequest533, SendingTimeEpoch) == 49);
static_assert ( offsetof(OrderStatusRequest533, Location) == 57);
static_assert ( offsetof(ExecutionReportCancel534, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportCancel534, UUID) == 4);
static_assert ( offsetof(ExecutionReportCancel534, ExecID) == 12);
static_assert ( offsetof(ExecutionReportCancel534, SenderID) == 52);
static_assert ( offsetof(ExecutionReportCancel534, ClOrdID) == 72);
static_assert ( offsetof(ExecutionReportCancel534, PartyDetailsListReqID) == 92);
static_assert ( offsetof(ExecutionReportCancel534, OrderID) == 100);
static_assert ( offsetof(ExecutionReportCancel534, Price) == 108);
static_assert ( offsetof(ExecutionReportCancel534, StopPx) == 116);
static_assert ( offsetof(ExecutionReportCancel534, TransactTime) == 124);
static_assert ( offsetof(ExecutionReportCancel534, SendingTimeEpoch) == 132);
static_assert ( offsetof(ExecutionReportCancel534, OrderRequestID) == 140);
static_assert ( offsetof(ExecutionReportCancel534, CrossID) == 148);
static_assert ( offsetof(ExecutionReportCancel534, HostCrossID) == 156);
static_assert ( offsetof(ExecutionReportCancel534, Location) == 164);
static_assert ( offsetof(ExecutionReportCancel534, SecurityID) == 169);
static_assert ( offsetof(ExecutionReportCancel534, OrderQty) == 173);
static_assert ( offsetof(ExecutionReportCancel534, CumQty) == 177);
static_assert ( offsetof(ExecutionReportCancel534, MinQty) == 181);
static_assert ( offsetof(ExecutionReportCancel534, DisplayQty) == 185);
static_assert ( offsetof(ExecutionReportCancel534, ExpireDate) == 189);
static_assert ( offsetof(ExecutionReportCancel534, DelayDuration) == 191);
static_assert ( offsetof(ExecutionReportCancel534, OrdType) == 193);
static_assert ( offsetof(ExecutionReportCancel534, Side) == 194);
static_assert ( offsetof(ExecutionReportCancel534, TimeInForce) == 195);
static_assert ( offsetof(ExecutionReportCancel534, ManualOrderIndicator) == 196);
static_assert ( offsetof(ExecutionReportCancel534, PossRetransFlag) == 197);
static_assert ( offsetof(ExecutionReportCancel534, SplitMsg) == 198);
static_assert ( offsetof(ExecutionReportCancel534, ExecRestatementReason) == 199);
static_assert ( offsetof(ExecutionReportCancel534, CrossType) == 200);
static_assert ( offsetof(ExecutionReportCancel534, ExecInst) == 201);
static_assert ( offsetof(ExecutionReportCancel534, ExecutionMode) == 202);
static_assert ( offsetof(ExecutionReportCancel534, LiquidityFlag) == 203);
static_assert ( offsetof(ExecutionReportCancel534, ManagedOrder) == 204);
static_assert ( offsetof(ExecutionReportCancel534, ShortSaleType) == 205);
static_assert ( offsetof(ExecutionReportCancel534, DelayToTime) == 206);
static_assert ( offsetof(ExecutionReportCancel534, DiscretionPrice) == 214);
static_assert ( offsetof(ExecutionReportCancel534, ReservationPrice) == 222);
static_assert ( offsetof(ExecutionReportCancel534, PriorityIndicator) == 230);
static_assert ( offsetof(ExecutionReportCancel534, OrigOrderUser) == 231);
static_assert ( offsetof(ExecutionReportCancel534, CancelText) == 239);
static_assert ( offsetof(OrderCancelReject535, SeqNum) == 0);
static_assert ( offsetof(OrderCancelReject535, UUID) == 4);
static_assert ( offsetof(OrderCancelReject535, Text) == 12);
static_assert ( offsetof(OrderCancelReject535, ExecID) == 268);
static_assert ( offsetof(OrderCancelReject535, SenderID) == 308);
static_assert ( offsetof(OrderCancelReject535, ClOrdID) == 328);
static_assert ( offsetof(OrderCancelReject535, PartyDetailsListReqID) == 348);
static_assert ( offsetof(OrderCancelReject535, OrderID) == 356);
static_assert ( offsetof(OrderCancelReject535, TransactTime) == 364);
static_assert ( offsetof(OrderCancelReject535, SendingTimeEpoch) == 372);
static_assert ( offsetof(OrderCancelReject535, OrderRequestID) == 380);
static_assert ( offsetof(OrderCancelReject535, Location) == 388);
static_assert ( offsetof(OrderCancelReject535, CxlRejReason) == 393);
static_assert ( offsetof(OrderCancelReject535, DelayDuration) == 395);
static_assert ( offsetof(OrderCancelReject535, ManualOrderIndicator) == 397);
static_assert ( offsetof(OrderCancelReject535, PossRetransFlag) == 398);
static_assert ( offsetof(OrderCancelReject535, SplitMsg) == 399);
static_assert ( offsetof(OrderCancelReject535, LiquidityFlag) == 400);
static_assert ( offsetof(OrderCancelReject535, DelayToTime) == 401);
static_assert ( offsetof(OrderCancelReplaceReject536, SeqNum) == 0);
static_assert ( offsetof(OrderCancelReplaceReject536, UUID) == 4);
static_assert ( offsetof(OrderCancelReplaceReject536, Text) == 12);
static_assert ( offsetof(OrderCancelReplaceReject536, ExecID) == 268);
static_assert ( offsetof(OrderCancelReplaceReject536, SenderID) == 308);
static_assert ( offsetof(OrderCancelReplaceReject536, ClOrdID) == 328);
static_assert ( offsetof(OrderCancelReplaceReject536, PartyDetailsListReqID) == 348);
static_assert ( offsetof(OrderCancelReplaceReject536, OrderID) == 356);
static_assert ( offsetof(OrderCancelReplaceReject536, TransactTime) == 364);
static_assert ( offsetof(OrderCancelReplaceReject536, SendingTimeEpoch) == 372);
static_assert ( offsetof(OrderCancelReplaceReject536, OrderRequestID) == 380);
static_assert ( offsetof(OrderCancelReplaceReject536, Location) == 388);
static_assert ( offsetof(OrderCancelReplaceReject536, CxlRejReason) == 393);
static_assert ( offsetof(OrderCancelReplaceReject536, DelayDuration) == 395);
static_assert ( offsetof(OrderCancelReplaceReject536, ManualOrderIndicator) == 397);
static_assert ( offsetof(OrderCancelReplaceReject536, PossRetransFlag) == 398);
static_assert ( offsetof(OrderCancelReplaceReject536, SplitMsg) == 399);
static_assert ( offsetof(OrderCancelReplaceReject536, LiquidityFlag) == 400);
static_assert ( offsetof(OrderCancelReplaceReject536, DelayToTime) == 401);
static_assert ( offsetof(PartyDetailsListRequest537::NoRequestingPartyIDs, RequestingPartyID) == 0);
static_assert ( offsetof(PartyDetailsListRequest537::NoRequestingPartyIDs, RequestingPartyIDSource) == 5);
static_assert ( offsetof(PartyDetailsListRequest537::NoRequestingPartyIDs, RequestingPartyRole) == 6);
static_assert ( offsetof(PartyDetailsListRequest537::NoPartyIDs, PartyID) == 0);
static_assert ( offsetof(PartyDetailsListRequest537::NoPartyIDs, PartyIDSource) == 8);
static_assert ( offsetof(PartyDetailsListRequest537::NoPartyIDs, PartyRole) == 9);
static_assert ( offsetof(PartyDetailsListRequest537, PartyDetailsListReqID) == 0);
static_assert ( offsetof(PartyDetailsListRequest537, SendingTimeEpoch) == 8);
static_assert ( offsetof(PartyDetailsListRequest537, SeqNum) == 16);
static_assert ( offsetof(PartyDetailsListReport538::NoPartyDetails, PartyDetailID) == 0);
static_assert ( offsetof(PartyDetailsListReport538::NoPartyDetails, PartyDetailRole) == 20);
static_assert ( offsetof(PartyDetailsListReport538::NoTrdRegPublications, TrdRegPublicationType) == 0);
static_assert ( offsetof(PartyDetailsListReport538::NoTrdRegPublications, TrdRegPublicationReason) == 1);
static_assert ( offsetof(PartyDetailsListReport538, SeqNum) == 0);
static_assert ( offsetof(PartyDetailsListReport538, UUID) == 4);
static_assert ( offsetof(PartyDetailsListReport538, AvgPxGroupID) == 12);
static_assert ( offsetof(PartyDetailsListReport538, PartyDetailsListReqID) == 32);
static_assert ( offsetof(PartyDetailsListReport538, PartyDetailsListReportID) == 40);
static_assert ( offsetof(PartyDetailsListReport538, SendingTimeEpoch) == 48);
static_assert ( offsetof(PartyDetailsListReport538, SelfMatchPreventionID) == 56);
static_assert ( offsetof(PartyDetailsListReport538, TotNumParties) == 64);
static_assert ( offsetof(PartyDetailsListReport538, RequestResult) == 66);
static_assert ( offsetof(PartyDetailsListReport538, LastFragment) == 67);
static_assert ( offsetof(PartyDetailsListReport538, CustOrderCapacity) == 68);
static_assert ( offsetof(PartyDetailsListReport538, ClearingAccountType) == 69);
static_assert ( offsetof(PartyDetailsListReport538, SelfMatchPreventionInstruction) == 70);
static_assert ( offsetof(PartyDetailsListReport538, AvgPxIndicator) == 71);
static_assert ( offsetof(PartyDetailsListReport538, ClearingTradePriceType) == 72);
static_assert ( offsetof(PartyDetailsListReport538, CmtaGiveupCD) == 73);
static_assert ( offsetof(PartyDetailsListReport538, CustOrderHandlingInst) == 74);
static_assert ( offsetof(PartyDetailsListReport538, Executor) == 75);
static_assert ( offsetof(PartyDetailsListReport538, IDMShortCode) == 83);
static_assert ( offsetof(PartyDetailsListReport538, PossRetransFlag) == 91);
static_assert ( offsetof(PartyDetailsListReport538, SplitMsg) == 92);
static_assert ( offsetof(ExecutionAck539, PartyDetailsListReqID) == 0);
static_assert ( offsetof(ExecutionAck539, OrderID) == 8);
static_assert ( offsetof(ExecutionAck539, ExecAckStatus) == 16);
static_assert ( offsetof(ExecutionAck539, SeqNum) == 17);
static_assert ( offsetof(ExecutionAck539, ClOrdID) == 21);
static_assert ( offsetof(ExecutionAck539, SecExecID) == 41);
static_assert ( offsetof(ExecutionAck539, LastPx) == 49);
static_assert ( offsetof(ExecutionAck539, SecurityID) == 57);
static_assert ( offsetof(ExecutionAck539, LastQty) == 61);
static_assert ( offsetof(ExecutionAck539, DKReason) == 65);
static_assert ( offsetof(ExecutionAck539, Side) == 66);
static_assert ( offsetof(ExecutionAck539, SenderID) == 67);
static_assert ( offsetof(ExecutionAck539, SendingTimeEpoch) == 87);
static_assert ( offsetof(ExecutionAck539, Location) == 95);
static_assert ( offsetof(ExecutionAck539, ManualOrderIndicator) == 100);
static_assert ( offsetof(RequestForQuote543::NoRelatedSym, SecurityID) == 0);
static_assert ( offsetof(RequestForQuote543::NoRelatedSym, OrderQty) == 4);
static_assert ( offsetof(RequestForQuote543::NoRelatedSym, Side) == 8);
static_assert ( offsetof(RequestForQuote543, PartyDetailsListReqID) == 0);
static_assert ( offsetof(RequestForQuote543, QuoteReqID) == 8);
static_assert ( offsetof(RequestForQuote543, ManualOrderIndicator) == 16);
static_assert ( offsetof(RequestForQuote543, SeqNum) == 17);
static_assert ( offsetof(RequestForQuote543, SenderID) == 21);
static_assert ( offsetof(RequestForQuote543, SendingTimeEpoch) == 41);
static_assert ( offsetof(RequestForQuote543, Location) == 49);
static_assert ( offsetof(RequestForQuote543, QuoteType) == 54);
static_assert ( offsetof(NewOrderCross544::NoSides, ClOrdID) == 0);
static_assert ( offsetof(NewOrderCross544::NoSides, PartyDetailsListReqID) == 20);
static_assert ( offsetof(NewOrderCross544::NoSides, OrderQty) == 28);
static_assert ( offsetof(NewOrderCross544::NoSides, Side) == 32);
static_assert ( offsetof(NewOrderCross544::NoSides, SideTimeInForce) == 33);
static_assert ( offsetof(NewOrderCross544, CrossID) == 0);
static_assert ( offsetof(NewOrderCross544, OrderRequestID) == 8);
static_assert ( offsetof(NewOrderCross544, ManualOrderIndicator) == 16);
static_assert ( offsetof(NewOrderCross544, SeqNum) == 17);
static_assert ( offsetof(NewOrderCross544, SenderID) == 21);
static_assert ( offsetof(NewOrderCross544, Price) == 41);
static_assert ( offsetof(NewOrderCross544, TransBkdTime) == 49);
static_assert ( offsetof(NewOrderCross544, SendingTimeEpoch) == 57);
static_assert ( offsetof(NewOrderCross544, Location) == 65);
static_assert ( offsetof(NewOrderCross544, SecurityID) == 70);
static_assert ( offsetof(MassQuoteAck545::NoQuoteEntries, QuoteEntryID) == 0);
static_assert ( offsetof(MassQuoteAck545::NoQuoteEntries, SecurityID) == 4);
static_assert ( offsetof(MassQuoteAck545::NoQuoteEntries, QuoteSetID) == 8);
static_assert ( offsetof(MassQuoteAck545::NoQuoteEntries, QuoteEntryRejectReason) == 10);
static_assert ( offsetof(MassQuoteAck545, SeqNum) == 0);
static_assert ( offsetof(MassQuoteAck545, UUID) == 4);
static_assert ( offsetof(MassQuoteAck545, Text) == 12);
static_assert ( offsetof(MassQuoteAck545, SenderID) == 268);
static_assert ( offsetof(MassQuoteAck545, PartyDetailsListReqID) == 288);
static_assert ( offsetof(MassQuoteAck545, RequestTime) == 296);
static_assert ( offsetof(MassQuoteAck545, SendingTimeEpoch) == 304);
static_assert ( offsetof(MassQuoteAck545, QuoteReqID) == 312);
static_assert ( offsetof(MassQuoteAck545, Location) == 320);
static_assert ( offsetof(MassQuoteAck545, QuoteID) == 325);
static_assert ( offsetof(MassQuoteAck545, QuoteRejectReason) == 329);
static_assert ( offsetof(MassQuoteAck545, DelayDuration) == 331);
static_assert ( offsetof(MassQuoteAck545, QuoteStatus) == 333);
static_assert ( offsetof(MassQuoteAck545, ManualOrderIndicator) == 334);
static_assert ( offsetof(MassQuoteAck545, NoProcessedEntries) == 335);
static_assert ( offsetof(MassQuoteAck545, MMProtectionReset) == 336);
static_assert ( offsetof(MassQuoteAck545, SplitMsg) == 337);
static_assert ( offsetof(MassQuoteAck545, LiquidityFlag) == 338);
static_assert ( offsetof(MassQuoteAck545, ShortSaleType) == 339);
static_assert ( offsetof(MassQuoteAck545, TotNoQuoteEntries) == 340);
static_assert ( offsetof(MassQuoteAck545, PossRetransFlag) == 341);
static_assert ( offsetof(MassQuoteAck545, DelayToTime) == 342);
static_assert ( offsetof(MassQuoteAck545, QuoteEntryOpen) == 350);
static_assert ( offsetof(RequestForQuoteAck546, SeqNum) == 0);
static_assert ( offsetof(RequestForQuoteAck546, UUID) == 4);
static_assert ( offsetof(RequestForQuoteAck546, Text) == 12);
static_assert ( offsetof(RequestForQuoteAck546, SenderID) == 268);
static_assert ( offsetof(RequestForQuoteAck546, ExchangeQuoteReqID) == 288);
static_assert ( offsetof(RequestForQuoteAck546, PartyDetailsListReqID) == 305);
static_assert ( offsetof(RequestForQuoteAck546, RequestTime) == 313);
static_assert ( offsetof(RequestForQuoteAck546, SendingTimeEpoch) == 321);
static_assert ( offsetof(RequestForQuoteAck546, QuoteReqID) == 329);
static_assert ( offsetof(RequestForQuoteAck546, Location) == 337);
static_assert ( offsetof(RequestForQuoteAck546, QuoteRejectReason) == 342);
static_assert ( offsetof(RequestForQuoteAck546, DelayDuration) == 344);
static_assert ( offsetof(RequestForQuoteAck546, QuoteStatus) == 346);
static_assert ( offsetof(RequestForQuoteAck546, ManualOrderIndicator) == 347);
static_assert ( offsetof(RequestForQuoteAck546, SplitMsg) == 348);
static_assert ( offsetof(RequestForQuoteAck546, PossRetransFlag) == 349);
static_assert ( offsetof(RequestForQuoteAck546, DelayToTime) == 350);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548::NoFills, FillPx) == 0);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548::NoFills, FillQty) == 8);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548::NoFills, FillExecID) == 12);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548::NoFills, FillYieldType) == 14);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548::NoOrderEvents, OrderEventPx) == 0);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548::NoOrderEvents, OrderEventText) == 8);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548::NoOrderEvents, OrderEventExecID) == 13);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548::NoOrderEvents, OrderEventQty) == 17);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548::NoOrderEvents, OrderEventType) == 21);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548::NoOrderEvents, OrderEventReason) == 22);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548::NoOrderEvents, OriginalOrderEventExecID) == 23);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548::NoOrderEvents, ContraGrossTradeAmt) == 27);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548::NoOrderEvents, ContraCalculatedCcyLastQty) == 36);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, UUID) == 4);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, ExecID) == 12);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, SenderID) == 52);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, ClOrdID) == 72);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, PartyDetailsListReqID) == 92);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, LastPx) == 100);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, OrderID) == 108);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, TransactTime) == 116);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, SendingTimeEpoch) == 124);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, SecExecID) == 132);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, OrigSecondaryExecutionID) == 140);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, Location) == 148);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, SecurityID) == 153);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, LastQty) == 157);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, SideTradeID) == 161);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, OrigSideTradeID) == 165);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, TradeDate) == 169);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, OrdStatus) == 171);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, ExecType) == 172);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, Side) == 173);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, ManualOrderIndicator) == 174);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, PossRetransFlag) == 175);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, ExecInst) == 176);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, ExecutionMode) == 177);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, LiquidityFlag) == 178);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, ManagedOrder) == 179);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, ShortSaleType) == 180);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, DiscretionPrice) == 181);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, TrdType) == 189);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, ExecRestatementReason) == 191);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, SettlDate) == 192);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, MaturityDate) == 194);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, CalculatedCcyLastQty) == 196);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, GrossTradeAmt) == 205);
static_assert ( offsetof(ExecutionReportTradeAddendumOutright548, BenchmarkPrice) == 214);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoFills, FillPx) == 0);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoFills, FillQty) == 8);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoFills, FillExecID) == 12);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoFills, FillYieldType) == 14);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoLegs, LegExecID) == 0);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoLegs, LegLastPx) == 8);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoLegs, LegExecRefID) == 16);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoLegs, LegTradeID) == 24);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoLegs, LegTradeRefID) == 28);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoLegs, LegSecurityID) == 32);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoLegs, LegLastQty) == 36);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoLegs, LegSide) == 40);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoOrderEvents, OrderEventPx) == 0);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoOrderEvents, OrderEventText) == 8);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoOrderEvents, OrderEventExecID) == 13);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoOrderEvents, OrderEventQty) == 17);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoOrderEvents, OrderEventType) == 21);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoOrderEvents, OrderEventReason) == 22);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549::NoOrderEvents, OriginalOrderEventExecID) == 23);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, UUID) == 4);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, ExecID) == 12);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, SenderID) == 52);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, ClOrdID) == 72);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, PartyDetailsListReqID) == 92);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, LastPx) == 100);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, OrderID) == 108);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, TransactTime) == 116);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, SendingTimeEpoch) == 124);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, SecExecID) == 132);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, OrigSecondaryExecutionID) == 140);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, Location) == 148);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, SecurityID) == 153);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, MDTradeEntryID) == 157);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, LastQty) == 161);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, SideTradeID) == 165);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, OrigSideTradeID) == 169);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, TradeDate) == 173);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, OrdStatus) == 175);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, ExecType) == 176);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, OrdType) == 177);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, Side) == 178);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, ManualOrderIndicator) == 179);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, PossRetransFlag) == 180);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, TotalNumSecurities) == 181);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, ExecInst) == 182);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, ExecutionMode) == 183);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, LiquidityFlag) == 184);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, ManagedOrder) == 185);
static_assert ( offsetof(ExecutionReportTradeAddendumSpread549, ShortSaleType) == 186);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550::NoFills, FillPx) == 0);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550::NoFills, FillQty) == 8);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550::NoFills, FillExecID) == 12);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550::NoFills, FillYieldType) == 14);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550::NoOrderEvents, OrderEventPx) == 0);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550::NoOrderEvents, OrderEventText) == 8);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550::NoOrderEvents, OrderEventExecID) == 13);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550::NoOrderEvents, OrderEventQty) == 17);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550::NoOrderEvents, OrderEventType) == 21);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550::NoOrderEvents, OrderEventReason) == 22);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550::NoOrderEvents, OriginalOrderEventExecID) == 23);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, UUID) == 4);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, ExecID) == 12);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, SenderID) == 52);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, ClOrdID) == 72);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, PartyDetailsListReqID) == 92);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, LastPx) == 100);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, OrderID) == 108);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, TransactTime) == 116);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, SendingTimeEpoch) == 124);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, SecExecID) == 132);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, OrigSecondaryExecutionID) == 140);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, Location) == 148);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, SecurityID) == 153);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, LastQty) == 157);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, SideTradeID) == 161);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, OrigSideTradeID) == 165);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, TradeDate) == 169);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, OrdStatus) == 171);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, ExecType) == 172);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, ManualOrderIndicator) == 173);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, PossRetransFlag) == 174);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, Side) == 175);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, SettlDate) == 176);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, CalculatedCcyLastQty) == 178);
static_assert ( offsetof(ExecutionReportTradeAddendumSpreadLeg550, GrossTradeAmt) == 187);
static_assert ( offsetof(SecurityDefinitionRequest560::NoLegs, LegPrice) == 0);
static_assert ( offsetof(SecurityDefinitionRequest560::NoLegs, LegSecurityID) == 8);
static_assert ( offsetof(SecurityDefinitionRequest560::NoLegs, LegOptionDelta) == 12);
static_assert ( offsetof(SecurityDefinitionRequest560::NoLegs, LegSide) == 17);
static_assert ( offsetof(SecurityDefinitionRequest560::NoLegs, LegRatioQty) == 18);
static_assert ( offsetof(SecurityDefinitionRequest560::NoBrokenDates, BrokenDateStart) == 0);
static_assert ( offsetof(SecurityDefinitionRequest560::NoBrokenDates, BrokenDateEnd) == 2);
static_assert ( offsetof(SecurityDefinitionRequest560, PartyDetailsListReqID) == 0);
static_assert ( offsetof(SecurityDefinitionRequest560, SecurityReqID) == 8);
static_assert ( offsetof(SecurityDefinitionRequest560, ManualOrderIndicator) == 16);
static_assert ( offsetof(SecurityDefinitionRequest560, SeqNum) == 17);
static_assert ( offsetof(SecurityDefinitionRequest560, SenderID) == 21);
static_assert ( offsetof(SecurityDefinitionRequest560, SendingTimeEpoch) == 41);
static_assert ( offsetof(SecurityDefinitionRequest560, SecuritySubType) == 49);
static_assert ( offsetof(SecurityDefinitionRequest560, Location) == 57);
static_assert ( offsetof(SecurityDefinitionRequest560, StartDate) == 62);
static_assert ( offsetof(SecurityDefinitionRequest560, EndDate) == 64);
static_assert ( offsetof(SecurityDefinitionRequest560, MaxNoOfSubstitutions) == 66);
static_assert ( offsetof(SecurityDefinitionRequest560, SourceRepoID) == 67);
static_assert ( offsetof(SecurityDefinitionRequest560, BrokenDateTermType) == 71);
static_assert ( offsetof(SecurityDefinitionResponse561::NoLegs, LegPrice) == 0);
static_assert ( offsetof(SecurityDefinitionResponse561::NoLegs, LegOptionDelta) == 8);
static_assert ( offsetof(SecurityDefinitionResponse561::NoLegs, LegSecurityID) == 13);
static_assert ( offsetof(SecurityDefinitionResponse561::NoLegs, LegSide) == 17);
static_assert ( offsetof(SecurityDefinitionResponse561::NoLegs, LegRatioQty) == 18);
static_assert ( offsetof(SecurityDefinitionResponse561::NoBrokenDates, BrokenDateGUID) == 0);
static_assert ( offsetof(SecurityDefinitionResponse561::NoBrokenDates, BrokenDateSecurityID) == 8);
static_assert ( offsetof(SecurityDefinitionResponse561::NoBrokenDates, BrokenDateStart) == 12);
static_assert ( offsetof(SecurityDefinitionResponse561::NoBrokenDates, BrokenDateEnd) == 14);
static_assert ( offsetof(SecurityDefinitionResponse561, SeqNum) == 0);
static_assert ( offsetof(SecurityDefinitionResponse561, UUID) == 4);
static_assert ( offsetof(SecurityDefinitionResponse561, Text) == 12);
static_assert ( offsetof(SecurityDefinitionResponse561, FinancialInstrumentFullName) == 268);
static_assert ( offsetof(SecurityDefinitionResponse561, SenderID) == 303);
static_assert ( offsetof(SecurityDefinitionResponse561, Symbol) == 323);
static_assert ( offsetof(SecurityDefinitionResponse561, PartyDetailsListReqID) == 343);
static_assert ( offsetof(SecurityDefinitionResponse561, SecurityReqID) == 351);
static_assert ( offsetof(SecurityDefinitionResponse561, SecurityResponseID) == 359);
static_assert ( offsetof(SecurityDefinitionResponse561, SendingTimeEpoch) == 367);
static_assert ( offsetof(SecurityDefinitionResponse561, SecurityGroup) == 375);
static_assert ( offsetof(SecurityDefinitionResponse561, SecurityType) == 381);
static_assert ( offsetof(SecurityDefinitionResponse561, Location) == 387);
static_assert ( offsetof(SecurityDefinitionResponse561, SecurityID) == 392);
static_assert ( offsetof(SecurityDefinitionResponse561, Currency) == 396);
static_assert ( offsetof(SecurityDefinitionResponse561, MaturityMonthYear) == 399);
static_assert ( offsetof(SecurityDefinitionResponse561, DelayDuration) == 404);
static_assert ( offsetof(SecurityDefinitionResponse561, StartDate) == 406);
static_assert ( offsetof(SecurityDefinitionResponse561, EndDate) == 408);
static_assert ( offsetof(SecurityDefinitionResponse561, MaxNoOfSubstitutions) == 410);
static_assert ( offsetof(SecurityDefinitionResponse561, SourceRepoID) == 411);
static_assert ( offsetof(SecurityDefinitionResponse561, TerminationType) == 415);
static_assert ( offsetof(SecurityDefinitionResponse561, SecurityResponseType) == 423);
static_assert ( offsetof(SecurityDefinitionResponse561, ExpirationCycle) == 424);
static_assert ( offsetof(SecurityDefinitionResponse561, ManualOrderIndicator) == 425);
static_assert ( offsetof(SecurityDefinitionResponse561, SplitMsg) == 426);
static_assert ( offsetof(SecurityDefinitionResponse561, AutoQuoteRequest) == 427);
static_assert ( offsetof(SecurityDefinitionResponse561, PossRetransFlag) == 428);
static_assert ( offsetof(SecurityDefinitionResponse561, BrokenDateTermType) == 429);
static_assert ( offsetof(OrderMassActionReport562::NoAffectedOrders, OrigCIOrdID) == 0);
static_assert ( offsetof(OrderMassActionReport562::NoAffectedOrders, AffectedOrderID) == 20);
static_assert ( offsetof(OrderMassActionReport562::NoAffectedOrders, CxlQuantity) == 28);
static_assert ( offsetof(OrderMassActionReport562, SeqNum) == 0);
static_assert ( offsetof(OrderMassActionReport562, UUID) == 4);
static_assert ( offsetof(OrderMassActionReport562, SenderID) == 12);
static_assert ( offsetof(OrderMassActionReport562, PartyDetailsListReqID) == 32);
static_assert ( offsetof(OrderMassActionReport562, TransactTime) == 40);
static_assert ( offsetof(OrderMassActionReport562, SendingTimeEpoch) == 48);
static_assert ( offsetof(OrderMassActionReport562, OrderRequestID) == 56);
static_assert ( offsetof(OrderMassActionReport562, MassActionReportID) == 64);
static_assert ( offsetof(OrderMassActionReport562, SecurityGroup) == 72);
static_assert ( offsetof(OrderMassActionReport562, Location) == 78);
static_assert ( offsetof(OrderMassActionReport562, SecurityID) == 83);
static_assert ( offsetof(OrderMassActionReport562, DelayDuration) == 87);
static_assert ( offsetof(OrderMassActionReport562, MassActionResponse) == 89);
static_assert ( offsetof(OrderMassActionReport562, ManualOrderIndicator) == 90);
static_assert ( offsetof(OrderMassActionReport562, MassActionScope) == 91);
static_assert ( offsetof(OrderMassActionReport562, TotalAffectedOrders) == 92);
static_assert ( offsetof(OrderMassActionReport562, LastFragment) == 96);
static_assert ( offsetof(OrderMassActionReport562, MassActionRejectReason) == 97);
static_assert ( offsetof(OrderMassActionReport562, MarketSegmentID) == 98);
static_assert ( offsetof(OrderMassActionReport562, MassCancelRequestType) == 99);
static_assert ( offsetof(OrderMassActionReport562, Side) == 100);
static_assert ( offsetof(OrderMassActionReport562, OrdType) == 101);
static_assert ( offsetof(OrderMassActionReport562, TimeInForce) == 102);
static_assert ( offsetof(OrderMassActionReport562, SplitMsg) == 103);
static_assert ( offsetof(OrderMassActionReport562, LiquidityFlag) == 104);
static_assert ( offsetof(OrderMassActionReport562, PossRetransFlag) == 105);
static_assert ( offsetof(OrderMassActionReport562, DelayToTime) == 106);
static_assert ( offsetof(OrderMassActionReport562, OrigOrderUser) == 114);
static_assert ( offsetof(OrderMassActionReport562, CancelText) == 122);
static_assert ( offsetof(QuoteCancelAck563::NoQuoteEntries, QuoteEntryID) == 0);
static_assert ( offsetof(QuoteCancelAck563::NoQuoteEntries, SecurityID) == 4);
static_assert ( offsetof(QuoteCancelAck563::NoQuoteEntries, QuoteEntryRejectReason) == 8);
static_assert ( offsetof(QuoteCancelAck563::NoQuoteSets, QuoteSetID) == 0);
static_assert ( offsetof(QuoteCancelAck563::NoQuoteSets, QuoteErrorCode) == 2);
static_assert ( offsetof(QuoteCancelAck563, SeqNum) == 0);
static_assert ( offsetof(QuoteCancelAck563, UUID) == 4);
static_assert ( offsetof(QuoteCancelAck563, Text) == 12);
static_assert ( offsetof(QuoteCancelAck563, SenderID) == 268);
static_assert ( offsetof(QuoteCancelAck563, PartyDetailsListReqID) == 288);
static_assert ( offsetof(QuoteCancelAck563, RequestTime) == 296);
static_assert ( offsetof(QuoteCancelAck563, SendingTimeEpoch) == 304);
static_assert ( offsetof(QuoteCancelAck563, CancelledSymbol) == 312);
static_assert ( offsetof(QuoteCancelAck563, Location) == 318);
static_assert ( offsetof(QuoteCancelAck563, QuoteID) == 323);
static_assert ( offsetof(QuoteCancelAck563, QuoteRejectReason) == 327);
static_assert ( offsetof(QuoteCancelAck563, DelayDuration) == 329);
static_assert ( offsetof(QuoteCancelAck563, ManualOrderIndicator) == 331);
static_assert ( offsetof(QuoteCancelAck563, QuoteStatus) == 332);
static_assert ( offsetof(QuoteCancelAck563, NoProcessedEntries) == 333);
static_assert ( offsetof(QuoteCancelAck563, MMProtectionReset) == 337);
static_assert ( offsetof(QuoteCancelAck563, UnsolicitedCancelType) == 338);
static_assert ( offsetof(QuoteCancelAck563, SplitMsg) == 339);
static_assert ( offsetof(QuoteCancelAck563, TotNoQuoteEntries) == 340);
static_assert ( offsetof(QuoteCancelAck563, LiquidityFlag) == 341);
static_assert ( offsetof(QuoteCancelAck563, PossRetransFlag) == 342);
static_assert ( offsetof(QuoteCancelAck563, DelayToTime) == 343);
static_assert ( offsetof(QuoteCancelAck563, OrigOrderUser) == 351);
static_assert ( offsetof(QuoteCancelAck563, CancelText) == 359);
static_assert ( offsetof(QuoteCancelAck563, QuoteEntryOpen) == 367);
static_assert ( offsetof(ExecutionReportPendingCancel564, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportPendingCancel564, UUID) == 4);
static_assert ( offsetof(ExecutionReportPendingCancel564, ExecID) == 12);
static_assert ( offsetof(ExecutionReportPendingCancel564, SenderID) == 52);
static_assert ( offsetof(ExecutionReportPendingCancel564, ClOrdID) == 72);
static_assert ( offsetof(ExecutionReportPendingCancel564, PartyDetailsListReqID) == 92);
static_assert ( offsetof(ExecutionReportPendingCancel564, OrderID) == 100);
static_assert ( offsetof(ExecutionReportPendingCancel564, Price) == 108);
static_assert ( offsetof(ExecutionReportPendingCancel564, TransactTime) == 116);
static_assert ( offsetof(ExecutionReportPendingCancel564, SendingTimeEpoch) == 124);
static_assert ( offsetof(ExecutionReportPendingCancel564, OrderRequestID) == 132);
static_assert ( offsetof(ExecutionReportPendingCancel564, Location) == 140);
static_assert ( offsetof(ExecutionReportPendingCancel564, SecurityID) == 145);
static_assert ( offsetof(ExecutionReportPendingCancel564, OrderQty) == 149);
static_assert ( offsetof(ExecutionReportPendingCancel564, CumQty) == 153);
static_assert ( offsetof(ExecutionReportPendingCancel564, LeavesQty) == 157);
static_assert ( offsetof(ExecutionReportPendingCancel564, MinQty) == 161);
static_assert ( offsetof(ExecutionReportPendingCancel564, DisplayQty) == 165);
static_assert ( offsetof(ExecutionReportPendingCancel564, ExpireDate) == 169);
static_assert ( offsetof(ExecutionReportPendingCancel564, OrdType) == 171);
static_assert ( offsetof(ExecutionReportPendingCancel564, Side) == 172);
static_assert ( offsetof(ExecutionReportPendingCancel564, TimeInForce) == 173);
static_assert ( offsetof(ExecutionReportPendingCancel564, ManualOrderIndicator) == 174);
static_assert ( offsetof(ExecutionReportPendingCancel564, PossRetransFlag) == 175);
static_assert ( offsetof(ExecutionReportPendingCancel564, SplitMsg) == 176);
static_assert ( offsetof(ExecutionReportPendingCancel564, LiquidityFlag) == 177);
static_assert ( offsetof(ExecutionReportPendingCancel564, DelayToTime) == 178);
static_assert ( offsetof(ExecutionReportPendingCancel564, DiscretionPrice) == 186);
static_assert ( offsetof(ExecutionReportPendingCancel564, ReservationPrice) == 194);
static_assert ( offsetof(ExecutionReportPendingCancel564, PriorityIndicator) == 202);
static_assert ( offsetof(ExecutionReportPendingCancel564, OrigOrderUser) == 203);
static_assert ( offsetof(ExecutionReportPendingCancel564, CancelText) == 211);
static_assert ( offsetof(ExecutionReportPendingReplace565, SeqNum) == 0);
static_assert ( offsetof(ExecutionReportPendingReplace565, UUID) == 4);
static_assert ( offsetof(ExecutionReportPendingReplace565, ExecID) == 12);
static_assert ( offsetof(ExecutionReportPendingReplace565, SenderID) == 52);
static_assert ( offsetof(ExecutionReportPendingReplace565, ClOrdID) == 72);
static_assert ( offsetof(ExecutionReportPendingReplace565, PartyDetailsListReqID) == 92);
static_assert ( offsetof(ExecutionReportPendingReplace565, OrderID) == 100);
static_assert ( offsetof(ExecutionReportPendingReplace565, Price) == 108);
static_assert ( offsetof(ExecutionReportPendingReplace565, TransactTime) == 116);
static_assert ( offsetof(ExecutionReportPendingReplace565, SendingTimeEpoch) == 124);
static_assert ( offsetof(ExecutionReportPendingReplace565, OrderRequestID) == 132);
static_assert ( offsetof(ExecutionReportPendingReplace565, Location) == 140);
static_assert ( offsetof(ExecutionReportPendingReplace565, SecurityID) == 145);
static_assert ( offsetof(ExecutionReportPendingReplace565, OrderQty) == 149);
static_assert ( offsetof(ExecutionReportPendingReplace565, CumQty) == 153);
static_assert ( offsetof(ExecutionReportPendingReplace565, LeavesQty) == 157);
static_assert ( offsetof(ExecutionReportPendingReplace565, MinQty) == 161);
static_assert ( offsetof(ExecutionReportPendingReplace565, DisplayQty) == 165);
static_assert ( offsetof(ExecutionReportPendingReplace565, ExpireDate) == 169);
static_assert ( offsetof(ExecutionReportPendingReplace565, OrdType) == 171);
static_assert ( offsetof(ExecutionReportPendingReplace565, Side) == 172);
static_assert ( offsetof(ExecutionReportPendingReplace565, TimeInForce) == 173);
static_assert ( offsetof(ExecutionReportPendingReplace565, ManualOrderIndicator) == 174);
static_assert ( offsetof(ExecutionReportPendingReplace565, PossRetransFlag) == 175);
static_assert ( offsetof(ExecutionReportPendingReplace565, SplitMsg) == 176);
static_assert ( offsetof(ExecutionReportPendingReplace565, LiquidityFlag) == 177);
static_assert ( offsetof(ExecutionReportPendingReplace565, ShortSaleType) == 178);
static_assert ( offsetof(ExecutionReportPendingReplace565, DelayToTime) == 179);
static_assert ( offsetof(ExecutionReportPendingReplace565, DiscretionPrice) == 187);
static_assert ( offsetof(ExecutionReportPendingReplace565, PriorityIndicator) == 195);
return true;
}

/// namespace iLinkBinary
}
