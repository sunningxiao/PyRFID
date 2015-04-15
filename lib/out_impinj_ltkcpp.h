
/*
 * Generated file - DO NOT EDIT
 *
 * This is the header file for the LLRP Tool Kit (LTK)
 * C++ (aka cpp) implementation. It is generated into a .inc file
 * that is included by a platform specific .h header file.
 * That .h file takes care of prerequisites needed by this file.
 */


/*
 * Message classes - forward decls
 */


/* Custom messages */

class CIMPINJ_ENABLE_EXTENSIONS;
class CIMPINJ_ENABLE_EXTENSIONS_RESPONSE;
class CIMPINJ_SAVE_SETTINGS;
class CIMPINJ_SAVE_SETTINGS_RESPONSE;
class CIMPINJ_ADD_ENCODE_DATA_CACHE;
class CIMPINJ_ADD_ENCODE_DATA_CACHE_RESPONSE;
class CIMPINJ_DELETE_ENCODE_DATA_CACHE;
class CIMPINJ_DELETE_ENCODE_DATA_CACHE_RESPONSE;
class CIMPINJ_GET_ENCODE_DATA_CACHES;
class CIMPINJ_GET_ENCODE_DATA_CACHES_RESPONSE;
class CIMPINJ_ADD_ENCODE_DATA;
class CIMPINJ_ADD_ENCODE_DATA_RESPONSE;

/*
 * Parameter classes - forward decls
 */


/* Custom parameters */

class CImpinjRequestedData;
class CImpinjSubRegulatoryRegion;
class CImpinjInventorySearchMode;
class CImpinjTagDirectionReporting;
class CImpinjTagDirection;
class CImpinjFixedFrequencyList;
class CImpinjReducedPowerFrequencyList;
class CImpinjLowDutyCycle;
class CImpinjDetailedVersion;
class CImpinjFrequencyCapabilities;
class CImpinjTagInformation;
class CImpinjForkliftConfiguration;
class CImpinjForkliftHeightThreshold;
class CImpinjForkliftZeroMotionTimeThreshold;
class CImpinjForkliftCompanionBoardInfo;
class CImpinjGPIDebounceConfiguration;
class CImpinjReaderTemperature;
class CImpinjLinkMonitorConfiguration;
class CImpinjReportBufferConfiguration;
class CImpinjAccessSpecConfiguration;
class CImpinjBlockWriteWordCount;
class CImpinjBlockPermalock;
class CImpinjBlockPermalockOpSpecResult;
class CImpinjGetBlockPermalockStatus;
class CImpinjGetBlockPermalockStatusOpSpecResult;
class CImpinjSetQTConfig;
class CImpinjSetQTConfigOpSpecResult;
class CImpinjGetQTConfig;
class CImpinjGetQTConfigOpSpecResult;
class CImpinjTagReportContentSelector;
class CImpinjEnableSerializedTID;
class CImpinjEnableRFPhaseAngle;
class CImpinjEnablePeakRSSI;
class CImpinjEnableGPSCoordinates;
class CImpinjSerializedTID;
class CImpinjRFPhaseAngle;
class CImpinjPeakRSSI;
class CImpinjGPSCoordinates;
class CImpinjLoopSpec;
class CImpinjGPSNMEASentences;
class CImpinjGGASentence;
class CImpinjRMCSentence;
class CImpinjOpSpecRetryCount;
class CImpinjAdvancedGPOConfiguration;
class CImpinjEnableOptimizedRead;
class CImpinjAccessSpecOrdering;
class CImpinjEnableRFDopplerFrequency;
class CImpinjRFDopplerFrequency;
class CImpinjSTPCapabilities;
class CImpinjTagIC;
class CImpinjEncodeDataCache;
class CImpinjEncodeDataDefaults;
class CImpinjEncodeData;
class CImpinjEncodeDataPCBits;
class CImpinjEncodeDataAccessPassword;
class CImpinjEncodeDataKillPassword;
class CImpinjEncodeDataUserMemory;
class CImpinjEncodeDataAlternateEPC;
class CImpinjEncodeDataQTConfig;
class CImpinjEncodeDataLockConfig;
class CImpinjLowEncodeDataThresholdEvent;
class CImpinjEncodeOpSpec;
class CImpinjOpSpecGPOPulse;
class CImpinjEncodeReportData;
class CImpinjEncodeOpSpecResult;
class CImpinjEncodeDataResult;
class CImpinjEncodeDataDetailedResult;
class CImpinjArrayVersion;
class CImpinjArrayCapabilities;
class CImpinjTiltConfiguration;
class CImpinjBeaconConfiguration;
class CImpinjAntennaConfiguration;
class CImpinjSectorConfiguration;
class CImpinjAntennaEventHysteresis;
class CImpinjArrayInventorySpec;
class CImpinjSectorID;
class CImpinjDirectionReporting;
class CImpinjEnableSectorReport;
class CImpinjEnableTransitionReport;
class CImpinjSectorReportData;
class CImpinjTransitionReportData;
class CImpinjTagReporting;
class CImpinjEnableTagReport;
class CImpinjAllowStaleTags;
class CImpinjHubVersions;
class CImpinjHubConfiguration;

/*
 * Vendor descriptor declarations.
 */

extern const CVendorDescriptor
g_vdescImpinj;


/*
 * Namespace descriptor declarations.
 */

extern const CNamespaceDescriptor
g_nsdescImpinj;


/*
 * Enumeration definitions and declarations of
 * enumeration string tables.
 */


/**
 ** @brief  Global enumeration EImpinjRequestedDataType for LLRP enumerated field ImpinjRequestedDataType
 **
 
    
    
    
        
    
    
    
    
    
    
    
    
    
    
    
    
    
  
 **/

enum EImpinjRequestedDataType
{

    ImpinjRequestedDataType_All_Capabilities = 1000, /**< All_Capabilities */ 
    ImpinjRequestedDataType_Impinj_Detailed_Version = 1001, /**< Impinj_Detailed_Version */ 
    ImpinjRequestedDataType_Impinj_Frequency_Capabilities = 1002, /**< Impinj_Frequency_Capabilities */ 
    ImpinjRequestedDataType_Impinj_Array_Capabilities = 1003, /**< Impinj_Array_Capabilities */ 
    ImpinjRequestedDataType_All_Configuration = 2000, /**< All_Configuration */ 
    ImpinjRequestedDataType_Impinj_Sub_Regulatory_Region = 2001, /**< Impinj_Sub_Regulatory_Region */ 
    ImpinjRequestedDataType_Impinj_Forklift_Configuration = 2002, /**< Impinj_Forklift_Configuration */ 
    ImpinjRequestedDataType_Impinj_GPI_Debounce_Configuration = 2003, /**< Impinj_GPI_Debounce_Configuration */ 
    ImpinjRequestedDataType_Impinj_Reader_Temperature = 2004, /**< Impinj_Reader_Temperature */ 
    ImpinjRequestedDataType_Impinj_Link_Monitor_Configuration = 2005, /**< Impinj_Link_Monitor_Configuration */ 
    ImpinjRequestedDataType_Impinj_Report_Buffer_Configuration = 2006, /**< Impinj_Report_Buffer_Configuration */ 
    ImpinjRequestedDataType_Impinj_Access_Spec_Configuration = 2007, /**< Impinj_Access_Spec_Configuration */ 
    ImpinjRequestedDataType_Impinj_GPS_NMEA_Sentences = 2008, /**< Impinj_GPS_NMEA_Sentences */ 
    ImpinjRequestedDataType_Impinj_Advanced_GPO_Configuration = 2009, /**< Impinj_Advanced_GPO_Configuration */ 
    ImpinjRequestedDataType_Impinj_Tilt_Configuration = 2010, /**< Impinj_Tilt_Configuration */ 
    ImpinjRequestedDataType_Impinj_Beacon_Configuration = 2011, /**< Impinj_Beacon_Configuration */ 
    ImpinjRequestedDataType_Impinj_Antenna_Configuration = 2012, /**< Impinj_Antenna_Configuration */  
};

extern const SEnumTableEntry
g_estImpinjRequestedDataType[];


/**
 ** @brief  Global enumeration EImpinjRegulatoryRegion for LLRP enumerated field ImpinjRegulatoryRegion
 **
 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
      
            
  
 **/

enum EImpinjRegulatoryRegion
{

    ImpinjRegulatoryRegion_FCC_Part_15_247 = 0, /**< FCC_Part_15_247 */ 
    ImpinjRegulatoryRegion_ETSI_EN_300_220 = 1, /**< ETSI_EN_300_220 */ 
    ImpinjRegulatoryRegion_ETSI_EN_302_208_With_LBT = 2, /**< ETSI_EN_302_208_With_LBT */ 
    ImpinjRegulatoryRegion_Hong_Kong_920_925_MHz = 3, /**< Hong_Kong_920_925_MHz */ 
    ImpinjRegulatoryRegion_Taiwan_922_928_MHz = 4, /**< Taiwan_922_928_MHz */ 
    ImpinjRegulatoryRegion_Japan_952_954_MHz = 5, /**< Japan_952_954_MHz */ 
    ImpinjRegulatoryRegion_Japan_952_954_MHz_Low_Power = 6, /**< Japan_952_954_MHz_Low_Power */ 
    ImpinjRegulatoryRegion_ETSI_EN_302_208_v1_2_1 = 7, /**< ETSI_EN_302_208_v1_2_1 */ 
    ImpinjRegulatoryRegion_Korea_917_921_MHz = 8, /**< Korea_917_921_MHz */ 
    ImpinjRegulatoryRegion_Malaysia_919_923_MHz = 9, /**< Malaysia_919_923_MHz */ 
    ImpinjRegulatoryRegion_China_920_925_MHz = 10, /**< China_920_925_MHz */ 
    ImpinjRegulatoryRegion_Japan_952_956_MHz_Without_LBT = 11, /**< Japan_952_956_MHz_Without_LBT */ 
    ImpinjRegulatoryRegion_South_Africa_915_919_MHz = 12, /**< South_Africa_915_919_MHz */ 
    ImpinjRegulatoryRegion_Brazil_902_907_and_915_928_MHz = 13, /**< Brazil_902_907_and_915_928_MHz */ 
    ImpinjRegulatoryRegion_Thailand_920_925_MHz = 14, /**< Thailand_920_925_MHz */ 
    ImpinjRegulatoryRegion_Singapore_920_925_MHz = 15, /**< Singapore_920_925_MHz */ 
    ImpinjRegulatoryRegion_Australia_920_926_MHz = 16, /**< Australia_920_926_MHz */ 
    ImpinjRegulatoryRegion_India_865_867_MHz = 17, /**< India_865_867_MHz */ 
    ImpinjRegulatoryRegion_Uruguay_916_928_MHz = 18, /**< Uruguay_916_928_MHz */ 
    ImpinjRegulatoryRegion_Vietnam_920_925_MHz = 19, /**< Vietnam_920_925_MHz */ 
    ImpinjRegulatoryRegion_Israel_915_917_MHz = 20, /**< Israel_915_917_MHz */ 
    ImpinjRegulatoryRegion_Philippines_918_920_MHz = 21, /**< Philippines_918_920_MHz */ 
    ImpinjRegulatoryRegion_Canada_Post = 22, /**< Canada_Post */ 
    ImpinjRegulatoryRegion_Indonesia_923_925_MHz = 23, /**< Indonesia_923_925_MHz */ 
    ImpinjRegulatoryRegion_New_Zealand_921p5_928_MHz = 24, /**< New_Zealand_921p5_928_MHz */ 
    ImpinjRegulatoryRegion_Japan_916_921_MHz_Without_LBT = 25, /**< Japan_916_921_MHz_Without_LBT */ 
    ImpinjRegulatoryRegion_Latin_America_902_928_MHz = 26, /**< Latin_America_902_928_MHz */  
};

extern const SEnumTableEntry
g_estImpinjRegulatoryRegion[];


/**
 ** @brief  Global enumeration EImpinjInventorySearchType for LLRP enumerated field ImpinjInventorySearchType
 **
 
    
    
    
    
  
 **/

enum EImpinjInventorySearchType
{

    ImpinjInventorySearchType_Reader_Selected = 0, /**< Reader_Selected */ 
    ImpinjInventorySearchType_Single_Target = 1, /**< Single_Target */ 
    ImpinjInventorySearchType_Dual_Target = 2, /**< Dual_Target */ 
    ImpinjInventorySearchType_Single_Target_With_Suppression = 3, /**< Single_Target_With_Suppression */  
};

extern const SEnumTableEntry
g_estImpinjInventorySearchType[];


/**
 ** @brief  Global enumeration EImpinjTagDirectionAntennaConfiguration for LLRP enumerated field ImpinjTagDirectionAntennaConfiguration
 **
 
    
    
  
 **/

enum EImpinjTagDirectionAntennaConfiguration
{

    ImpinjTagDirectionAntennaConfiguration_Dual_Antenna = 1, /**< Dual_Antenna */ 
    ImpinjTagDirectionAntennaConfiguration_Quad_Antenna = 2, /**< Quad_Antenna */  
};

extern const SEnumTableEntry
g_estImpinjTagDirectionAntennaConfiguration[];


/**
 ** @brief  Global enumeration EImpinjDirection for LLRP enumerated field ImpinjDirection
 **
 
    
    
    
  
 **/

enum EImpinjDirection
{

    ImpinjDirection_Indeterminate = 0, /**< Indeterminate */ 
    ImpinjDirection_From_Side2_To_Side1 = 1, /**< From_Side2_To_Side1 */ 
    ImpinjDirection_From_Side1_To_Side2 = 2, /**< From_Side1_To_Side2 */  
};

extern const SEnumTableEntry
g_estImpinjDirection[];


/**
 ** @brief  Global enumeration EImpinjFixedFrequencyMode for LLRP enumerated field ImpinjFixedFrequencyMode
 **
 
    
    
    
  
 **/

enum EImpinjFixedFrequencyMode
{

    ImpinjFixedFrequencyMode_Disabled = 0, /**< Disabled */ 
    ImpinjFixedFrequencyMode_Auto_Select = 1, /**< Auto_Select */ 
    ImpinjFixedFrequencyMode_Channel_List = 2, /**< Channel_List */  
};

extern const SEnumTableEntry
g_estImpinjFixedFrequencyMode[];


/**
 ** @brief  Global enumeration EImpinjReducedPowerMode for LLRP enumerated field ImpinjReducedPowerMode
 **
 
    
    
  
 **/

enum EImpinjReducedPowerMode
{

    ImpinjReducedPowerMode_Disabled = 0, /**< Disabled */ 
    ImpinjReducedPowerMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjReducedPowerMode[];


/**
 ** @brief  Global enumeration EImpinjLowDutyCycleMode for LLRP enumerated field ImpinjLowDutyCycleMode
 **
 
    
    
  
 **/

enum EImpinjLowDutyCycleMode
{

    ImpinjLowDutyCycleMode_Disabled = 0, /**< Disabled */ 
    ImpinjLowDutyCycleMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjLowDutyCycleMode[];


/**
 ** @brief  Global enumeration EImpinjLinkMonitorMode for LLRP enumerated field ImpinjLinkMonitorMode
 **
 
    
    
  
 **/

enum EImpinjLinkMonitorMode
{

    ImpinjLinkMonitorMode_Disabled = 0, /**< Disabled */ 
    ImpinjLinkMonitorMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjLinkMonitorMode[];


/**
 ** @brief  Global enumeration EImpinjReportBufferMode for LLRP enumerated field ImpinjReportBufferMode
 **
 
    
    
  
 **/

enum EImpinjReportBufferMode
{

    ImpinjReportBufferMode_Normal = 0, /**< Normal */ 
    ImpinjReportBufferMode_Low_Latency = 1, /**< Low_Latency */  
};

extern const SEnumTableEntry
g_estImpinjReportBufferMode[];


/**
 ** @brief  Global enumeration EImpinjBlockPermalockResultType for LLRP enumerated field ImpinjBlockPermalockResultType
 **
 
    
    
    
    
    
    
    
  
 **/

enum EImpinjBlockPermalockResultType
{

    ImpinjBlockPermalockResultType_Success = 0, /**< Success */ 
    ImpinjBlockPermalockResultType_Insufficient_Power = 1, /**< Insufficient_Power */ 
    ImpinjBlockPermalockResultType_Nonspecific_Tag_Error = 2, /**< Nonspecific_Tag_Error */ 
    ImpinjBlockPermalockResultType_No_Response_From_Tag = 3, /**< No_Response_From_Tag */ 
    ImpinjBlockPermalockResultType_Nonspecific_Reader_Error = 4, /**< Nonspecific_Reader_Error */ 
    ImpinjBlockPermalockResultType_Incorrect_Password_Error = 5, /**< Incorrect_Password_Error */ 
    ImpinjBlockPermalockResultType_Tag_Memory_Overrun_Error = 6, /**< Tag_Memory_Overrun_Error */  
};

extern const SEnumTableEntry
g_estImpinjBlockPermalockResultType[];


/**
 ** @brief  Global enumeration EImpinjGetBlockPermalockStatusResultType for LLRP enumerated field ImpinjGetBlockPermalockStatusResultType
 **
 
    
    
    
    
    
    
  
 **/

enum EImpinjGetBlockPermalockStatusResultType
{

    ImpinjGetBlockPermalockStatusResultType_Success = 0, /**< Success */ 
    ImpinjGetBlockPermalockStatusResultType_Nonspecific_Tag_Error = 1, /**< Nonspecific_Tag_Error */ 
    ImpinjGetBlockPermalockStatusResultType_No_Response_From_Tag = 2, /**< No_Response_From_Tag */ 
    ImpinjGetBlockPermalockStatusResultType_Nonspecific_Reader_Error = 3, /**< Nonspecific_Reader_Error */ 
    ImpinjGetBlockPermalockStatusResultType_Incorrect_Password_Error = 4, /**< Incorrect_Password_Error */ 
    ImpinjGetBlockPermalockStatusResultType_Tag_Memory_Overrun_Error = 5, /**< Tag_Memory_Overrun_Error */  
};

extern const SEnumTableEntry
g_estImpinjGetBlockPermalockStatusResultType[];


/**
 ** @brief  Global enumeration EImpinjQTDataProfile for LLRP enumerated field ImpinjQTDataProfile
 **
 
    
    
    
  
 **/

enum EImpinjQTDataProfile
{

    ImpinjQTDataProfile_Unknown = 0, /**< Unknown */ 
    ImpinjQTDataProfile_Private = 1, /**< Private */ 
    ImpinjQTDataProfile_Public = 2, /**< Public */  
};

extern const SEnumTableEntry
g_estImpinjQTDataProfile[];


/**
 ** @brief  Global enumeration EImpinjQTAccessRange for LLRP enumerated field ImpinjQTAccessRange
 **
 
    
    
    
  
 **/

enum EImpinjQTAccessRange
{

    ImpinjQTAccessRange_Unknown = 0, /**< Unknown */ 
    ImpinjQTAccessRange_Normal_Range = 1, /**< Normal_Range */ 
    ImpinjQTAccessRange_Short_Range = 2, /**< Short_Range */  
};

extern const SEnumTableEntry
g_estImpinjQTAccessRange[];


/**
 ** @brief  Global enumeration EImpinjQTPersistence for LLRP enumerated field ImpinjQTPersistence
 **
 
    
    
    
  
 **/

enum EImpinjQTPersistence
{

    ImpinjQTPersistence_Unknown = 0, /**< Unknown */ 
    ImpinjQTPersistence_Temporary = 1, /**< Temporary */ 
    ImpinjQTPersistence_Permanent = 2, /**< Permanent */  
};

extern const SEnumTableEntry
g_estImpinjQTPersistence[];


/**
 ** @brief  Global enumeration EImpinjSetQTConfigResultType for LLRP enumerated field ImpinjSetQTConfigResultType
 **
 
    
    
    
    
    
    
  
 **/

enum EImpinjSetQTConfigResultType
{

    ImpinjSetQTConfigResultType_Success = 0, /**< Success */ 
    ImpinjSetQTConfigResultType_Insufficient_Power = 1, /**< Insufficient_Power */ 
    ImpinjSetQTConfigResultType_Nonspecific_Tag_Error = 2, /**< Nonspecific_Tag_Error */ 
    ImpinjSetQTConfigResultType_No_Response_From_Tag = 3, /**< No_Response_From_Tag */ 
    ImpinjSetQTConfigResultType_Nonspecific_Reader_Error = 4, /**< Nonspecific_Reader_Error */ 
    ImpinjSetQTConfigResultType_Incorrect_Password_Error = 5, /**< Incorrect_Password_Error */  
};

extern const SEnumTableEntry
g_estImpinjSetQTConfigResultType[];


/**
 ** @brief  Global enumeration EImpinjGetQTConfigResultType for LLRP enumerated field ImpinjGetQTConfigResultType
 **
 
    
    
    
    
    
  
 **/

enum EImpinjGetQTConfigResultType
{

    ImpinjGetQTConfigResultType_Success = 0, /**< Success */ 
    ImpinjGetQTConfigResultType_Nonspecific_Tag_Error = 1, /**< Nonspecific_Tag_Error */ 
    ImpinjGetQTConfigResultType_No_Response_From_Tag = 2, /**< No_Response_From_Tag */ 
    ImpinjGetQTConfigResultType_Nonspecific_Reader_Error = 3, /**< Nonspecific_Reader_Error */ 
    ImpinjGetQTConfigResultType_Incorrect_Password_Error = 4, /**< Incorrect_Password_Error */  
};

extern const SEnumTableEntry
g_estImpinjGetQTConfigResultType[];


/**
 ** @brief  Global enumeration EImpinjSerializedTIDMode for LLRP enumerated field ImpinjSerializedTIDMode
 **
 
    
    
  
 **/

enum EImpinjSerializedTIDMode
{

    ImpinjSerializedTIDMode_Disabled = 0, /**< Disabled */ 
    ImpinjSerializedTIDMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjSerializedTIDMode[];


/**
 ** @brief  Global enumeration EImpinjRFPhaseAngleMode for LLRP enumerated field ImpinjRFPhaseAngleMode
 **
 
    
    
  
 **/

enum EImpinjRFPhaseAngleMode
{

    ImpinjRFPhaseAngleMode_Disabled = 0, /**< Disabled */ 
    ImpinjRFPhaseAngleMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjRFPhaseAngleMode[];


/**
 ** @brief  Global enumeration EImpinjPeakRSSIMode for LLRP enumerated field ImpinjPeakRSSIMode
 **
 
    
    
  
 **/

enum EImpinjPeakRSSIMode
{

    ImpinjPeakRSSIMode_Disabled = 0, /**< Disabled */ 
    ImpinjPeakRSSIMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjPeakRSSIMode[];


/**
 ** @brief  Global enumeration EImpinjGPSCoordinatesMode for LLRP enumerated field ImpinjGPSCoordinatesMode
 **
 
    
    
  
 **/

enum EImpinjGPSCoordinatesMode
{

    ImpinjGPSCoordinatesMode_Disabled = 0, /**< Disabled */ 
    ImpinjGPSCoordinatesMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjGPSCoordinatesMode[];


/**
 ** @brief  Global enumeration EImpinjAdvancedGPOMode for LLRP enumerated field ImpinjAdvancedGPOMode
 **
 
    
    
    
    
    
    
    
  
 **/

enum EImpinjAdvancedGPOMode
{

    ImpinjAdvancedGPOMode_Normal = 0, /**< Normal */ 
    ImpinjAdvancedGPOMode_Pulsed = 1, /**< Pulsed */ 
    ImpinjAdvancedGPOMode_Reader_Operational_Status = 2, /**< Reader_Operational_Status */ 
    ImpinjAdvancedGPOMode_LLRP_Connection_Status = 3, /**< LLRP_Connection_Status */ 
    ImpinjAdvancedGPOMode_Reader_Inventory_Status = 4, /**< Reader_Inventory_Status */ 
    ImpinjAdvancedGPOMode_Network_Connection_Status = 5, /**< Network_Connection_Status */ 
    ImpinjAdvancedGPOMode_Reader_Inventory_Tags_Status = 6, /**< Reader_Inventory_Tags_Status */  
};

extern const SEnumTableEntry
g_estImpinjAdvancedGPOMode[];


/**
 ** @brief  Global enumeration EImpinjOptimizedReadMode for LLRP enumerated field ImpinjOptimizedReadMode
 **
 
    
    
  
 **/

enum EImpinjOptimizedReadMode
{

    ImpinjOptimizedReadMode_Disabled = 0, /**< Disabled */ 
    ImpinjOptimizedReadMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjOptimizedReadMode[];


/**
 ** @brief  Global enumeration EImpinjAccessSpecOrderingMode for LLRP enumerated field ImpinjAccessSpecOrderingMode
 **
 
    
    
  
 **/

enum EImpinjAccessSpecOrderingMode
{

    ImpinjAccessSpecOrderingMode_FIFO = 0, /**< FIFO */ 
    ImpinjAccessSpecOrderingMode_Ascending = 1, /**< Ascending */  
};

extern const SEnumTableEntry
g_estImpinjAccessSpecOrderingMode[];


/**
 ** @brief  Global enumeration EImpinjRFDopplerFrequencyMode for LLRP enumerated field ImpinjRFDopplerFrequencyMode
 **
 
    
    
  
 **/

enum EImpinjRFDopplerFrequencyMode
{

    ImpinjRFDopplerFrequencyMode_Disabled = 0, /**< Disabled */ 
    ImpinjRFDopplerFrequencyMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjRFDopplerFrequencyMode[];


/**
 ** @brief  Global enumeration EImpinjEncodeStatus for LLRP enumerated field ImpinjEncodeStatus
 **
 
    
    
  
 **/

enum EImpinjEncodeStatus
{

    ImpinjEncodeStatus_Disabled = 0, /**< Disabled */ 
    ImpinjEncodeStatus_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjEncodeStatus[];


/**
 ** @brief  Global enumeration EImpinjLockPrivilege for LLRP enumerated field ImpinjLockPrivilege
 **
 
    
    
    
    
    
  
 **/

enum EImpinjLockPrivilege
{

    ImpinjLockPrivilege_No_Action = 0, /**< No_Action */ 
    ImpinjLockPrivilege_Unlock = 1, /**< Unlock */ 
    ImpinjLockPrivilege_Lock = 2, /**< Lock */ 
    ImpinjLockPrivilege_Perma_Lock = 3, /**< Perma_Lock */ 
    ImpinjLockPrivilege_Perma_Unlock = 4, /**< Perma_Unlock */  
};

extern const SEnumTableEntry
g_estImpinjLockPrivilege[];


/**
 ** @brief  Global enumeration EImpinjEncodeMode for LLRP enumerated field ImpinjEncodeMode
 **
 
    
    
  
 **/

enum EImpinjEncodeMode
{

    ImpinjEncodeMode_Batch = 1, /**< Batch */ 
    ImpinjEncodeMode_Continuous = 2, /**< Continuous */  
};

extern const SEnumTableEntry
g_estImpinjEncodeMode[];


/**
 ** @brief  Global enumeration EImpinjTagICType for LLRP enumerated field ImpinjTagICType
 **
 
    
    
    
    
  
 **/

enum EImpinjTagICType
{

    ImpinjTagICType_Monza3 = 1, /**< Monza3 */ 
    ImpinjTagICType_Monza4 = 2, /**< Monza4 */ 
    ImpinjTagICType_Monza5 = 3, /**< Monza5 */ 
    ImpinjTagICType_AnyGen2 = 100, /**< AnyGen2 */  
};

extern const SEnumTableEntry
g_estImpinjTagICType[];


/**
 ** @brief  Global enumeration EImpinjOpSpecAction for LLRP enumerated field ImpinjOpSpecAction
 **
 
    
    
    
    
    
    
  
 **/

enum EImpinjOpSpecAction
{

    ImpinjOpSpecAction_Op_Spec_Started = 1, /**< Op_Spec_Started */ 
    ImpinjOpSpecAction_Op_Spec_Finished = 2, /**< Op_Spec_Finished */ 
    ImpinjOpSpecAction_Op_Spec_Success = 3, /**< Op_Spec_Success */ 
    ImpinjOpSpecAction_Op_Spec_Failure = 4, /**< Op_Spec_Failure */ 
    ImpinjOpSpecAction_Op_Spec_SingleSuccess = 5, /**< Op_Spec_SingleSuccess */ 
    ImpinjOpSpecAction_Op_Spec_SingleFailure = 6, /**< Op_Spec_SingleFailure */  
};

extern const SEnumTableEntry
g_estImpinjOpSpecAction[];


/**
 ** @brief  Global enumeration EImpinjEncodeResultType for LLRP enumerated field ImpinjEncodeResultType
 **
 
    
    
    
    
    
  
 **/

enum EImpinjEncodeResultType
{

    ImpinjEncodeResultType_Success = 0, /**< Success */ 
    ImpinjEncodeResultType_Success_With_Degraded_Performance = 1, /**< Success_With_Degraded_Performance */ 
    ImpinjEncodeResultType_Encode_Timeout = 2, /**< Encode_Timeout */ 
    ImpinjEncodeResultType_Encode_Data_Cache_Empty = 3, /**< Encode_Data_Cache_Empty */ 
    ImpinjEncodeResultType_Wrong_Tag_IC_Detected = 4, /**< Wrong_Tag_IC_Detected */  
};

extern const SEnumTableEntry
g_estImpinjEncodeResultType[];


/**
 ** @brief  Global enumeration EImpinjEncodeDataResultType for LLRP enumerated field ImpinjEncodeDataResultType
 **
 
    
    
    
    
    
    
    
    
    
    
  
 **/

enum EImpinjEncodeDataResultType
{

    ImpinjEncodeDataResultType_Success = 0, /**< Success */ 
    ImpinjEncodeDataResultType_Failure = 1, /**< Failure */ 
    ImpinjEncodeDataResultType_Timeout = 2, /**< Timeout */ 
    ImpinjEncodeDataResultType_Not_Attempted = 3, /**< Not_Attempted */ 
    ImpinjEncodeDataResultType_Insufficient_Power = 4, /**< Insufficient_Power */ 
    ImpinjEncodeDataResultType_No_Response_From_Tag = 5, /**< No_Response_From_Tag */ 
    ImpinjEncodeDataResultType_Incorrect_Password_Error = 6, /**< Incorrect_Password_Error */ 
    ImpinjEncodeDataResultType_Tag_Memory_Locked_Error = 7, /**< Tag_Memory_Locked_Error */ 
    ImpinjEncodeDataResultType_Nonspecific_Tag_Error = 8, /**< Nonspecific_Tag_Error */ 
    ImpinjEncodeDataResultType_Nonspecific_Reader_Error = 9, /**< Nonspecific_Reader_Error */  
};

extern const SEnumTableEntry
g_estImpinjEncodeDataResultType[];


/**
 ** @brief  Global enumeration EImpinjArrayRole for LLRP enumerated field ImpinjArrayRole
 **
 
    
    
    
  
 **/

enum EImpinjArrayRole
{

    ImpinjArrayRole_Scanning = 0, /**< Scanning */ 
    ImpinjArrayRole_Direction = 1, /**< Direction */ 
    ImpinjArrayRole_Location = 2, /**< Location */  
};

extern const SEnumTableEntry
g_estImpinjArrayRole[];


/**
 ** @brief  Global enumeration EImpinjHubConnectedType for LLRP enumerated field ImpinjHubConnectedType
 **
 
    
    
    
  
 **/

enum EImpinjHubConnectedType
{

    ImpinjHubConnectedType_Unknown = 0, /**< Unknown */ 
    ImpinjHubConnectedType_Disconnected = 1, /**< Disconnected */ 
    ImpinjHubConnectedType_Connected = 2, /**< Connected */  
};

extern const SEnumTableEntry
g_estImpinjHubConnectedType[];


/**
 ** @brief  Global enumeration EImpinjHubFaultType for LLRP enumerated field ImpinjHubFaultType
 **
 
    
    
    
    
    
    
    
    
    
  
 **/

enum EImpinjHubFaultType
{

    ImpinjHubFaultType_No_Fault = 0, /**< No_Fault */ 
    ImpinjHubFaultType_RF_Power = 1, /**< RF_Power */ 
    ImpinjHubFaultType_RF_Power_On_Hub_1 = 2, /**< RF_Power_On_Hub_1 */ 
    ImpinjHubFaultType_RF_Power_On_Hub_2 = 3, /**< RF_Power_On_Hub_2 */ 
    ImpinjHubFaultType_RF_Power_On_Hub_3 = 4, /**< RF_Power_On_Hub_3 */ 
    ImpinjHubFaultType_RF_Power_On_Hub_4 = 5, /**< RF_Power_On_Hub_4 */ 
    ImpinjHubFaultType_No_Init = 6, /**< No_Init */ 
    ImpinjHubFaultType_Serial_Overflow = 7, /**< Serial_Overflow */ 
    ImpinjHubFaultType_Disconnected = 8, /**< Disconnected */  
};

extern const SEnumTableEntry
g_estImpinjHubFaultType[];


/** 
 * \defgroup ImpinjMessage  Impinj Message Classes
 * Classes to manipulate the messages defined by the Impinj LLRP protocol
 */
/*@{*/ 

/**
 ** @brief  Class Definition CIMPINJ_ENABLE_EXTENSIONS for LLRP message IMPINJ_ENABLE_EXTENSIONS
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>The IMPINJ_ENABLE_EXTENSIONS message only applies for the duration of the current LLRP connection. If the LLRP connection is broken and re-established, the application must re-issue this command.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CIMPINJ_ENABLE_EXTENSIONS : public CMessage
{
  public:
    CIMPINJ_ENABLE_EXTENSIONS (void);
    ~CIMPINJ_ENABLE_EXTENSIONS (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_ENABLE_EXTENSIONS_RESPONSE for LLRP message IMPINJ_ENABLE_EXTENSIONS_RESPONSE
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom message is the response by the Reader to an IMPINJ_ENABLE_EXTENSIONS message. If the Reader was capable of enabling the Impinj extensions the reader returns the success code in the LLRPStatus parameter. If there is an error, the reader returns an appropriate error code.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CIMPINJ_ENABLE_EXTENSIONS_RESPONSE : public CMessage
{
  public:
    CIMPINJ_ENABLE_EXTENSIONS_RESPONSE (void);
    ~CIMPINJ_ENABLE_EXTENSIONS_RESPONSE (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CLLRPStatus * m_pLLRPStatus;

  public:
    /** @brief Get accessor functions for the LLRP LLRPStatus sub-parameter */  
    inline CLLRPStatus *
    getLLRPStatus (void)
    {
        return m_pLLRPStatus;
    }

    /** @brief Set accessor functions for the LLRP LLRPStatus sub-parameter */  
    EResultCode
    setLLRPStatus (
      CLLRPStatus * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_SAVE_SETTINGS for LLRP message IMPINJ_SAVE_SETTINGS
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom message instructs the Reader to save its current settings to persistent storage. The saved parameters will then become the Reader's power-on and reset settings.</p> 
 
         
    <p>On Speedway the settings include only the current configuration set through SET_READER_CONFIG.</p> 
 
         
    <p>On Speedway Revolution the settings include the current configuration, ROSpecs, and AccessSpecs. The enabled or disabled state of ROSpecs and AccessSpecs are saved. An active ROSpec is saved as enabled. The current countdown of AccessSpecs, if any, are saved. The enable/disable state and countdown are not automatically updated in persistent storage during reader operation.</p> 
 
         
    <p>Note that there is no way to recall the persistent settings during runtime. Only after a Reader power-on or reset are the persistent settings applied. When ResetToFactoryDefault in SET_READER_CONFIG is true the persistent settings are deleted. The SaveConfiguration Boolean must be set TRUE. When FALSE this message does nothing.</p> 
 
      <SMALL><i>Copyright 2007, 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CIMPINJ_SAVE_SETTINGS : public CMessage
{
  public:
    CIMPINJ_SAVE_SETTINGS (void);
    ~CIMPINJ_SAVE_SETTINGS (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_SaveConfiguration;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSaveConfiguration;
//@}

    /** @brief Get accessor functions for the LLRP SaveConfiguration field */
    inline llrp_u1_t
    getSaveConfiguration (void)
    {
        return m_SaveConfiguration;
    }

    /** @brief Set accessor functions for the LLRP SaveConfiguration field */
    inline void
    setSaveConfiguration (
      llrp_u1_t value)
    {
        m_SaveConfiguration = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_SAVE_SETTINGS_RESPONSE for LLRP message IMPINJ_SAVE_SETTINGS_RESPONSE
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom message is the response by the Reader to an IMPINJ_SAVE_SETTINGS message. If the Reader was capable of saving the current configuration to persistent storage, the Reader returns the success code in the LLRPStatus parameter. If there is an error, the Reader returns an appropriate error code.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CIMPINJ_SAVE_SETTINGS_RESPONSE : public CMessage
{
  public:
    CIMPINJ_SAVE_SETTINGS_RESPONSE (void);
    ~CIMPINJ_SAVE_SETTINGS_RESPONSE (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CLLRPStatus * m_pLLRPStatus;

  public:
    /** @brief Get accessor functions for the LLRP LLRPStatus sub-parameter */  
    inline CLLRPStatus *
    getLLRPStatus (void)
    {
        return m_pLLRPStatus;
    }

    /** @brief Set accessor functions for the LLRP LLRPStatus sub-parameter */  
    EResultCode
    setLLRPStatus (
      CLLRPStatus * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_ADD_ENCODE_DATA_CACHE for LLRP message IMPINJ_ADD_ENCODE_DATA_CACHE
 **
 
    
    
  
 **/

class CIMPINJ_ADD_ENCODE_DATA_CACHE : public CMessage
{
  public:
    CIMPINJ_ADD_ENCODE_DATA_CACHE (void);
    ~CIMPINJ_ADD_ENCODE_DATA_CACHE (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjEncodeDataCache * m_pImpinjEncodeDataCache;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataCache sub-parameter */  
    inline CImpinjEncodeDataCache *
    getImpinjEncodeDataCache (void)
    {
        return m_pImpinjEncodeDataCache;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataCache sub-parameter */  
    EResultCode
    setImpinjEncodeDataCache (
      CImpinjEncodeDataCache * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_ADD_ENCODE_DATA_CACHE_RESPONSE for LLRP message IMPINJ_ADD_ENCODE_DATA_CACHE_RESPONSE
 **
 
    
    
  
 **/

class CIMPINJ_ADD_ENCODE_DATA_CACHE_RESPONSE : public CMessage
{
  public:
    CIMPINJ_ADD_ENCODE_DATA_CACHE_RESPONSE (void);
    ~CIMPINJ_ADD_ENCODE_DATA_CACHE_RESPONSE (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CLLRPStatus * m_pLLRPStatus;

  public:
    /** @brief Get accessor functions for the LLRP LLRPStatus sub-parameter */  
    inline CLLRPStatus *
    getLLRPStatus (void)
    {
        return m_pLLRPStatus;
    }

    /** @brief Set accessor functions for the LLRP LLRPStatus sub-parameter */  
    EResultCode
    setLLRPStatus (
      CLLRPStatus * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_DELETE_ENCODE_DATA_CACHE for LLRP message IMPINJ_DELETE_ENCODE_DATA_CACHE
 **
 
    
    
  
 **/

class CIMPINJ_DELETE_ENCODE_DATA_CACHE : public CMessage
{
  public:
    CIMPINJ_DELETE_ENCODE_DATA_CACHE (void);
    ~CIMPINJ_DELETE_ENCODE_DATA_CACHE (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32_t m_EncodeDataCacheID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeDataCacheID;
//@}

    /** @brief Get accessor functions for the LLRP EncodeDataCacheID field */
    inline llrp_u32_t
    getEncodeDataCacheID (void)
    {
        return m_EncodeDataCacheID;
    }

    /** @brief Set accessor functions for the LLRP EncodeDataCacheID field */
    inline void
    setEncodeDataCacheID (
      llrp_u32_t value)
    {
        m_EncodeDataCacheID = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_DELETE_ENCODE_DATA_CACHE_RESPONSE for LLRP message IMPINJ_DELETE_ENCODE_DATA_CACHE_RESPONSE
 **
 
    
    
  
 **/

class CIMPINJ_DELETE_ENCODE_DATA_CACHE_RESPONSE : public CMessage
{
  public:
    CIMPINJ_DELETE_ENCODE_DATA_CACHE_RESPONSE (void);
    ~CIMPINJ_DELETE_ENCODE_DATA_CACHE_RESPONSE (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CLLRPStatus * m_pLLRPStatus;

  public:
    /** @brief Get accessor functions for the LLRP LLRPStatus sub-parameter */  
    inline CLLRPStatus *
    getLLRPStatus (void)
    {
        return m_pLLRPStatus;
    }

    /** @brief Set accessor functions for the LLRP LLRPStatus sub-parameter */  
    EResultCode
    setLLRPStatus (
      CLLRPStatus * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_GET_ENCODE_DATA_CACHES for LLRP message IMPINJ_GET_ENCODE_DATA_CACHES
 **
 
    
  
 **/

class CIMPINJ_GET_ENCODE_DATA_CACHES : public CMessage
{
  public:
    CIMPINJ_GET_ENCODE_DATA_CACHES (void);
    ~CIMPINJ_GET_ENCODE_DATA_CACHES (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_GET_ENCODE_DATA_CACHES_RESPONSE for LLRP message IMPINJ_GET_ENCODE_DATA_CACHES_RESPONSE
 **
 
    
    
    
  
 **/

class CIMPINJ_GET_ENCODE_DATA_CACHES_RESPONSE : public CMessage
{
  public:
    CIMPINJ_GET_ENCODE_DATA_CACHES_RESPONSE (void);
    ~CIMPINJ_GET_ENCODE_DATA_CACHES_RESPONSE (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CLLRPStatus * m_pLLRPStatus;

  public:
    /** @brief Get accessor functions for the LLRP LLRPStatus sub-parameter */  
    inline CLLRPStatus *
    getLLRPStatus (void)
    {
        return m_pLLRPStatus;
    }

    /** @brief Set accessor functions for the LLRP LLRPStatus sub-parameter */  
    EResultCode
    setLLRPStatus (
      CLLRPStatus * pValue);


  protected:
    std::list<CImpinjEncodeDataCache *> m_listImpinjEncodeDataCache;

  public:
     /** @brief  Returns the first element of the ImpinjEncodeDataCache sub-parameter list*/  
    inline std::list<CImpinjEncodeDataCache *>::iterator
    beginImpinjEncodeDataCache (void)
    {
        return m_listImpinjEncodeDataCache.begin();
    }

     /** @brief  Returns the last element of the ImpinjEncodeDataCache sub-parameter list*/  
    inline std::list<CImpinjEncodeDataCache *>::iterator
    endImpinjEncodeDataCache (void)
    {
        return m_listImpinjEncodeDataCache.end();
    }

     /** @brief  Clears the LLRP ImpinjEncodeDataCache sub-parameter list*/  
    inline void
    clearImpinjEncodeDataCache (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listImpinjEncodeDataCache);
    }

     /** @brief  Count of the LLRP ImpinjEncodeDataCache sub-parameter list*/  
    inline int
    countImpinjEncodeDataCache (void)
    {
        return (int) (m_listImpinjEncodeDataCache.size());
    }

    EResultCode
     /** @brief  Add a ImpinjEncodeDataCache to the LLRP sub-parameter list*/  
    addImpinjEncodeDataCache (
      CImpinjEncodeDataCache * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_ADD_ENCODE_DATA for LLRP message IMPINJ_ADD_ENCODE_DATA
 **
 
    
    
    
  
 **/

class CIMPINJ_ADD_ENCODE_DATA : public CMessage
{
  public:
    CIMPINJ_ADD_ENCODE_DATA (void);
    ~CIMPINJ_ADD_ENCODE_DATA (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32_t m_EncodeDataCacheID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeDataCacheID;
//@}

    /** @brief Get accessor functions for the LLRP EncodeDataCacheID field */
    inline llrp_u32_t
    getEncodeDataCacheID (void)
    {
        return m_EncodeDataCacheID;
    }

    /** @brief Set accessor functions for the LLRP EncodeDataCacheID field */
    inline void
    setEncodeDataCacheID (
      llrp_u32_t value)
    {
        m_EncodeDataCacheID = value;
    }


  
  protected:
    std::list<CImpinjEncodeData *> m_listImpinjEncodeData;

  public:
     /** @brief  Returns the first element of the ImpinjEncodeData sub-parameter list*/  
    inline std::list<CImpinjEncodeData *>::iterator
    beginImpinjEncodeData (void)
    {
        return m_listImpinjEncodeData.begin();
    }

     /** @brief  Returns the last element of the ImpinjEncodeData sub-parameter list*/  
    inline std::list<CImpinjEncodeData *>::iterator
    endImpinjEncodeData (void)
    {
        return m_listImpinjEncodeData.end();
    }

     /** @brief  Clears the LLRP ImpinjEncodeData sub-parameter list*/  
    inline void
    clearImpinjEncodeData (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listImpinjEncodeData);
    }

     /** @brief  Count of the LLRP ImpinjEncodeData sub-parameter list*/  
    inline int
    countImpinjEncodeData (void)
    {
        return (int) (m_listImpinjEncodeData.size());
    }

    EResultCode
     /** @brief  Add a ImpinjEncodeData to the LLRP sub-parameter list*/  
    addImpinjEncodeData (
      CImpinjEncodeData * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_ADD_ENCODE_DATA_RESPONSE for LLRP message IMPINJ_ADD_ENCODE_DATA_RESPONSE
 **
 
    
    
  
 **/

class CIMPINJ_ADD_ENCODE_DATA_RESPONSE : public CMessage
{
  public:
    CIMPINJ_ADD_ENCODE_DATA_RESPONSE (void);
    ~CIMPINJ_ADD_ENCODE_DATA_RESPONSE (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CLLRPStatus * m_pLLRPStatus;

  public:
    /** @brief Get accessor functions for the LLRP LLRPStatus sub-parameter */  
    inline CLLRPStatus *
    getLLRPStatus (void)
    {
        return m_pLLRPStatus;
    }

    /** @brief Set accessor functions for the LLRP LLRPStatus sub-parameter */  
    EResultCode
    setLLRPStatus (
      CLLRPStatus * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/*@}*/

/** 
 * \defgroup ImpinjParameter Impinj Parameter Classes
 * Classes to manipulate the parameters defined by the Impinj LLRP protocol
 */
/*@{*/ 

/**
 ** @brief  Class Definition CImpinjRequestedData for LLRP parameter ImpinjRequestedData
 **
 
    
      
<ul>
  
</ul>  

      
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjRequestedData : public CParameter
{
  public:
    CImpinjRequestedData (void);
    ~CImpinjRequestedData (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjRequestedDataType m_eRequestedData;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRequestedData;
//@}

    /** @brief Get accessor functions for the LLRP RequestedData field */
    inline EImpinjRequestedDataType
    getRequestedData (void)
    {
        return m_eRequestedData;
    }

    /** @brief Set accessor functions for the LLRP RequestedData field */
    inline void
    setRequestedData (
      EImpinjRequestedDataType value)
    {
        m_eRequestedData = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSubRegulatoryRegion for LLRP parameter ImpinjSubRegulatoryRegion
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is used when a particular regulatory region supports multiple operational modes. The Reader validates the RegulatoryRegion field against the regulatory region advertised in the reader's capabilities and only allows compatible regions to be set. Note that when setting the sub-regulatory region using the SET_READER_CONFIG message, the ResetToFactoryDefault field must be set to true. This will delete any configured ROSpecs and AccessSpecs. Failure to set the ResetToFactoryDefault field will result in an error. The Client should subsequently issue a GET_READER_CAPABILITIES command after updating the regulatory region as the change may have affected the advertised tables.</p> 
 
        
    <p>After the reader accepts this parameter, it will begin to reload its regulatory settings; this can take several seconds. Applications should plan for an additional delay of several seconds for the SET_READER_CONFIG_RESPONSE. Note: An LLRP ResetToFactoryDefault that changes the RegulatoryRegion will have the same behavior.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjSubRegulatoryRegion : public CParameter
{
  public:
    CImpinjSubRegulatoryRegion (void);
    ~CImpinjSubRegulatoryRegion (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjRegulatoryRegion m_eRegulatoryRegion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRegulatoryRegion;
//@}

    /** @brief Get accessor functions for the LLRP RegulatoryRegion field */
    inline EImpinjRegulatoryRegion
    getRegulatoryRegion (void)
    {
        return m_eRegulatoryRegion;
    }

    /** @brief Set accessor functions for the LLRP RegulatoryRegion field */
    inline void
    setRegulatoryRegion (
      EImpinjRegulatoryRegion value)
    {
        m_eRegulatoryRegion = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjInventorySearchMode for LLRP parameter ImpinjInventorySearchMode
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom parameter specifies the Impinj-specific inventory search mode used by a particular antenna. The inventory search mode may be configured as either part of the default reader configuration (via a SET_READER_CONFIG message), or as part of individual AISpecs within a ROSpec (via an ADD_ROSPEC message). For any AISpec, each enabled antenna must be configured to use the same search algorithm. Mismatched antennas will result in an error reported by the Reader.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjInventorySearchMode : public CParameter
{
  public:
    CImpinjInventorySearchMode (void);
    ~CImpinjInventorySearchMode (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjInventorySearchType m_eInventorySearchMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdInventorySearchMode;
//@}

    /** @brief Get accessor functions for the LLRP InventorySearchMode field */
    inline EImpinjInventorySearchType
    getInventorySearchMode (void)
    {
        return m_eInventorySearchMode;
    }

    /** @brief Set accessor functions for the LLRP InventorySearchMode field */
    inline void
    setInventorySearchMode (
      EImpinjInventorySearchType value)
    {
        m_eInventorySearchMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTagDirectionReporting for LLRP parameter ImpinjTagDirectionReporting
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter enables the Reader to report direction information for each tag that moves through a portal. If tag direction is enabled, the Reader will provide an ImpinjTagInformation parameter containing an ImpinjTagDirection parameter in an RO_ACCESS_REPORT for each tag in which a direction determination has been made. The configuration determines the number of antennas used to calculate the direction, while the physical cabling of the antennas to the Reader determines the frame of reference.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
  
 **/

class CImpinjTagDirectionReporting : public CParameter
{
  public:
    CImpinjTagDirectionReporting (void);
    ~CImpinjTagDirectionReporting (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_EnableTagDirection;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableTagDirection;
//@}

    /** @brief Get accessor functions for the LLRP EnableTagDirection field */
    inline llrp_u1_t
    getEnableTagDirection (void)
    {
        return m_EnableTagDirection;
    }

    /** @brief Set accessor functions for the LLRP EnableTagDirection field */
    inline void
    setEnableTagDirection (
      llrp_u1_t value)
    {
        m_EnableTagDirection = value;
    }


  protected:
    EImpinjTagDirectionAntennaConfiguration m_eAntennaConfiguration;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAntennaConfiguration;
//@}

    /** @brief Get accessor functions for the LLRP AntennaConfiguration field */
    inline EImpinjTagDirectionAntennaConfiguration
    getAntennaConfiguration (void)
    {
        return m_eAntennaConfiguration;
    }

    /** @brief Set accessor functions for the LLRP AntennaConfiguration field */
    inline void
    setAntennaConfiguration (
      EImpinjTagDirectionAntennaConfiguration value)
    {
        m_eAntennaConfiguration = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTagDirection for LLRP parameter ImpinjTagDirection
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom parameter conveys the direction of a tag through a portal with an associated confidence factor. If tag direction is enabled using the ImpinjTagDirectionReporting parameter, the Reader will send RO_ACCESS_REPORT messages containing direction information whenever a direction decision has been made or the confidence factor changes.</p> 
 
         
    <p>As it is impossible to define direction without a frame of reference, tag direction is reported by using abstract sides 
   <b>1</b>
  and 
   <b>2</b>
  as reference points. The actual definition corresponding to the values reported by the Reader are determined by the physical cabling of the antennas to the Reader. Specifically, for a dual antenna configuration, side 1 is defined as the direction of the antenna connected to the Antenna 1 BNC and side 2 is defined as the direction of the antenna connected to the Antenna 2 BNC. For the quad antenna configuration, side 1 is antennas 1 and 3, and side 2 is antennas 2 and 4.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjTagDirection : public CParameter
{
  public:
    CImpinjTagDirection (void);
    ~CImpinjTagDirection (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u64_t m_DecisionTimestamp;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdDecisionTimestamp;
//@}

    /** @brief Get accessor functions for the LLRP DecisionTimestamp field */
    inline llrp_u64_t
    getDecisionTimestamp (void)
    {
        return m_DecisionTimestamp;
    }

    /** @brief Set accessor functions for the LLRP DecisionTimestamp field */
    inline void
    setDecisionTimestamp (
      llrp_u64_t value)
    {
        m_DecisionTimestamp = value;
    }


  protected:
    EImpinjDirection m_eTagDirection;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTagDirection;
//@}

    /** @brief Get accessor functions for the LLRP TagDirection field */
    inline EImpinjDirection
    getTagDirection (void)
    {
        return m_eTagDirection;
    }

    /** @brief Set accessor functions for the LLRP TagDirection field */
    inline void
    setTagDirection (
      EImpinjDirection value)
    {
        m_eTagDirection = value;
    }


  protected:
    llrp_u16_t m_Confidence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdConfidence;
//@}

    /** @brief Get accessor functions for the LLRP Confidence field */
    inline llrp_u16_t
    getConfidence (void)
    {
        return m_Confidence;
    }

    /** @brief Set accessor functions for the LLRP Confidence field */
    inline void
    setConfidence (
      llrp_u16_t value)
    {
        m_Confidence = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjFixedFrequencyList for LLRP parameter ImpinjFixedFrequencyList
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom parameter allows the Reader to make intelligent decisions about which channel to use in fixed frequency or intelligent hopping regulatory regions. The Mode field determines how the Reader will select the active channel. When set to zero (disabled), the Reader ignores this parameter and instead uses the frequency information in the LLRP RFTransmitter parameter. When set to one, the Reader chooses the active channel automatically based on the rules of the regulatory region. When set to two, the Reader chooses the active channel from a configurable list of channel indices based on the FixedFrequencyTable parameter advertised in the Reader's capabilities. The maximum number of channels allowed in the configurable list varies by regulatory region. A repeated channel index means the Reader will use the channel multiple times. When Mode is set to zero or one, the ChannelList array is ignored.</p> 
 
         
    <p>This parameter may only be added in an operational mode (i.e. not disabled) when the Reader is operating in a fixed frequency or intelligent hopping regulatory region. The parameter contents must be consistent across all enabled antennas in an AISpec.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjFixedFrequencyList : public CParameter
{
  public:
    CImpinjFixedFrequencyList (void);
    ~CImpinjFixedFrequencyList (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjFixedFrequencyMode m_eFixedFrequencyMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFixedFrequencyMode;
//@}

    /** @brief Get accessor functions for the LLRP FixedFrequencyMode field */
    inline EImpinjFixedFrequencyMode
    getFixedFrequencyMode (void)
    {
        return m_eFixedFrequencyMode;
    }

    /** @brief Set accessor functions for the LLRP FixedFrequencyMode field */
    inline void
    setFixedFrequencyMode (
      EImpinjFixedFrequencyMode value)
    {
        m_eFixedFrequencyMode = value;
    }


  protected:
    llrp_u16v_t m_ChannelList;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdChannelList;
//@}

    /** @brief Get accessor functions for the LLRP ChannelList field */
    inline llrp_u16v_t
    getChannelList (void)
    {
        return m_ChannelList;
    }

    /** @brief Set accessor functions for the LLRP ChannelList field */
    inline void
    setChannelList (
      llrp_u16v_t value)
    {
        m_ChannelList = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjReducedPowerFrequencyList for LLRP parameter ImpinjReducedPowerFrequencyList
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter allows the Reader to apply a reduced power to specific channels listed in the ChannelList when operating in the FCC regulatory region. The ReducedPowerMode field determines how the Reader will interpret the channels listed. When set to zero (disabled), the Reader ignores this parameter. When set to one, during inventory and access the Reader will apply a reduced power level to the list of channel indices derived from the FrequencyList supplied by the ImpinjFrequenciesCapabilities parameter advertised in the Reader's capabilities. The reduced power level is not configurable, and defaults to the lowest power possible by the device. The minimum number of channels allowed in the configurable list is two, and the maximum is sixteen.</p> 
 
        
    <p>This parameter is valid only when the Reader is operating in the FCC regulatory region. The parameter contents must be consistent across all enabled antennas in an AISpec.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjReducedPowerFrequencyList : public CParameter
{
  public:
    CImpinjReducedPowerFrequencyList (void);
    ~CImpinjReducedPowerFrequencyList (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjReducedPowerMode m_eReducedPowerMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdReducedPowerMode;
//@}

    /** @brief Get accessor functions for the LLRP ReducedPowerMode field */
    inline EImpinjReducedPowerMode
    getReducedPowerMode (void)
    {
        return m_eReducedPowerMode;
    }

    /** @brief Set accessor functions for the LLRP ReducedPowerMode field */
    inline void
    setReducedPowerMode (
      EImpinjReducedPowerMode value)
    {
        m_eReducedPowerMode = value;
    }


  protected:
    llrp_u16v_t m_ChannelList;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdChannelList;
//@}

    /** @brief Get accessor functions for the LLRP ChannelList field */
    inline llrp_u16v_t
    getChannelList (void)
    {
        return m_ChannelList;
    }

    /** @brief Set accessor functions for the LLRP ChannelList field */
    inline void
    setChannelList (
      llrp_u16v_t value)
    {
        m_ChannelList = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLowDutyCycle for LLRP parameter ImpinjLowDutyCycle
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom parameter provides additional control of the RF duty cycle of the Reader beyond that provided by the TagTransitTime field in the LLRP C1G2SingulationControl parameter. During inventory, if the Reader detects zero tags on all enabled antennas in the AISpec, EmptyFieldTimeout specifies in milliseconds the time the Reader will wait before entering low duty cycle mode. In this low duty cycle mode, the Reader will revisit each enabled antenna in the AISpec every FieldPingInterval milliseconds, checking for tags. When a tag is detected, full duty cycle will resume. The Reader will exit low duty cycle mode at the start of each AISpec and restart its EmptyFieldTimeout timer.</p> 
 
         
    <p>As an example, assume EmptyFieldTimeout is set to 500 ms and FieldPingInterval is set to 200 ms for each of the enabled antennas in an AISpec, and four antennas are enabled. Once the Reader detects zero tags on each of the four antennas, the EmptyFieldTimeout timer starts while the Reader continues to search the FOV for tags. If the Reader detects tags, the timer stops. If the Reader detects zero tags for 500 ms, a timeout occurs and the Reader enters low duty cycle mode. During this mode, the Reader will visit each of the four enabled antennas once in the FieldPingInterval of 200 ms. Therefore, the Reader will switch on the transmitter briefly every 50 ms to check for tags in the FOV of one of the enabled antennas.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjLowDutyCycle : public CParameter
{
  public:
    CImpinjLowDutyCycle (void);
    ~CImpinjLowDutyCycle (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjLowDutyCycleMode m_eLowDutyCycleMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLowDutyCycleMode;
//@}

    /** @brief Get accessor functions for the LLRP LowDutyCycleMode field */
    inline EImpinjLowDutyCycleMode
    getLowDutyCycleMode (void)
    {
        return m_eLowDutyCycleMode;
    }

    /** @brief Set accessor functions for the LLRP LowDutyCycleMode field */
    inline void
    setLowDutyCycleMode (
      EImpinjLowDutyCycleMode value)
    {
        m_eLowDutyCycleMode = value;
    }


  protected:
    llrp_u16_t m_EmptyFieldTimeout;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEmptyFieldTimeout;
//@}

    /** @brief Get accessor functions for the LLRP EmptyFieldTimeout field */
    inline llrp_u16_t
    getEmptyFieldTimeout (void)
    {
        return m_EmptyFieldTimeout;
    }

    /** @brief Set accessor functions for the LLRP EmptyFieldTimeout field */
    inline void
    setEmptyFieldTimeout (
      llrp_u16_t value)
    {
        m_EmptyFieldTimeout = value;
    }


  protected:
    llrp_u16_t m_FieldPingInterval;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFieldPingInterval;
//@}

    /** @brief Get accessor functions for the LLRP FieldPingInterval field */
    inline llrp_u16_t
    getFieldPingInterval (void)
    {
        return m_FieldPingInterval;
    }

    /** @brief Set accessor functions for the LLRP FieldPingInterval field */
    inline void
    setFieldPingInterval (
      llrp_u16_t value)
    {
        m_FieldPingInterval = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjDetailedVersion for LLRP parameter ImpinjDetailedVersion
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides detailed information about the individual components running on the Reader. The primary platform version is available in the FirmwareVersion field in the GeneralDeviceCapabilities parameter of the Reader's capabilities. However, there are sub-components of the Reader that contain independent version information that is unavailable in this manner. This parameter provides this detailed information.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjDetailedVersion : public CParameter
{
  public:
    CImpinjDetailedVersion (void);
    ~CImpinjDetailedVersion (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_ModelName;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdModelName;
//@}

    /** @brief Get accessor functions for the LLRP ModelName field */
    inline llrp_utf8v_t
    getModelName (void)
    {
        return m_ModelName;
    }

    /** @brief Set accessor functions for the LLRP ModelName field */
    inline void
    setModelName (
      llrp_utf8v_t value)
    {
        m_ModelName = value;
    }


  protected:
    llrp_utf8v_t m_SerialNumber;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSerialNumber;
//@}

    /** @brief Get accessor functions for the LLRP SerialNumber field */
    inline llrp_utf8v_t
    getSerialNumber (void)
    {
        return m_SerialNumber;
    }

    /** @brief Set accessor functions for the LLRP SerialNumber field */
    inline void
    setSerialNumber (
      llrp_utf8v_t value)
    {
        m_SerialNumber = value;
    }


  protected:
    llrp_utf8v_t m_SoftwareVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSoftwareVersion;
//@}

    /** @brief Get accessor functions for the LLRP SoftwareVersion field */
    inline llrp_utf8v_t
    getSoftwareVersion (void)
    {
        return m_SoftwareVersion;
    }

    /** @brief Set accessor functions for the LLRP SoftwareVersion field */
    inline void
    setSoftwareVersion (
      llrp_utf8v_t value)
    {
        m_SoftwareVersion = value;
    }


  protected:
    llrp_utf8v_t m_FirmwareVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFirmwareVersion;
//@}

    /** @brief Get accessor functions for the LLRP FirmwareVersion field */
    inline llrp_utf8v_t
    getFirmwareVersion (void)
    {
        return m_FirmwareVersion;
    }

    /** @brief Set accessor functions for the LLRP FirmwareVersion field */
    inline void
    setFirmwareVersion (
      llrp_utf8v_t value)
    {
        m_FirmwareVersion = value;
    }


  protected:
    llrp_utf8v_t m_FPGAVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFPGAVersion;
//@}

    /** @brief Get accessor functions for the LLRP FPGAVersion field */
    inline llrp_utf8v_t
    getFPGAVersion (void)
    {
        return m_FPGAVersion;
    }

    /** @brief Set accessor functions for the LLRP FPGAVersion field */
    inline void
    setFPGAVersion (
      llrp_utf8v_t value)
    {
        m_FPGAVersion = value;
    }


  protected:
    llrp_utf8v_t m_PCBAVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPCBAVersion;
//@}

    /** @brief Get accessor functions for the LLRP PCBAVersion field */
    inline llrp_utf8v_t
    getPCBAVersion (void)
    {
        return m_PCBAVersion;
    }

    /** @brief Set accessor functions for the LLRP PCBAVersion field */
    inline void
    setPCBAVersion (
      llrp_utf8v_t value)
    {
        m_PCBAVersion = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjFrequencyCapabilities for LLRP parameter ImpinjFrequencyCapabilities
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is included in the Reader's capabilities and carries each frequency supported by the reader (see section 4.2.9 for more information). The FrequencyList field is a one-based array of frequencies in kHz.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjFrequencyCapabilities : public CParameter
{
  public:
    CImpinjFrequencyCapabilities (void);
    ~CImpinjFrequencyCapabilities (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32v_t m_FrequencyList;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFrequencyList;
//@}

    /** @brief Get accessor functions for the LLRP FrequencyList field */
    inline llrp_u32v_t
    getFrequencyList (void)
    {
        return m_FrequencyList;
    }

    /** @brief Set accessor functions for the LLRP FrequencyList field */
    inline void
    setFrequencyList (
      llrp_u32v_t value)
    {
        m_FrequencyList = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTagInformation for LLRP parameter ImpinjTagInformation
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides additional information about a tag that cannot be conveyed using the standard LLRP TagReportData parameter. The EPC is provided so an application may correlate this information with the associated TagReportData information as these parameters may arrive asynchronously with respect to the standard immediate reporting mechanism. Following the EPC is a set of parameters providing additional information about the tag, such as the direction in which it traveled through a portal.</p> 
 
        
    <p>Note that no effort was made to optimize the EPC as was done in standard LLRP. All EPCs, regardless of length, are reported using the EPCData parameter.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjTagInformation : public CParameter
{
  public:
    CImpinjTagInformation (void);
    ~CImpinjTagInformation (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CEPCData * m_pEPCData;

  public:
    /** @brief Get accessor functions for the LLRP EPCData sub-parameter */  
    inline CEPCData *
    getEPCData (void)
    {
        return m_pEPCData;
    }

    /** @brief Set accessor functions for the LLRP EPCData sub-parameter */  
    EResultCode
    setEPCData (
      CEPCData * pValue);


  protected:
    CImpinjTagDirection * m_pImpinjTagDirection;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjTagDirection sub-parameter */  
    inline CImpinjTagDirection *
    getImpinjTagDirection (void)
    {
        return m_pImpinjTagDirection;
    }

    /** @brief Set accessor functions for the LLRP ImpinjTagDirection sub-parameter */  
    EResultCode
    setImpinjTagDirection (
      CImpinjTagDirection * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjForkliftConfiguration for LLRP parameter ImpinjForkliftConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides the configuration for the forklift sensor board. While this parameter does not carry any specific configuration items, it encapsulates those custom parameters that do. This parameter may only be present in messages sent to Impinj reader model R1005. Other reader models will respond with an error upon receiving this parameter.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjForkliftConfiguration : public CParameter
{
  public:
    CImpinjForkliftConfiguration (void);
    ~CImpinjForkliftConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjForkliftHeightThreshold * m_pImpinjForkliftHeightThreshold;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjForkliftHeightThreshold sub-parameter */  
    inline CImpinjForkliftHeightThreshold *
    getImpinjForkliftHeightThreshold (void)
    {
        return m_pImpinjForkliftHeightThreshold;
    }

    /** @brief Set accessor functions for the LLRP ImpinjForkliftHeightThreshold sub-parameter */  
    EResultCode
    setImpinjForkliftHeightThreshold (
      CImpinjForkliftHeightThreshold * pValue);


  protected:
    CImpinjForkliftZeroMotionTimeThreshold * m_pImpinjForkliftZeroMotionTimeThreshold;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjForkliftZeroMotionTimeThreshold sub-parameter */  
    inline CImpinjForkliftZeroMotionTimeThreshold *
    getImpinjForkliftZeroMotionTimeThreshold (void)
    {
        return m_pImpinjForkliftZeroMotionTimeThreshold;
    }

    /** @brief Set accessor functions for the LLRP ImpinjForkliftZeroMotionTimeThreshold sub-parameter */  
    EResultCode
    setImpinjForkliftZeroMotionTimeThreshold (
      CImpinjForkliftZeroMotionTimeThreshold * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjForkliftHeightThreshold for LLRP parameter ImpinjForkliftHeightThreshold
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides the height threshold at which the Reader will issue a virtual GPI READER_EVENT_NOTIFICATION for the forklift arm height. When the forklift arm raises above the threshold value, the virtual height GPI will transition high (1), and when the forklift arm lowers below the threshold value, the virtual height GPI will transition low (0). For more information on the forklift virtual GPIs, please reference the Octane Forklift User's Guide.</p> 
 
        
    <p>The HeightThreshold field in this parameter is in centimeters. However, the Reader will round the value specified in this field down to the nearest setting supported by the hardware. For the R1005, the height resolution is in 5 cm increments. Thus, a setting of 50 cm is valid and will read back as 50 cm. A setting of 54 cm is also valid, but is rounded down to 50 cm and a subsequent read of this parameter will reflect the rounded value.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjForkliftHeightThreshold : public CParameter
{
  public:
    CImpinjForkliftHeightThreshold (void);
    ~CImpinjForkliftHeightThreshold (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_HeightThreshold;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdHeightThreshold;
//@}

    /** @brief Get accessor functions for the LLRP HeightThreshold field */
    inline llrp_u16_t
    getHeightThreshold (void)
    {
        return m_HeightThreshold;
    }

    /** @brief Set accessor functions for the LLRP HeightThreshold field */
    inline void
    setHeightThreshold (
      llrp_u16_t value)
    {
        m_HeightThreshold = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjForkliftZeroMotionTimeThreshold for LLRP parameter ImpinjForkliftZeroMotionTimeThreshold
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides the time threshold at which the Reader will issue a virtual GPI READER_EVENT_NOTIFICATION for forklift motion. When the forklift has been motionless for a time greater than the threshold value, the virtual motion GPI will transition low (0), and when the forklift moves again, the virtual motion GPI will transition high (1). For more information on the forklift virtual GPIs, please reference the Octane Forklift User's Guide.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjForkliftZeroMotionTimeThreshold : public CParameter
{
  public:
    CImpinjForkliftZeroMotionTimeThreshold (void);
    ~CImpinjForkliftZeroMotionTimeThreshold (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_ZeroMotionTimeThreshold;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdZeroMotionTimeThreshold;
//@}

    /** @brief Get accessor functions for the LLRP ZeroMotionTimeThreshold field */
    inline llrp_u16_t
    getZeroMotionTimeThreshold (void)
    {
        return m_ZeroMotionTimeThreshold;
    }

    /** @brief Set accessor functions for the LLRP ZeroMotionTimeThreshold field */
    inline void
    setZeroMotionTimeThreshold (
      llrp_u16_t value)
    {
        m_ZeroMotionTimeThreshold = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjForkliftCompanionBoardInfo for LLRP parameter ImpinjForkliftCompanionBoardInfo
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides the version information for the accompanying forklift companion board. This is only valid on Forklift model readers.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjForkliftCompanionBoardInfo : public CParameter
{
  public:
    CImpinjForkliftCompanionBoardInfo (void);
    ~CImpinjForkliftCompanionBoardInfo (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_BoardManufacturer;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBoardManufacturer;
//@}

    /** @brief Get accessor functions for the LLRP BoardManufacturer field */
    inline llrp_utf8v_t
    getBoardManufacturer (void)
    {
        return m_BoardManufacturer;
    }

    /** @brief Set accessor functions for the LLRP BoardManufacturer field */
    inline void
    setBoardManufacturer (
      llrp_utf8v_t value)
    {
        m_BoardManufacturer = value;
    }


  protected:
    llrp_u8v_t m_FirmwareVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFirmwareVersion;
//@}

    /** @brief Get accessor functions for the LLRP FirmwareVersion field */
    inline llrp_u8v_t
    getFirmwareVersion (void)
    {
        return m_FirmwareVersion;
    }

    /** @brief Set accessor functions for the LLRP FirmwareVersion field */
    inline void
    setFirmwareVersion (
      llrp_u8v_t value)
    {
        m_FirmwareVersion = value;
    }


  protected:
    llrp_u8v_t m_HardwareVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdHardwareVersion;
//@}

    /** @brief Get accessor functions for the LLRP HardwareVersion field */
    inline llrp_u8v_t
    getHardwareVersion (void)
    {
        return m_HardwareVersion;
    }

    /** @brief Set accessor functions for the LLRP HardwareVersion field */
    inline void
    setHardwareVersion (
      llrp_u8v_t value)
    {
        m_HardwareVersion = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGPIDebounceConfiguration for LLRP parameter ImpinjGPIDebounceConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter controls the GPI debounce timing. It is only available on Speedway Revolution readers. The GPIPortNum is the 1-based GPI number. Once a transition, rising or falling, is detected subsequent transitions are ignored for GPIDebounceTimerMSec milliseconds. GPIDebounceTimerMSec must be a multiple of 10ms. Setting GPIDebounceTimerMSec to zero effecitvely disables debounce. The debounced GPI affects triggered ROSpecs and GPIEvent reporting.</p> 
 
      <SMALL><i>Copyright 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjGPIDebounceConfiguration : public CParameter
{
  public:
    CImpinjGPIDebounceConfiguration (void);
    ~CImpinjGPIDebounceConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_GPIPortNum;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPIPortNum;
//@}

    /** @brief Get accessor functions for the LLRP GPIPortNum field */
    inline llrp_u16_t
    getGPIPortNum (void)
    {
        return m_GPIPortNum;
    }

    /** @brief Set accessor functions for the LLRP GPIPortNum field */
    inline void
    setGPIPortNum (
      llrp_u16_t value)
    {
        m_GPIPortNum = value;
    }


  protected:
    llrp_u32_t m_GPIDebounceTimerMSec;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPIDebounceTimerMSec;
//@}

    /** @brief Get accessor functions for the LLRP GPIDebounceTimerMSec field */
    inline llrp_u32_t
    getGPIDebounceTimerMSec (void)
    {
        return m_GPIDebounceTimerMSec;
    }

    /** @brief Set accessor functions for the LLRP GPIDebounceTimerMSec field */
    inline void
    setGPIDebounceTimerMSec (
      llrp_u32_t value)
    {
        m_GPIDebounceTimerMSec = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjReaderTemperature for LLRP parameter ImpinjReaderTemperature
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the current temperature of the Reader in degrees Celsius. The temperature that is reported is the internal temperature of the Reader, not the ambient temperature of the Reader surroundings. The temperature is accurate to within +- 2 degrees Celsius across all operating temperatures.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjReaderTemperature : public CParameter
{
  public:
    CImpinjReaderTemperature (void);
    ~CImpinjReaderTemperature (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_s16_t m_Temperature;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTemperature;
//@}

    /** @brief Get accessor functions for the LLRP Temperature field */
    inline llrp_s16_t
    getTemperature (void)
    {
        return m_Temperature;
    }

    /** @brief Set accessor functions for the LLRP Temperature field */
    inline void
    setTemperature (
      llrp_s16_t value)
    {
        m_Temperature = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLinkMonitorConfiguration for LLRP parameter ImpinjLinkMonitorConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the Reader to monitor LLRP link health using KEEPALIVE and KEEPALIVE_ACK messages. When disabled or unsupported, the Reader ignores KEEPALIVE_ACK messages entirely. When this parameter is enabled, if the Reader fails to receive LinkDownThreshold consecutive KEEPALIVE_ACK messages from the Client, the Reader will close the current connection. Note that this parameter must be configured in conjunction with the KeepaliveSpec LLRP parameter in the standard LLRP configuration. The frequency with which the Reader is configured to send KEEPALIVE messages, along with the threshold set in this parameter determines how long the Reader will tolerate missing KEEPALIVE_ACK messages. The Reader uses the LLRP MessageID field to correlate KEEPALIVE and KEEPALIVE_ACK messages. Clients must send the same MessageID when responding to reader KEEPALIVE requests.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjLinkMonitorConfiguration : public CParameter
{
  public:
    CImpinjLinkMonitorConfiguration (void);
    ~CImpinjLinkMonitorConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjLinkMonitorMode m_eLinkMonitorMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLinkMonitorMode;
//@}

    /** @brief Get accessor functions for the LLRP LinkMonitorMode field */
    inline EImpinjLinkMonitorMode
    getLinkMonitorMode (void)
    {
        return m_eLinkMonitorMode;
    }

    /** @brief Set accessor functions for the LLRP LinkMonitorMode field */
    inline void
    setLinkMonitorMode (
      EImpinjLinkMonitorMode value)
    {
        m_eLinkMonitorMode = value;
    }


  protected:
    llrp_u16_t m_LinkDownThreshold;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLinkDownThreshold;
//@}

    /** @brief Get accessor functions for the LLRP LinkDownThreshold field */
    inline llrp_u16_t
    getLinkDownThreshold (void)
    {
        return m_LinkDownThreshold;
    }

    /** @brief Set accessor functions for the LLRP LinkDownThreshold field */
    inline void
    setLinkDownThreshold (
      llrp_u16_t value)
    {
        m_LinkDownThreshold = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjReportBufferConfiguration for LLRP parameter ImpinjReportBufferConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures how the Reader buffers asynchronous reports sent to the Client. In Normal mode, the Reader buffers RO_ACCESS_REPORT messages internally for an optimal time period before transmission over the network. Response messages, KEEPALIVE messages, and READER_EVENT_NOTIFICATION messages are not affected, and are sent immediately. In Low_Latency mode, the Reader sends RO_ACCESS_REPORT messages as soon as they are available. In general, the default mode is well suited to most applications. Applications requiring immediate access to inventory reports may require Low_Latency mode, but users should first evaluate network and system load.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjReportBufferConfiguration : public CParameter
{
  public:
    CImpinjReportBufferConfiguration (void);
    ~CImpinjReportBufferConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjReportBufferMode m_eReportBufferMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdReportBufferMode;
//@}

    /** @brief Get accessor functions for the LLRP ReportBufferMode field */
    inline EImpinjReportBufferMode
    getReportBufferMode (void)
    {
        return m_eReportBufferMode;
    }

    /** @brief Set accessor functions for the LLRP ReportBufferMode field */
    inline void
    setReportBufferMode (
      EImpinjReportBufferMode value)
    {
        m_eReportBufferMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAccessSpecConfiguration for LLRP parameter ImpinjAccessSpecConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter allows for additional control over how the Reader executes AccessSpecs. This parameter does not contain any specific controls, but it encapsulates individual parameters that do. Each parameter contained within is optional, allowing for maximum flexibility for Client implementations.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
  
 **/

class CImpinjAccessSpecConfiguration : public CParameter
{
  public:
    CImpinjAccessSpecConfiguration (void);
    ~CImpinjAccessSpecConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjBlockWriteWordCount * m_pImpinjBlockWriteWordCount;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjBlockWriteWordCount sub-parameter */  
    inline CImpinjBlockWriteWordCount *
    getImpinjBlockWriteWordCount (void)
    {
        return m_pImpinjBlockWriteWordCount;
    }

    /** @brief Set accessor functions for the LLRP ImpinjBlockWriteWordCount sub-parameter */  
    EResultCode
    setImpinjBlockWriteWordCount (
      CImpinjBlockWriteWordCount * pValue);


  protected:
    CImpinjOpSpecRetryCount * m_pImpinjOpSpecRetryCount;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjOpSpecRetryCount sub-parameter */  
    inline CImpinjOpSpecRetryCount *
    getImpinjOpSpecRetryCount (void)
    {
        return m_pImpinjOpSpecRetryCount;
    }

    /** @brief Set accessor functions for the LLRP ImpinjOpSpecRetryCount sub-parameter */  
    EResultCode
    setImpinjOpSpecRetryCount (
      CImpinjOpSpecRetryCount * pValue);


  protected:
    CImpinjAccessSpecOrdering * m_pImpinjAccessSpecOrdering;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjAccessSpecOrdering sub-parameter */  
    inline CImpinjAccessSpecOrdering *
    getImpinjAccessSpecOrdering (void)
    {
        return m_pImpinjAccessSpecOrdering;
    }

    /** @brief Set accessor functions for the LLRP ImpinjAccessSpecOrdering sub-parameter */  
    EResultCode
    setImpinjAccessSpecOrdering (
      CImpinjAccessSpecOrdering * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjBlockWriteWordCount for LLRP parameter ImpinjBlockWriteWordCount
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the number of words sent at a time to a tag when processing a C1G2BlockWrite OpSpec. The LLRP C1G2BlockWrite parameter has a word vector containing the data to be written to a tag. Internally the Reader breaks this vector up into individual C1G2 BlockWrite commands. This parameter determines the number of words sent via each BlockWrite command. Note that it is the user's responsibility to ensure that the tag population supports the BlockWrite word count configured via this parameter. BlockWrite commands to tags that do not support the configured word count will fail. The Reader automatically aligns C1G2BlockWrite commands to appropriate boundaries and accounts for odd data lengths. The default word count is one.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjBlockWriteWordCount : public CParameter
{
  public:
    CImpinjBlockWriteWordCount (void);
    ~CImpinjBlockWriteWordCount (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_WordCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdWordCount;
//@}

    /** @brief Get accessor functions for the LLRP WordCount field */
    inline llrp_u16_t
    getWordCount (void)
    {
        return m_WordCount;
    }

    /** @brief Set accessor functions for the LLRP WordCount field */
    inline void
    setWordCount (
      llrp_u16_t value)
    {
        m_WordCount = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjBlockPermalock for LLRP parameter ImpinjBlockPermalock
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that configures the C1G2 BlockPermalock status of a particular memory bank from a tag. The AccessPassword field is the password required to move the tag into the secured state if needed.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjBlockPermalock : public CParameter
{
  public:
    CImpinjBlockPermalock (void);
    ~CImpinjBlockPermalock (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  protected:
    llrp_u2_t m_MB;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMB;
//@}

    /** @brief Get accessor functions for the LLRP MB field */
    inline llrp_u2_t
    getMB (void)
    {
        return m_MB;
    }

    /** @brief Set accessor functions for the LLRP MB field */
    inline void
    setMB (
      llrp_u2_t value)
    {
        m_MB = value;
    }


  protected:
    llrp_u16_t m_BlockPointer;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBlockPointer;
//@}

    /** @brief Get accessor functions for the LLRP BlockPointer field */
    inline llrp_u16_t
    getBlockPointer (void)
    {
        return m_BlockPointer;
    }

    /** @brief Set accessor functions for the LLRP BlockPointer field */
    inline void
    setBlockPointer (
      llrp_u16_t value)
    {
        m_BlockPointer = value;
    }


  protected:
    llrp_u16v_t m_BlockMask;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBlockMask;
//@}

    /** @brief Get accessor functions for the LLRP BlockMask field */
    inline llrp_u16v_t
    getBlockMask (void)
    {
        return m_BlockMask;
    }

    /** @brief Set accessor functions for the LLRP BlockMask field */
    inline void
    setBlockMask (
      llrp_u16v_t value)
    {
        m_BlockMask = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjBlockPermalockOpSpecResult for LLRP parameter ImpinjBlockPermalockOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjBlockPermalock OpSpec.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjBlockPermalockOpSpecResult : public CParameter
{
  public:
    CImpinjBlockPermalockOpSpecResult (void);
    ~CImpinjBlockPermalockOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjBlockPermalockResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjBlockPermalockResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjBlockPermalockResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGetBlockPermalockStatus for LLRP parameter ImpinjGetBlockPermalockStatus
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that retrieves the C1G2 BlockPermalock status of a particular memory bank from a tag. The AccessPassword field is the password required to move the tag into the secured state if needed.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjGetBlockPermalockStatus : public CParameter
{
  public:
    CImpinjGetBlockPermalockStatus (void);
    ~CImpinjGetBlockPermalockStatus (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  protected:
    llrp_u2_t m_MB;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMB;
//@}

    /** @brief Get accessor functions for the LLRP MB field */
    inline llrp_u2_t
    getMB (void)
    {
        return m_MB;
    }

    /** @brief Set accessor functions for the LLRP MB field */
    inline void
    setMB (
      llrp_u2_t value)
    {
        m_MB = value;
    }


  protected:
    llrp_u16_t m_BlockPointer;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBlockPointer;
//@}

    /** @brief Get accessor functions for the LLRP BlockPointer field */
    inline llrp_u16_t
    getBlockPointer (void)
    {
        return m_BlockPointer;
    }

    /** @brief Set accessor functions for the LLRP BlockPointer field */
    inline void
    setBlockPointer (
      llrp_u16_t value)
    {
        m_BlockPointer = value;
    }


  protected:
    llrp_u16_t m_BlockRange;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBlockRange;
//@}

    /** @brief Get accessor functions for the LLRP BlockRange field */
    inline llrp_u16_t
    getBlockRange (void)
    {
        return m_BlockRange;
    }

    /** @brief Set accessor functions for the LLRP BlockRange field */
    inline void
    setBlockRange (
      llrp_u16_t value)
    {
        m_BlockRange = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGetBlockPermalockStatusOpSpecResult for LLRP parameter ImpinjGetBlockPermalockStatusOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjGetBlockPermalockStatus OpSpec.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjGetBlockPermalockStatusOpSpecResult : public CParameter
{
  public:
    CImpinjGetBlockPermalockStatusOpSpecResult (void);
    ~CImpinjGetBlockPermalockStatusOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjGetBlockPermalockStatusResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjGetBlockPermalockStatusResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjGetBlockPermalockStatusResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u16v_t m_PermalockStatus;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPermalockStatus;
//@}

    /** @brief Get accessor functions for the LLRP PermalockStatus field */
    inline llrp_u16v_t
    getPermalockStatus (void)
    {
        return m_PermalockStatus;
    }

    /** @brief Set accessor functions for the LLRP PermalockStatus field */
    inline void
    setPermalockStatus (
      llrp_u16v_t value)
    {
        m_PermalockStatus = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSetQTConfig for LLRP parameter ImpinjSetQTConfig
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that sets the QT TechnologyTM configuration on Impinj Monza 4QT tags. For more information on the meaning of the fields within this parameter, and the use cases for this technology, please reference the Impinj Monza 4QT datasheet.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjSetQTConfig : public CParameter
{
  public:
    CImpinjSetQTConfig (void);
    ~CImpinjSetQTConfig (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  protected:
    EImpinjQTDataProfile m_eDataProfile;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdDataProfile;
//@}

    /** @brief Get accessor functions for the LLRP DataProfile field */
    inline EImpinjQTDataProfile
    getDataProfile (void)
    {
        return m_eDataProfile;
    }

    /** @brief Set accessor functions for the LLRP DataProfile field */
    inline void
    setDataProfile (
      EImpinjQTDataProfile value)
    {
        m_eDataProfile = value;
    }


  protected:
    EImpinjQTAccessRange m_eAccessRange;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessRange;
//@}

    /** @brief Get accessor functions for the LLRP AccessRange field */
    inline EImpinjQTAccessRange
    getAccessRange (void)
    {
        return m_eAccessRange;
    }

    /** @brief Set accessor functions for the LLRP AccessRange field */
    inline void
    setAccessRange (
      EImpinjQTAccessRange value)
    {
        m_eAccessRange = value;
    }


  protected:
    EImpinjQTPersistence m_ePersistence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPersistence;
//@}

    /** @brief Get accessor functions for the LLRP Persistence field */
    inline EImpinjQTPersistence
    getPersistence (void)
    {
        return m_ePersistence;
    }

    /** @brief Set accessor functions for the LLRP Persistence field */
    inline void
    setPersistence (
      EImpinjQTPersistence value)
    {
        m_ePersistence = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSetQTConfigOpSpecResult for LLRP parameter ImpinjSetQTConfigOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjSetQTConfig OpSpec.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjSetQTConfigOpSpecResult : public CParameter
{
  public:
    CImpinjSetQTConfigOpSpecResult (void);
    ~CImpinjSetQTConfigOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjSetQTConfigResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjSetQTConfigResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjSetQTConfigResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGetQTConfig for LLRP parameter ImpinjGetQTConfig
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that retrieves the QT TechnologyTM configuration on Impinj Monza 4QT tags. For more information on the meaning of the fields within this parameter, and the use cases for this technology, please reference the Impinj Monza 4QT datasheet.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjGetQTConfig : public CParameter
{
  public:
    CImpinjGetQTConfig (void);
    ~CImpinjGetQTConfig (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGetQTConfigOpSpecResult for LLRP parameter ImpinjGetQTConfigOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjGetQTConfig OpSpec.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
  
 **/

class CImpinjGetQTConfigOpSpecResult : public CParameter
{
  public:
    CImpinjGetQTConfigOpSpecResult (void);
    ~CImpinjGetQTConfigOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjGetQTConfigResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjGetQTConfigResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjGetQTConfigResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    EImpinjQTDataProfile m_eDataProfile;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdDataProfile;
//@}

    /** @brief Get accessor functions for the LLRP DataProfile field */
    inline EImpinjQTDataProfile
    getDataProfile (void)
    {
        return m_eDataProfile;
    }

    /** @brief Set accessor functions for the LLRP DataProfile field */
    inline void
    setDataProfile (
      EImpinjQTDataProfile value)
    {
        m_eDataProfile = value;
    }


  protected:
    EImpinjQTAccessRange m_eAccessRange;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessRange;
//@}

    /** @brief Get accessor functions for the LLRP AccessRange field */
    inline EImpinjQTAccessRange
    getAccessRange (void)
    {
        return m_eAccessRange;
    }

    /** @brief Set accessor functions for the LLRP AccessRange field */
    inline void
    setAccessRange (
      EImpinjQTAccessRange value)
    {
        m_eAccessRange = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTagReportContentSelector for LLRP parameter ImpinjTagReportContentSelector
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures additional parameters to be reported via the TagReportData parameter. Each optional parameter individually enables/configures a particular feature. Note that because of how the ROReportSpec parameter is handled (see section 3.1.15), if the optional parameter used to control a particular feature is absent, the feature is considered disabled. See the documentation for the actual parameters for full feature descriptions.</p> 
 
      <SMALL><i>Copyright 2011 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjTagReportContentSelector : public CParameter
{
  public:
    CImpinjTagReportContentSelector (void);
    ~CImpinjTagReportContentSelector (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjEnableSerializedTID * m_pImpinjEnableSerializedTID;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableSerializedTID sub-parameter */  
    inline CImpinjEnableSerializedTID *
    getImpinjEnableSerializedTID (void)
    {
        return m_pImpinjEnableSerializedTID;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableSerializedTID sub-parameter */  
    EResultCode
    setImpinjEnableSerializedTID (
      CImpinjEnableSerializedTID * pValue);


  protected:
    CImpinjEnableRFPhaseAngle * m_pImpinjEnableRFPhaseAngle;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableRFPhaseAngle sub-parameter */  
    inline CImpinjEnableRFPhaseAngle *
    getImpinjEnableRFPhaseAngle (void)
    {
        return m_pImpinjEnableRFPhaseAngle;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableRFPhaseAngle sub-parameter */  
    EResultCode
    setImpinjEnableRFPhaseAngle (
      CImpinjEnableRFPhaseAngle * pValue);


  protected:
    CImpinjEnablePeakRSSI * m_pImpinjEnablePeakRSSI;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnablePeakRSSI sub-parameter */  
    inline CImpinjEnablePeakRSSI *
    getImpinjEnablePeakRSSI (void)
    {
        return m_pImpinjEnablePeakRSSI;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnablePeakRSSI sub-parameter */  
    EResultCode
    setImpinjEnablePeakRSSI (
      CImpinjEnablePeakRSSI * pValue);


  protected:
    CImpinjEnableGPSCoordinates * m_pImpinjEnableGPSCoordinates;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableGPSCoordinates sub-parameter */  
    inline CImpinjEnableGPSCoordinates *
    getImpinjEnableGPSCoordinates (void)
    {
        return m_pImpinjEnableGPSCoordinates;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableGPSCoordinates sub-parameter */  
    EResultCode
    setImpinjEnableGPSCoordinates (
      CImpinjEnableGPSCoordinates * pValue);


  protected:
    CImpinjEnableOptimizedRead * m_pImpinjEnableOptimizedRead;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableOptimizedRead sub-parameter */  
    inline CImpinjEnableOptimizedRead *
    getImpinjEnableOptimizedRead (void)
    {
        return m_pImpinjEnableOptimizedRead;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableOptimizedRead sub-parameter */  
    EResultCode
    setImpinjEnableOptimizedRead (
      CImpinjEnableOptimizedRead * pValue);


  protected:
    CImpinjEnableRFDopplerFrequency * m_pImpinjEnableRFDopplerFrequency;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableRFDopplerFrequency sub-parameter */  
    inline CImpinjEnableRFDopplerFrequency *
    getImpinjEnableRFDopplerFrequency (void)
    {
        return m_pImpinjEnableRFDopplerFrequency;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableRFDopplerFrequency sub-parameter */  
    EResultCode
    setImpinjEnableRFDopplerFrequency (
      CImpinjEnableRFDopplerFrequency * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableSerializedTID for LLRP parameter ImpinjEnableSerializedTID
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjSerializedTID feature.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnableSerializedTID : public CParameter
{
  public:
    CImpinjEnableSerializedTID (void);
    ~CImpinjEnableSerializedTID (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjSerializedTIDMode m_eSerializedTIDMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSerializedTIDMode;
//@}

    /** @brief Get accessor functions for the LLRP SerializedTIDMode field */
    inline EImpinjSerializedTIDMode
    getSerializedTIDMode (void)
    {
        return m_eSerializedTIDMode;
    }

    /** @brief Set accessor functions for the LLRP SerializedTIDMode field */
    inline void
    setSerializedTIDMode (
      EImpinjSerializedTIDMode value)
    {
        m_eSerializedTIDMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableRFPhaseAngle for LLRP parameter ImpinjEnableRFPhaseAngle
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjRFPhaseAngle feature.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnableRFPhaseAngle : public CParameter
{
  public:
    CImpinjEnableRFPhaseAngle (void);
    ~CImpinjEnableRFPhaseAngle (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjRFPhaseAngleMode m_eRFPhaseAngleMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRFPhaseAngleMode;
//@}

    /** @brief Get accessor functions for the LLRP RFPhaseAngleMode field */
    inline EImpinjRFPhaseAngleMode
    getRFPhaseAngleMode (void)
    {
        return m_eRFPhaseAngleMode;
    }

    /** @brief Set accessor functions for the LLRP RFPhaseAngleMode field */
    inline void
    setRFPhaseAngleMode (
      EImpinjRFPhaseAngleMode value)
    {
        m_eRFPhaseAngleMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnablePeakRSSI for LLRP parameter ImpinjEnablePeakRSSI
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjPeakRSSI feature.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnablePeakRSSI : public CParameter
{
  public:
    CImpinjEnablePeakRSSI (void);
    ~CImpinjEnablePeakRSSI (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjPeakRSSIMode m_ePeakRSSIMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPeakRSSIMode;
//@}

    /** @brief Get accessor functions for the LLRP PeakRSSIMode field */
    inline EImpinjPeakRSSIMode
    getPeakRSSIMode (void)
    {
        return m_ePeakRSSIMode;
    }

    /** @brief Set accessor functions for the LLRP PeakRSSIMode field */
    inline void
    setPeakRSSIMode (
      EImpinjPeakRSSIMode value)
    {
        m_ePeakRSSIMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableGPSCoordinates for LLRP parameter ImpinjEnableGPSCoordinates
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjGPSCoordinates feature.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnableGPSCoordinates : public CParameter
{
  public:
    CImpinjEnableGPSCoordinates (void);
    ~CImpinjEnableGPSCoordinates (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjGPSCoordinatesMode m_eGPSCoordinatesMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPSCoordinatesMode;
//@}

    /** @brief Get accessor functions for the LLRP GPSCoordinatesMode field */
    inline EImpinjGPSCoordinatesMode
    getGPSCoordinatesMode (void)
    {
        return m_eGPSCoordinatesMode;
    }

    /** @brief Set accessor functions for the LLRP GPSCoordinatesMode field */
    inline void
    setGPSCoordinatesMode (
      EImpinjGPSCoordinatesMode value)
    {
        m_eGPSCoordinatesMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSerializedTID for LLRP parameter ImpinjSerializedTID
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the content of the tag TID memory bank for tags supporting the ImpinjSerializedTID feature. Only the portion of the TID memory bank supported by the feature will be included and may vary from tag to tag. Tags inventoried that do not support the feature will omit this parameter from the TagReportData within the RO_ACCESS_REPORT.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjSerializedTID : public CParameter
{
  public:
    CImpinjSerializedTID (void);
    ~CImpinjSerializedTID (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16v_t m_TID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTID;
//@}

    /** @brief Get accessor functions for the LLRP TID field */
    inline llrp_u16v_t
    getTID (void)
    {
        return m_TID;
    }

    /** @brief Set accessor functions for the LLRP TID field */
    inline void
    setTID (
      llrp_u16v_t value)
    {
        m_TID = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjRFPhaseAngle for LLRP parameter ImpinjRFPhaseAngle
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the RF phase angle of a singulated tag during normal inventory (EPC backscatter). The PhaseAngle field is a scaled, 12-bit value, with 0 representing 0 degrees (0 radians), and 4096 representing 360 degrees (2 pi radians). If report accumulation is enabled via the ROReportSpec for the currently executing ROSpec, the RF phase angle reported via this parameter is the phase angle of the last tag singulation. No accumulation of phase data is available.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjRFPhaseAngle : public CParameter
{
  public:
    CImpinjRFPhaseAngle (void);
    ~CImpinjRFPhaseAngle (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_PhaseAngle;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPhaseAngle;
//@}

    /** @brief Get accessor functions for the LLRP PhaseAngle field */
    inline llrp_u16_t
    getPhaseAngle (void)
    {
        return m_PhaseAngle;
    }

    /** @brief Set accessor functions for the LLRP PhaseAngle field */
    inline void
    setPhaseAngle (
      llrp_u16_t value)
    {
        m_PhaseAngle = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjPeakRSSI for LLRP parameter ImpinjPeakRSSI
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the peak RSSI of the tag during the current reporting interval. Standard LLRP reports peak RSSI in whole dBm units. This parameter provides the same RSSI value in more precise dBm x 100 units. Applications requiring precise RSSI calculations may enable this parameter instead of (or in addition to) the PeakRSSI LLRP parameter.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjPeakRSSI : public CParameter
{
  public:
    CImpinjPeakRSSI (void);
    ~CImpinjPeakRSSI (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_s16_t m_RSSI;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRSSI;
//@}

    /** @brief Get accessor functions for the LLRP RSSI field */
    inline llrp_s16_t
    getRSSI (void)
    {
        return m_RSSI;
    }

    /** @brief Set accessor functions for the LLRP RSSI field */
    inline void
    setRSSI (
      llrp_s16_t value)
    {
        m_RSSI = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGPSCoordinates for LLRP parameter ImpinjGPSCoordinates
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the GPS coordinates of the reader when the tag was singulated. If the GPS receiver has not acquired a location fix, this parameter will not be included in the report. If LLRP accumulation is enabled, the reported coordinates correspond to the last known reader location when the tag was singulated. The GPS coordinates are reported in signed micro-degrees, so a minor conversion is required to convert the reported value to typically used GPS coordinate formats.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjGPSCoordinates : public CParameter
{
  public:
    CImpinjGPSCoordinates (void);
    ~CImpinjGPSCoordinates (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_s32_t m_Latitude;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLatitude;
//@}

    /** @brief Get accessor functions for the LLRP Latitude field */
    inline llrp_s32_t
    getLatitude (void)
    {
        return m_Latitude;
    }

    /** @brief Set accessor functions for the LLRP Latitude field */
    inline void
    setLatitude (
      llrp_s32_t value)
    {
        m_Latitude = value;
    }


  protected:
    llrp_s32_t m_Longitude;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLongitude;
//@}

    /** @brief Get accessor functions for the LLRP Longitude field */
    inline llrp_s32_t
    getLongitude (void)
    {
        return m_Longitude;
    }

    /** @brief Set accessor functions for the LLRP Longitude field */
    inline void
    setLongitude (
      llrp_s32_t value)
    {
        m_Longitude = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLoopSpec for LLRP parameter ImpinjLoopSpec
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter allows the Reader to loop execution of AISpecs within a ROSpec. If included within the list of SpecParameters in a ROSpec, it must be the last SpecParameter present. There also must be at least one AISpec preceding the ImpinjLoopSpec parameter. If either condition is not met, the Reader will respond with an error.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjLoopSpec : public CParameter
{
  public:
    CImpinjLoopSpec (void);
    ~CImpinjLoopSpec (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32_t m_LoopCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLoopCount;
//@}

    /** @brief Get accessor functions for the LLRP LoopCount field */
    inline llrp_u32_t
    getLoopCount (void)
    {
        return m_LoopCount;
    }

    /** @brief Set accessor functions for the LLRP LoopCount field */
    inline void
    setLoopCount (
      llrp_u32_t value)
    {
        m_LoopCount = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGPSNMEASentences for LLRP parameter ImpinjGPSNMEASentences
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter encapsulates the various NMEA (National Marine Electronic Association) sentences supported by the GPS device attached to the Reader. The Sierra Wireless PinPoint XT cellular modem supports GGA and RMC sentences. For more information regarding these sentences, visit the NMEA website.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjGPSNMEASentences : public CParameter
{
  public:
    CImpinjGPSNMEASentences (void);
    ~CImpinjGPSNMEASentences (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjGGASentence * m_pImpinjGGASentence;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjGGASentence sub-parameter */  
    inline CImpinjGGASentence *
    getImpinjGGASentence (void)
    {
        return m_pImpinjGGASentence;
    }

    /** @brief Set accessor functions for the LLRP ImpinjGGASentence sub-parameter */  
    EResultCode
    setImpinjGGASentence (
      CImpinjGGASentence * pValue);


  protected:
    CImpinjRMCSentence * m_pImpinjRMCSentence;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjRMCSentence sub-parameter */  
    inline CImpinjRMCSentence *
    getImpinjRMCSentence (void)
    {
        return m_pImpinjRMCSentence;
    }

    /** @brief Set accessor functions for the LLRP ImpinjRMCSentence sub-parameter */  
    EResultCode
    setImpinjRMCSentence (
      CImpinjRMCSentence * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGGASentence for LLRP parameter ImpinjGGASentence
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter contains the current GPS information of the Reader's location as reported in NMEA GGA sentence format. If the GPS device has not acquired a location fix, the string is reported empty.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjGGASentence : public CParameter
{
  public:
    CImpinjGGASentence (void);
    ~CImpinjGGASentence (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_GGASentence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGGASentence;
//@}

    /** @brief Get accessor functions for the LLRP GGASentence field */
    inline llrp_utf8v_t
    getGGASentence (void)
    {
        return m_GGASentence;
    }

    /** @brief Set accessor functions for the LLRP GGASentence field */
    inline void
    setGGASentence (
      llrp_utf8v_t value)
    {
        m_GGASentence = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjRMCSentence for LLRP parameter ImpinjRMCSentence
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter contains the current GPS information of the Reader's location as reported in NMEA RMC sentence format. If the GPS device has not acquired a location fix, the string is reported empty.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjRMCSentence : public CParameter
{
  public:
    CImpinjRMCSentence (void);
    ~CImpinjRMCSentence (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_RMCSentence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRMCSentence;
//@}

    /** @brief Get accessor functions for the LLRP RMCSentence field */
    inline llrp_utf8v_t
    getRMCSentence (void)
    {
        return m_RMCSentence;
    }

    /** @brief Set accessor functions for the LLRP RMCSentence field */
    inline void
    setRMCSentence (
      llrp_utf8v_t value)
    {
        m_RMCSentence = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjOpSpecRetryCount for LLRP parameter ImpinjOpSpecRetryCount
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the number of times an OpSpec operation will be automatically retried by the reader before failure is declared. The reader intelligently chooses which types of failures to retry. For example, the reader will not retry if the tag indicates that the operation failed due to a memory locked or memory overrun, operations that have no chance of succeeding. However, if the operation failed due to transient errors, such as CRC errors due to interference, the reader will automatically retry RetryCount attempts before failure is declared. LLRP dictates that OpSpec failure be declared once a single operation has failed, thus the default RetryCount is 0.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjOpSpecRetryCount : public CParameter
{
  public:
    CImpinjOpSpecRetryCount (void);
    ~CImpinjOpSpecRetryCount (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_RetryCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRetryCount;
//@}

    /** @brief Get accessor functions for the LLRP RetryCount field */
    inline llrp_u16_t
    getRetryCount (void)
    {
        return m_RetryCount;
    }

    /** @brief Set accessor functions for the LLRP RetryCount field */
    inline void
    setRetryCount (
      llrp_u16_t value)
    {
        m_RetryCount = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAdvancedGPOConfiguration for LLRP parameter ImpinjAdvancedGPOConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter controls the advanced GPO feature of Speedway Revolution readers. When set to Normal (default) the GPO is set via the regular LLRP SET_READER_CONFIG message. When set to Pulsed, the GPO changes state based on the SET_READER_CONFIG message, and will change to the opposite state after GPOPulseDurationMSec milliseconds. When set to Reader_Operational_Status, LLRP_Connection_Status, or Reader_Inventory_Status, the GPO status acts like a Boolean value. When high (true, 1), the corresponding status is true, meaning the reader is operating, has a LLRP connection, or is inventorying. When low (false, 0), the opposite is the case.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
  
 **/

class CImpinjAdvancedGPOConfiguration : public CParameter
{
  public:
    CImpinjAdvancedGPOConfiguration (void);
    ~CImpinjAdvancedGPOConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_GPOPortNum;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPOPortNum;
//@}

    /** @brief Get accessor functions for the LLRP GPOPortNum field */
    inline llrp_u16_t
    getGPOPortNum (void)
    {
        return m_GPOPortNum;
    }

    /** @brief Set accessor functions for the LLRP GPOPortNum field */
    inline void
    setGPOPortNum (
      llrp_u16_t value)
    {
        m_GPOPortNum = value;
    }


  protected:
    EImpinjAdvancedGPOMode m_eGPOMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPOMode;
//@}

    /** @brief Get accessor functions for the LLRP GPOMode field */
    inline EImpinjAdvancedGPOMode
    getGPOMode (void)
    {
        return m_eGPOMode;
    }

    /** @brief Set accessor functions for the LLRP GPOMode field */
    inline void
    setGPOMode (
      EImpinjAdvancedGPOMode value)
    {
        m_eGPOMode = value;
    }


  protected:
    llrp_u32_t m_GPOPulseDurationMSec;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPOPulseDurationMSec;
//@}

    /** @brief Get accessor functions for the LLRP GPOPulseDurationMSec field */
    inline llrp_u32_t
    getGPOPulseDurationMSec (void)
    {
        return m_GPOPulseDurationMSec;
    }

    /** @brief Set accessor functions for the LLRP GPOPulseDurationMSec field */
    inline void
    setGPOPulseDurationMSec (
      llrp_u32_t value)
    {
        m_GPOPulseDurationMSec = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableOptimizedRead for LLRP parameter ImpinjEnableOptimizedRead
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjOptimizedRead feature. ImpinjOptimizedRead allows for the reporting of additional tag memory content during an inventory without the use of AccessSpecs. The reader optimizes the execution of these reads for improved overall inventory performance.</p> 
 
        
    <p>The memory bank and location of the reads are specified using the C1G2Read parameter, just as they are when using AccessSpecs. Similarly, the results of the reads are reported using the C1G2ReadOpSpecResult parameter within the TagReportData parameter. Reads issued using the ImpinjOptimizedRead feature are reported the same as reads using AccessSpecs and thus users should ensure the OpSpecIDs used for the operations are unique.</p> 
 
        
    <p>Users may configure up to two optimized read operations. One departure from the AccessSpec model is optimized reads are always attempted, even if the first read fails. So for example, if the first read results in a failure due to a memory overrun, the second read will still be attempted. Thus, if there are two optimized reads configured it is guaranteed that there will be two C1G2ReadOpSpecResult parameters in each TagReportData parameter generated by the reader.</p> 
 
        
    <p>Because this feature was designed for optimized inventory performance, any retries configured via the ImpinjOpSpecRetryCount parameter do not apply.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjEnableOptimizedRead : public CParameter
{
  public:
    CImpinjEnableOptimizedRead (void);
    ~CImpinjEnableOptimizedRead (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjOptimizedReadMode m_eOptimizedReadMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOptimizedReadMode;
//@}

    /** @brief Get accessor functions for the LLRP OptimizedReadMode field */
    inline EImpinjOptimizedReadMode
    getOptimizedReadMode (void)
    {
        return m_eOptimizedReadMode;
    }

    /** @brief Set accessor functions for the LLRP OptimizedReadMode field */
    inline void
    setOptimizedReadMode (
      EImpinjOptimizedReadMode value)
    {
        m_eOptimizedReadMode = value;
    }


  
  protected:
    std::list<CC1G2Read *> m_listC1G2Read;

  public:
     /** @brief  Returns the first element of the C1G2Read sub-parameter list*/  
    inline std::list<CC1G2Read *>::iterator
    beginC1G2Read (void)
    {
        return m_listC1G2Read.begin();
    }

     /** @brief  Returns the last element of the C1G2Read sub-parameter list*/  
    inline std::list<CC1G2Read *>::iterator
    endC1G2Read (void)
    {
        return m_listC1G2Read.end();
    }

     /** @brief  Clears the LLRP C1G2Read sub-parameter list*/  
    inline void
    clearC1G2Read (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listC1G2Read);
    }

     /** @brief  Count of the LLRP C1G2Read sub-parameter list*/  
    inline int
    countC1G2Read (void)
    {
        return (int) (m_listC1G2Read.size());
    }

    EResultCode
     /** @brief  Add a C1G2Read to the LLRP sub-parameter list*/  
    addC1G2Read (
      CC1G2Read * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAccessSpecOrdering for LLRP parameter ImpinjAccessSpecOrdering
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures how AccessSpecs are added on Speedway Revolution readers. AccessSpecs are executed based on the order in which they were added to the reader. By default, the reader adds AccessSpecs in a first-in-first-out (FIFO) order, compliant with the LLRP specification. When the OrderingMode is configured to Ascending, the reader will add new AccessSpecs in ascending order based on the AccessSpecID. If the ordering mode is changed from FIFO to Ascending while AccessSpecs are already configured, the existing AccessSpecs will be sorted.</p> 
 
        
    <p>This parameter exists within the ImpinjAccessSpecConfiguration parameter which may be present in either a SET_READER_CONFIG message, or an ADD_ACCESSSPEC message. However, because this is a global parameter and does not logically apply in a per-AccessSpec context, this parameter may only be included in a SET_READER_CONFIG message. If this parameter is present in the context of an individual AccessSpec, the message will be rejected by the reader.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjAccessSpecOrdering : public CParameter
{
  public:
    CImpinjAccessSpecOrdering (void);
    ~CImpinjAccessSpecOrdering (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjAccessSpecOrderingMode m_eOrderingMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOrderingMode;
//@}

    /** @brief Get accessor functions for the LLRP OrderingMode field */
    inline EImpinjAccessSpecOrderingMode
    getOrderingMode (void)
    {
        return m_eOrderingMode;
    }

    /** @brief Set accessor functions for the LLRP OrderingMode field */
    inline void
    setOrderingMode (
      EImpinjAccessSpecOrderingMode value)
    {
        m_eOrderingMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableRFDopplerFrequency for LLRP parameter ImpinjEnableRFDopplerFrequency
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjRFDopplerFrequency feature.</p> 
 
      <SMALL><i>Copyright 2011 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnableRFDopplerFrequency : public CParameter
{
  public:
    CImpinjEnableRFDopplerFrequency (void);
    ~CImpinjEnableRFDopplerFrequency (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjRFDopplerFrequencyMode m_eRFDopplerFrequencyMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRFDopplerFrequencyMode;
//@}

    /** @brief Get accessor functions for the LLRP RFDopplerFrequencyMode field */
    inline EImpinjRFDopplerFrequencyMode
    getRFDopplerFrequencyMode (void)
    {
        return m_eRFDopplerFrequencyMode;
    }

    /** @brief Set accessor functions for the LLRP RFDopplerFrequencyMode field */
    inline void
    setRFDopplerFrequencyMode (
      EImpinjRFDopplerFrequencyMode value)
    {
        m_eRFDopplerFrequencyMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjRFDopplerFrequency for LLRP parameter ImpinjRFDopplerFrequency
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the Doppler shift for a singulated tag. Doppler shift is the total phase rotation across the packet divided by the accumulation time. The DopplerFrequency field is a signed value with units in Hz. The upper twelve bits are the integer portion, the lower four bits are fractional. If report accumulation is enabled via the ROReportSpec for the currently executing ROSpec, the RF Doppler frequency reported via this parameter is the Doppler frequency of the last tag singulation. No accumulation of Doppler frequency data is available.</p> 
 
      <SMALL><i>Copyright 2011 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjRFDopplerFrequency : public CParameter
{
  public:
    CImpinjRFDopplerFrequency (void);
    ~CImpinjRFDopplerFrequency (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_s16_t m_DopplerFrequency;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdDopplerFrequency;
//@}

    /** @brief Get accessor functions for the LLRP DopplerFrequency field */
    inline llrp_s16_t
    getDopplerFrequency (void)
    {
        return m_DopplerFrequency;
    }

    /** @brief Set accessor functions for the LLRP DopplerFrequency field */
    inline void
    setDopplerFrequency (
      llrp_s16_t value)
    {
        m_DopplerFrequency = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSTPCapabilities for LLRP parameter ImpinjSTPCapabilities
 **
 
    
    
    
    
  
 **/

class CImpinjSTPCapabilities : public CParameter
{
  public:
    CImpinjSTPCapabilities (void);
    ~CImpinjSTPCapabilities (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjEncodeStatus m_eEncodeStatus;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeStatus;
//@}

    /** @brief Get accessor functions for the LLRP EncodeStatus field */
    inline EImpinjEncodeStatus
    getEncodeStatus (void)
    {
        return m_eEncodeStatus;
    }

    /** @brief Set accessor functions for the LLRP EncodeStatus field */
    inline void
    setEncodeStatus (
      EImpinjEncodeStatus value)
    {
        m_eEncodeStatus = value;
    }


  
  protected:
    std::list<CImpinjTagIC *> m_listImpinjTagIC;

  public:
     /** @brief  Returns the first element of the ImpinjTagIC sub-parameter list*/  
    inline std::list<CImpinjTagIC *>::iterator
    beginImpinjTagIC (void)
    {
        return m_listImpinjTagIC.begin();
    }

     /** @brief  Returns the last element of the ImpinjTagIC sub-parameter list*/  
    inline std::list<CImpinjTagIC *>::iterator
    endImpinjTagIC (void)
    {
        return m_listImpinjTagIC.end();
    }

     /** @brief  Clears the LLRP ImpinjTagIC sub-parameter list*/  
    inline void
    clearImpinjTagIC (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listImpinjTagIC);
    }

     /** @brief  Count of the LLRP ImpinjTagIC sub-parameter list*/  
    inline int
    countImpinjTagIC (void)
    {
        return (int) (m_listImpinjTagIC.size());
    }

    EResultCode
     /** @brief  Add a ImpinjTagIC to the LLRP sub-parameter list*/  
    addImpinjTagIC (
      CImpinjTagIC * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTagIC for LLRP parameter ImpinjTagIC
 **
 
    
    
  
 **/

class CImpinjTagIC : public CParameter
{
  public:
    CImpinjTagIC (void);
    ~CImpinjTagIC (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjTagICType m_eType;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdType;
//@}

    /** @brief Get accessor functions for the LLRP Type field */
    inline EImpinjTagICType
    getType (void)
    {
        return m_eType;
    }

    /** @brief Set accessor functions for the LLRP Type field */
    inline void
    setType (
      EImpinjTagICType value)
    {
        m_eType = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeDataCache for LLRP parameter ImpinjEncodeDataCache
 **
 
    
    
    
    
  
 **/

class CImpinjEncodeDataCache : public CParameter
{
  public:
    CImpinjEncodeDataCache (void);
    ~CImpinjEncodeDataCache (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32_t m_EncodeDataCacheID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeDataCacheID;
//@}

    /** @brief Get accessor functions for the LLRP EncodeDataCacheID field */
    inline llrp_u32_t
    getEncodeDataCacheID (void)
    {
        return m_EncodeDataCacheID;
    }

    /** @brief Set accessor functions for the LLRP EncodeDataCacheID field */
    inline void
    setEncodeDataCacheID (
      llrp_u32_t value)
    {
        m_EncodeDataCacheID = value;
    }


  protected:
    llrp_u16_t m_LowEncodeDataThreshold;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLowEncodeDataThreshold;
//@}

    /** @brief Get accessor functions for the LLRP LowEncodeDataThreshold field */
    inline llrp_u16_t
    getLowEncodeDataThreshold (void)
    {
        return m_LowEncodeDataThreshold;
    }

    /** @brief Set accessor functions for the LLRP LowEncodeDataThreshold field */
    inline void
    setLowEncodeDataThreshold (
      llrp_u16_t value)
    {
        m_LowEncodeDataThreshold = value;
    }


  
  protected:
    CImpinjEncodeDataDefaults * m_pImpinjEncodeDataDefaults;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataDefaults sub-parameter */  
    inline CImpinjEncodeDataDefaults *
    getImpinjEncodeDataDefaults (void)
    {
        return m_pImpinjEncodeDataDefaults;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataDefaults sub-parameter */  
    EResultCode
    setImpinjEncodeDataDefaults (
      CImpinjEncodeDataDefaults * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeDataDefaults for LLRP parameter ImpinjEncodeDataDefaults
 **
 
    
    
    
    
    
    
    
    
  
 **/

class CImpinjEncodeDataDefaults : public CParameter
{
  public:
    CImpinjEncodeDataDefaults (void);
    ~CImpinjEncodeDataDefaults (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjEncodeDataPCBits * m_pImpinjEncodeDataPCBits;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataPCBits sub-parameter */  
    inline CImpinjEncodeDataPCBits *
    getImpinjEncodeDataPCBits (void)
    {
        return m_pImpinjEncodeDataPCBits;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataPCBits sub-parameter */  
    EResultCode
    setImpinjEncodeDataPCBits (
      CImpinjEncodeDataPCBits * pValue);


  protected:
    CImpinjEncodeDataAccessPassword * m_pImpinjEncodeDataAccessPassword;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataAccessPassword sub-parameter */  
    inline CImpinjEncodeDataAccessPassword *
    getImpinjEncodeDataAccessPassword (void)
    {
        return m_pImpinjEncodeDataAccessPassword;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataAccessPassword sub-parameter */  
    EResultCode
    setImpinjEncodeDataAccessPassword (
      CImpinjEncodeDataAccessPassword * pValue);


  protected:
    CImpinjEncodeDataKillPassword * m_pImpinjEncodeDataKillPassword;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataKillPassword sub-parameter */  
    inline CImpinjEncodeDataKillPassword *
    getImpinjEncodeDataKillPassword (void)
    {
        return m_pImpinjEncodeDataKillPassword;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataKillPassword sub-parameter */  
    EResultCode
    setImpinjEncodeDataKillPassword (
      CImpinjEncodeDataKillPassword * pValue);


  protected:
    CImpinjEncodeDataUserMemory * m_pImpinjEncodeDataUserMemory;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataUserMemory sub-parameter */  
    inline CImpinjEncodeDataUserMemory *
    getImpinjEncodeDataUserMemory (void)
    {
        return m_pImpinjEncodeDataUserMemory;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataUserMemory sub-parameter */  
    EResultCode
    setImpinjEncodeDataUserMemory (
      CImpinjEncodeDataUserMemory * pValue);


  protected:
    CImpinjEncodeDataAlternateEPC * m_pImpinjEncodeDataAlternateEPC;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataAlternateEPC sub-parameter */  
    inline CImpinjEncodeDataAlternateEPC *
    getImpinjEncodeDataAlternateEPC (void)
    {
        return m_pImpinjEncodeDataAlternateEPC;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataAlternateEPC sub-parameter */  
    EResultCode
    setImpinjEncodeDataAlternateEPC (
      CImpinjEncodeDataAlternateEPC * pValue);


  protected:
    CImpinjEncodeDataQTConfig * m_pImpinjEncodeDataQTConfig;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataQTConfig sub-parameter */  
    inline CImpinjEncodeDataQTConfig *
    getImpinjEncodeDataQTConfig (void)
    {
        return m_pImpinjEncodeDataQTConfig;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataQTConfig sub-parameter */  
    EResultCode
    setImpinjEncodeDataQTConfig (
      CImpinjEncodeDataQTConfig * pValue);


  protected:
    CImpinjEncodeDataLockConfig * m_pImpinjEncodeDataLockConfig;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataLockConfig sub-parameter */  
    inline CImpinjEncodeDataLockConfig *
    getImpinjEncodeDataLockConfig (void)
    {
        return m_pImpinjEncodeDataLockConfig;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataLockConfig sub-parameter */  
    EResultCode
    setImpinjEncodeDataLockConfig (
      CImpinjEncodeDataLockConfig * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeData for LLRP parameter ImpinjEncodeData
 **
 
    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjEncodeData : public CParameter
{
  public:
    CImpinjEncodeData (void);
    ~CImpinjEncodeData (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1v_t m_EPC;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEPC;
//@}

    /** @brief Get accessor functions for the LLRP EPC field */
    inline llrp_u1v_t
    getEPC (void)
    {
        return m_EPC;
    }

    /** @brief Set accessor functions for the LLRP EPC field */
    inline void
    setEPC (
      llrp_u1v_t value)
    {
        m_EPC = value;
    }


  
  protected:
    CImpinjEncodeDataPCBits * m_pImpinjEncodeDataPCBits;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataPCBits sub-parameter */  
    inline CImpinjEncodeDataPCBits *
    getImpinjEncodeDataPCBits (void)
    {
        return m_pImpinjEncodeDataPCBits;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataPCBits sub-parameter */  
    EResultCode
    setImpinjEncodeDataPCBits (
      CImpinjEncodeDataPCBits * pValue);


  protected:
    CImpinjEncodeDataAccessPassword * m_pImpinjEncodeDataAccessPassword;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataAccessPassword sub-parameter */  
    inline CImpinjEncodeDataAccessPassword *
    getImpinjEncodeDataAccessPassword (void)
    {
        return m_pImpinjEncodeDataAccessPassword;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataAccessPassword sub-parameter */  
    EResultCode
    setImpinjEncodeDataAccessPassword (
      CImpinjEncodeDataAccessPassword * pValue);


  protected:
    CImpinjEncodeDataKillPassword * m_pImpinjEncodeDataKillPassword;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataKillPassword sub-parameter */  
    inline CImpinjEncodeDataKillPassword *
    getImpinjEncodeDataKillPassword (void)
    {
        return m_pImpinjEncodeDataKillPassword;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataKillPassword sub-parameter */  
    EResultCode
    setImpinjEncodeDataKillPassword (
      CImpinjEncodeDataKillPassword * pValue);


  protected:
    CImpinjEncodeDataUserMemory * m_pImpinjEncodeDataUserMemory;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataUserMemory sub-parameter */  
    inline CImpinjEncodeDataUserMemory *
    getImpinjEncodeDataUserMemory (void)
    {
        return m_pImpinjEncodeDataUserMemory;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataUserMemory sub-parameter */  
    EResultCode
    setImpinjEncodeDataUserMemory (
      CImpinjEncodeDataUserMemory * pValue);


  protected:
    CImpinjEncodeDataAlternateEPC * m_pImpinjEncodeDataAlternateEPC;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataAlternateEPC sub-parameter */  
    inline CImpinjEncodeDataAlternateEPC *
    getImpinjEncodeDataAlternateEPC (void)
    {
        return m_pImpinjEncodeDataAlternateEPC;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataAlternateEPC sub-parameter */  
    EResultCode
    setImpinjEncodeDataAlternateEPC (
      CImpinjEncodeDataAlternateEPC * pValue);


  protected:
    CImpinjEncodeDataQTConfig * m_pImpinjEncodeDataQTConfig;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataQTConfig sub-parameter */  
    inline CImpinjEncodeDataQTConfig *
    getImpinjEncodeDataQTConfig (void)
    {
        return m_pImpinjEncodeDataQTConfig;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataQTConfig sub-parameter */  
    EResultCode
    setImpinjEncodeDataQTConfig (
      CImpinjEncodeDataQTConfig * pValue);


  protected:
    CImpinjEncodeDataLockConfig * m_pImpinjEncodeDataLockConfig;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataLockConfig sub-parameter */  
    inline CImpinjEncodeDataLockConfig *
    getImpinjEncodeDataLockConfig (void)
    {
        return m_pImpinjEncodeDataLockConfig;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataLockConfig sub-parameter */  
    EResultCode
    setImpinjEncodeDataLockConfig (
      CImpinjEncodeDataLockConfig * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeDataPCBits for LLRP parameter ImpinjEncodeDataPCBits
 **
 
    
    
  
 **/

class CImpinjEncodeDataPCBits : public CParameter
{
  public:
    CImpinjEncodeDataPCBits (void);
    ~CImpinjEncodeDataPCBits (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_PCBits;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPCBits;
//@}

    /** @brief Get accessor functions for the LLRP PCBits field */
    inline llrp_u16_t
    getPCBits (void)
    {
        return m_PCBits;
    }

    /** @brief Set accessor functions for the LLRP PCBits field */
    inline void
    setPCBits (
      llrp_u16_t value)
    {
        m_PCBits = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeDataAccessPassword for LLRP parameter ImpinjEncodeDataAccessPassword
 **
 
    
    
  
 **/

class CImpinjEncodeDataAccessPassword : public CParameter
{
  public:
    CImpinjEncodeDataAccessPassword (void);
    ~CImpinjEncodeDataAccessPassword (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeDataKillPassword for LLRP parameter ImpinjEncodeDataKillPassword
 **
 
    
    
  
 **/

class CImpinjEncodeDataKillPassword : public CParameter
{
  public:
    CImpinjEncodeDataKillPassword (void);
    ~CImpinjEncodeDataKillPassword (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32_t m_KillPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdKillPassword;
//@}

    /** @brief Get accessor functions for the LLRP KillPassword field */
    inline llrp_u32_t
    getKillPassword (void)
    {
        return m_KillPassword;
    }

    /** @brief Set accessor functions for the LLRP KillPassword field */
    inline void
    setKillPassword (
      llrp_u32_t value)
    {
        m_KillPassword = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeDataUserMemory for LLRP parameter ImpinjEncodeDataUserMemory
 **
 
    
    
    
  
 **/

class CImpinjEncodeDataUserMemory : public CParameter
{
  public:
    CImpinjEncodeDataUserMemory (void);
    ~CImpinjEncodeDataUserMemory (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_WordPointer;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdWordPointer;
//@}

    /** @brief Get accessor functions for the LLRP WordPointer field */
    inline llrp_u16_t
    getWordPointer (void)
    {
        return m_WordPointer;
    }

    /** @brief Set accessor functions for the LLRP WordPointer field */
    inline void
    setWordPointer (
      llrp_u16_t value)
    {
        m_WordPointer = value;
    }


  protected:
    llrp_u16v_t m_WriteData;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdWriteData;
//@}

    /** @brief Get accessor functions for the LLRP WriteData field */
    inline llrp_u16v_t
    getWriteData (void)
    {
        return m_WriteData;
    }

    /** @brief Set accessor functions for the LLRP WriteData field */
    inline void
    setWriteData (
      llrp_u16v_t value)
    {
        m_WriteData = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeDataAlternateEPC for LLRP parameter ImpinjEncodeDataAlternateEPC
 **
 
    
    
  
 **/

class CImpinjEncodeDataAlternateEPC : public CParameter
{
  public:
    CImpinjEncodeDataAlternateEPC (void);
    ~CImpinjEncodeDataAlternateEPC (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16v_t m_AlternateEPC;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAlternateEPC;
//@}

    /** @brief Get accessor functions for the LLRP AlternateEPC field */
    inline llrp_u16v_t
    getAlternateEPC (void)
    {
        return m_AlternateEPC;
    }

    /** @brief Set accessor functions for the LLRP AlternateEPC field */
    inline void
    setAlternateEPC (
      llrp_u16v_t value)
    {
        m_AlternateEPC = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeDataQTConfig for LLRP parameter ImpinjEncodeDataQTConfig
 **
 
    
    
    
    
  
 **/

class CImpinjEncodeDataQTConfig : public CParameter
{
  public:
    CImpinjEncodeDataQTConfig (void);
    ~CImpinjEncodeDataQTConfig (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjQTDataProfile m_eDataProfile;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdDataProfile;
//@}

    /** @brief Get accessor functions for the LLRP DataProfile field */
    inline EImpinjQTDataProfile
    getDataProfile (void)
    {
        return m_eDataProfile;
    }

    /** @brief Set accessor functions for the LLRP DataProfile field */
    inline void
    setDataProfile (
      EImpinjQTDataProfile value)
    {
        m_eDataProfile = value;
    }


  protected:
    EImpinjQTAccessRange m_eAccessRange;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessRange;
//@}

    /** @brief Get accessor functions for the LLRP AccessRange field */
    inline EImpinjQTAccessRange
    getAccessRange (void)
    {
        return m_eAccessRange;
    }

    /** @brief Set accessor functions for the LLRP AccessRange field */
    inline void
    setAccessRange (
      EImpinjQTAccessRange value)
    {
        m_eAccessRange = value;
    }


  protected:
    EImpinjQTPersistence m_ePersistence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPersistence;
//@}

    /** @brief Get accessor functions for the LLRP Persistence field */
    inline EImpinjQTPersistence
    getPersistence (void)
    {
        return m_ePersistence;
    }

    /** @brief Set accessor functions for the LLRP Persistence field */
    inline void
    setPersistence (
      EImpinjQTPersistence value)
    {
        m_ePersistence = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeDataLockConfig for LLRP parameter ImpinjEncodeDataLockConfig
 **
 
    
    
    
    
    
    
    
    
  
 **/

class CImpinjEncodeDataLockConfig : public CParameter
{
  public:
    CImpinjEncodeDataLockConfig (void);
    ~CImpinjEncodeDataLockConfig (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjLockPrivilege m_eAccessPasswordLock;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPasswordLock;
//@}

    /** @brief Get accessor functions for the LLRP AccessPasswordLock field */
    inline EImpinjLockPrivilege
    getAccessPasswordLock (void)
    {
        return m_eAccessPasswordLock;
    }

    /** @brief Set accessor functions for the LLRP AccessPasswordLock field */
    inline void
    setAccessPasswordLock (
      EImpinjLockPrivilege value)
    {
        m_eAccessPasswordLock = value;
    }


  protected:
    EImpinjLockPrivilege m_eKillPasswordLock;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdKillPasswordLock;
//@}

    /** @brief Get accessor functions for the LLRP KillPasswordLock field */
    inline EImpinjLockPrivilege
    getKillPasswordLock (void)
    {
        return m_eKillPasswordLock;
    }

    /** @brief Set accessor functions for the LLRP KillPasswordLock field */
    inline void
    setKillPasswordLock (
      EImpinjLockPrivilege value)
    {
        m_eKillPasswordLock = value;
    }


  protected:
    EImpinjLockPrivilege m_eEPCMemoryLock;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEPCMemoryLock;
//@}

    /** @brief Get accessor functions for the LLRP EPCMemoryLock field */
    inline EImpinjLockPrivilege
    getEPCMemoryLock (void)
    {
        return m_eEPCMemoryLock;
    }

    /** @brief Set accessor functions for the LLRP EPCMemoryLock field */
    inline void
    setEPCMemoryLock (
      EImpinjLockPrivilege value)
    {
        m_eEPCMemoryLock = value;
    }


  protected:
    EImpinjLockPrivilege m_eTIDMemoryLock;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTIDMemoryLock;
//@}

    /** @brief Get accessor functions for the LLRP TIDMemoryLock field */
    inline EImpinjLockPrivilege
    getTIDMemoryLock (void)
    {
        return m_eTIDMemoryLock;
    }

    /** @brief Set accessor functions for the LLRP TIDMemoryLock field */
    inline void
    setTIDMemoryLock (
      EImpinjLockPrivilege value)
    {
        m_eTIDMemoryLock = value;
    }


  protected:
    EImpinjLockPrivilege m_eUserMemoryLock;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdUserMemoryLock;
//@}

    /** @brief Get accessor functions for the LLRP UserMemoryLock field */
    inline EImpinjLockPrivilege
    getUserMemoryLock (void)
    {
        return m_eUserMemoryLock;
    }

    /** @brief Set accessor functions for the LLRP UserMemoryLock field */
    inline void
    setUserMemoryLock (
      EImpinjLockPrivilege value)
    {
        m_eUserMemoryLock = value;
    }


  protected:
    llrp_u16_t m_UserBlockPermalockPointer;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdUserBlockPermalockPointer;
//@}

    /** @brief Get accessor functions for the LLRP UserBlockPermalockPointer field */
    inline llrp_u16_t
    getUserBlockPermalockPointer (void)
    {
        return m_UserBlockPermalockPointer;
    }

    /** @brief Set accessor functions for the LLRP UserBlockPermalockPointer field */
    inline void
    setUserBlockPermalockPointer (
      llrp_u16_t value)
    {
        m_UserBlockPermalockPointer = value;
    }


  protected:
    llrp_u16v_t m_UserBlockPermalockMask;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdUserBlockPermalockMask;
//@}

    /** @brief Get accessor functions for the LLRP UserBlockPermalockMask field */
    inline llrp_u16v_t
    getUserBlockPermalockMask (void)
    {
        return m_UserBlockPermalockMask;
    }

    /** @brief Set accessor functions for the LLRP UserBlockPermalockMask field */
    inline void
    setUserBlockPermalockMask (
      llrp_u16v_t value)
    {
        m_UserBlockPermalockMask = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLowEncodeDataThresholdEvent for LLRP parameter ImpinjLowEncodeDataThresholdEvent
 **
 
    
    
    
    
    
  
 **/

class CImpinjLowEncodeDataThresholdEvent : public CParameter
{
  public:
    CImpinjLowEncodeDataThresholdEvent (void);
    ~CImpinjLowEncodeDataThresholdEvent (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32_t m_EncodeDataCacheID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeDataCacheID;
//@}

    /** @brief Get accessor functions for the LLRP EncodeDataCacheID field */
    inline llrp_u32_t
    getEncodeDataCacheID (void)
    {
        return m_EncodeDataCacheID;
    }

    /** @brief Set accessor functions for the LLRP EncodeDataCacheID field */
    inline void
    setEncodeDataCacheID (
      llrp_u32_t value)
    {
        m_EncodeDataCacheID = value;
    }


  protected:
    llrp_u16_t m_Threshold;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdThreshold;
//@}

    /** @brief Get accessor functions for the LLRP Threshold field */
    inline llrp_u16_t
    getThreshold (void)
    {
        return m_Threshold;
    }

    /** @brief Set accessor functions for the LLRP Threshold field */
    inline void
    setThreshold (
      llrp_u16_t value)
    {
        m_Threshold = value;
    }


  protected:
    llrp_u16_t m_Count;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdCount;
//@}

    /** @brief Get accessor functions for the LLRP Count field */
    inline llrp_u16_t
    getCount (void)
    {
        return m_Count;
    }

    /** @brief Set accessor functions for the LLRP Count field */
    inline void
    setCount (
      llrp_u16_t value)
    {
        m_Count = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeOpSpec for LLRP parameter ImpinjEncodeOpSpec
 **
 
    
    
    
    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjEncodeOpSpec : public CParameter
{
  public:
    CImpinjEncodeOpSpec (void);
    ~CImpinjEncodeOpSpec (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  protected:
    llrp_u32_t m_EncodeDataCacheID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeDataCacheID;
//@}

    /** @brief Get accessor functions for the LLRP EncodeDataCacheID field */
    inline llrp_u32_t
    getEncodeDataCacheID (void)
    {
        return m_EncodeDataCacheID;
    }

    /** @brief Set accessor functions for the LLRP EncodeDataCacheID field */
    inline void
    setEncodeDataCacheID (
      llrp_u32_t value)
    {
        m_EncodeDataCacheID = value;
    }


  protected:
    EImpinjEncodeMode m_eMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMode;
//@}

    /** @brief Get accessor functions for the LLRP Mode field */
    inline EImpinjEncodeMode
    getMode (void)
    {
        return m_eMode;
    }

    /** @brief Set accessor functions for the LLRP Mode field */
    inline void
    setMode (
      EImpinjEncodeMode value)
    {
        m_eMode = value;
    }


  protected:
    EImpinjTagICType m_eTagIC;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTagIC;
//@}

    /** @brief Get accessor functions for the LLRP TagIC field */
    inline EImpinjTagICType
    getTagIC (void)
    {
        return m_eTagIC;
    }

    /** @brief Set accessor functions for the LLRP TagIC field */
    inline void
    setTagIC (
      EImpinjTagICType value)
    {
        m_eTagIC = value;
    }


  protected:
    llrp_u32_t m_EncodeCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeCount;
//@}

    /** @brief Get accessor functions for the LLRP EncodeCount field */
    inline llrp_u32_t
    getEncodeCount (void)
    {
        return m_EncodeCount;
    }

    /** @brief Set accessor functions for the LLRP EncodeCount field */
    inline void
    setEncodeCount (
      llrp_u32_t value)
    {
        m_EncodeCount = value;
    }


  protected:
    llrp_u16_t m_TagsInViewCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTagsInViewCount;
//@}

    /** @brief Get accessor functions for the LLRP TagsInViewCount field */
    inline llrp_u16_t
    getTagsInViewCount (void)
    {
        return m_TagsInViewCount;
    }

    /** @brief Set accessor functions for the LLRP TagsInViewCount field */
    inline void
    setTagsInViewCount (
      llrp_u16_t value)
    {
        m_TagsInViewCount = value;
    }


  protected:
    llrp_u16_t m_EncodeReportCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeReportCount;
//@}

    /** @brief Get accessor functions for the LLRP EncodeReportCount field */
    inline llrp_u16_t
    getEncodeReportCount (void)
    {
        return m_EncodeReportCount;
    }

    /** @brief Set accessor functions for the LLRP EncodeReportCount field */
    inline void
    setEncodeReportCount (
      llrp_u16_t value)
    {
        m_EncodeReportCount = value;
    }


  protected:
    llrp_u16_t m_TagInViewTimeout;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTagInViewTimeout;
//@}

    /** @brief Get accessor functions for the LLRP TagInViewTimeout field */
    inline llrp_u16_t
    getTagInViewTimeout (void)
    {
        return m_TagInViewTimeout;
    }

    /** @brief Set accessor functions for the LLRP TagInViewTimeout field */
    inline void
    setTagInViewTimeout (
      llrp_u16_t value)
    {
        m_TagInViewTimeout = value;
    }


  
  protected:
    std::list<CImpinjOpSpecGPOPulse *> m_listImpinjOpSpecGPOPulse;

  public:
     /** @brief  Returns the first element of the ImpinjOpSpecGPOPulse sub-parameter list*/  
    inline std::list<CImpinjOpSpecGPOPulse *>::iterator
    beginImpinjOpSpecGPOPulse (void)
    {
        return m_listImpinjOpSpecGPOPulse.begin();
    }

     /** @brief  Returns the last element of the ImpinjOpSpecGPOPulse sub-parameter list*/  
    inline std::list<CImpinjOpSpecGPOPulse *>::iterator
    endImpinjOpSpecGPOPulse (void)
    {
        return m_listImpinjOpSpecGPOPulse.end();
    }

     /** @brief  Clears the LLRP ImpinjOpSpecGPOPulse sub-parameter list*/  
    inline void
    clearImpinjOpSpecGPOPulse (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listImpinjOpSpecGPOPulse);
    }

     /** @brief  Count of the LLRP ImpinjOpSpecGPOPulse sub-parameter list*/  
    inline int
    countImpinjOpSpecGPOPulse (void)
    {
        return (int) (m_listImpinjOpSpecGPOPulse.size());
    }

    EResultCode
     /** @brief  Add a ImpinjOpSpecGPOPulse to the LLRP sub-parameter list*/  
    addImpinjOpSpecGPOPulse (
      CImpinjOpSpecGPOPulse * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjOpSpecGPOPulse for LLRP parameter ImpinjOpSpecGPOPulse
 **
 
    
    
    
    
    
    
  
 **/

class CImpinjOpSpecGPOPulse : public CParameter
{
  public:
    CImpinjOpSpecGPOPulse (void);
    ~CImpinjOpSpecGPOPulse (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjOpSpecAction m_eOpSpecAction;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecAction;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecAction field */
    inline EImpinjOpSpecAction
    getOpSpecAction (void)
    {
        return m_eOpSpecAction;
    }

    /** @brief Set accessor functions for the LLRP OpSpecAction field */
    inline void
    setOpSpecAction (
      EImpinjOpSpecAction value)
    {
        m_eOpSpecAction = value;
    }


  protected:
    llrp_u16_t m_GPOPortNumber;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPOPortNumber;
//@}

    /** @brief Get accessor functions for the LLRP GPOPortNumber field */
    inline llrp_u16_t
    getGPOPortNumber (void)
    {
        return m_GPOPortNumber;
    }

    /** @brief Set accessor functions for the LLRP GPOPortNumber field */
    inline void
    setGPOPortNumber (
      llrp_u16_t value)
    {
        m_GPOPortNumber = value;
    }


  protected:
    llrp_u1_t m_GPOData;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPOData;
//@}

    /** @brief Get accessor functions for the LLRP GPOData field */
    inline llrp_u1_t
    getGPOData (void)
    {
        return m_GPOData;
    }

    /** @brief Set accessor functions for the LLRP GPOData field */
    inline void
    setGPOData (
      llrp_u1_t value)
    {
        m_GPOData = value;
    }


  protected:
    llrp_u16_t m_GPOPulseDurationMSec;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPOPulseDurationMSec;
//@}

    /** @brief Get accessor functions for the LLRP GPOPulseDurationMSec field */
    inline llrp_u16_t
    getGPOPulseDurationMSec (void)
    {
        return m_GPOPulseDurationMSec;
    }

    /** @brief Set accessor functions for the LLRP GPOPulseDurationMSec field */
    inline void
    setGPOPulseDurationMSec (
      llrp_u16_t value)
    {
        m_GPOPulseDurationMSec = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeReportData for LLRP parameter ImpinjEncodeReportData
 **
 
    
    
    
    
    
  
 **/

class CImpinjEncodeReportData : public CParameter
{
  public:
    CImpinjEncodeReportData (void);
    ~CImpinjEncodeReportData (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32_t m_AccessSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessSpecID;
//@}

    /** @brief Get accessor functions for the LLRP AccessSpecID field */
    inline llrp_u32_t
    getAccessSpecID (void)
    {
        return m_AccessSpecID;
    }

    /** @brief Set accessor functions for the LLRP AccessSpecID field */
    inline void
    setAccessSpecID (
      llrp_u32_t value)
    {
        m_AccessSpecID = value;
    }


  
  protected:
    CImpinjEncodeOpSpecResult * m_pImpinjEncodeOpSpecResult;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeOpSpecResult sub-parameter */  
    inline CImpinjEncodeOpSpecResult *
    getImpinjEncodeOpSpecResult (void)
    {
        return m_pImpinjEncodeOpSpecResult;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeOpSpecResult sub-parameter */  
    EResultCode
    setImpinjEncodeOpSpecResult (
      CImpinjEncodeOpSpecResult * pValue);


  protected:
    std::list<CImpinjEncodeDataResult *> m_listImpinjEncodeDataResult;

  public:
     /** @brief  Returns the first element of the ImpinjEncodeDataResult sub-parameter list*/  
    inline std::list<CImpinjEncodeDataResult *>::iterator
    beginImpinjEncodeDataResult (void)
    {
        return m_listImpinjEncodeDataResult.begin();
    }

     /** @brief  Returns the last element of the ImpinjEncodeDataResult sub-parameter list*/  
    inline std::list<CImpinjEncodeDataResult *>::iterator
    endImpinjEncodeDataResult (void)
    {
        return m_listImpinjEncodeDataResult.end();
    }

     /** @brief  Clears the LLRP ImpinjEncodeDataResult sub-parameter list*/  
    inline void
    clearImpinjEncodeDataResult (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listImpinjEncodeDataResult);
    }

     /** @brief  Count of the LLRP ImpinjEncodeDataResult sub-parameter list*/  
    inline int
    countImpinjEncodeDataResult (void)
    {
        return (int) (m_listImpinjEncodeDataResult.size());
    }

    EResultCode
     /** @brief  Add a ImpinjEncodeDataResult to the LLRP sub-parameter list*/  
    addImpinjEncodeDataResult (
      CImpinjEncodeDataResult * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeOpSpecResult for LLRP parameter ImpinjEncodeOpSpecResult
 **
 
    
    
    
    
    
    
  
 **/

class CImpinjEncodeOpSpecResult : public CParameter
{
  public:
    CImpinjEncodeOpSpecResult (void);
    ~CImpinjEncodeOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    EImpinjEncodeResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjEncodeResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjEncodeResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u64_t m_ElapsedTime;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdElapsedTime;
//@}

    /** @brief Get accessor functions for the LLRP ElapsedTime field */
    inline llrp_u64_t
    getElapsedTime (void)
    {
        return m_ElapsedTime;
    }

    /** @brief Set accessor functions for the LLRP ElapsedTime field */
    inline void
    setElapsedTime (
      llrp_u64_t value)
    {
        m_ElapsedTime = value;
    }


  protected:
    llrp_u32_t m_AttemptCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAttemptCount;
//@}

    /** @brief Get accessor functions for the LLRP AttemptCount field */
    inline llrp_u32_t
    getAttemptCount (void)
    {
        return m_AttemptCount;
    }

    /** @brief Set accessor functions for the LLRP AttemptCount field */
    inline void
    setAttemptCount (
      llrp_u32_t value)
    {
        m_AttemptCount = value;
    }


  protected:
    llrp_u32_t m_SuccessCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSuccessCount;
//@}

    /** @brief Get accessor functions for the LLRP SuccessCount field */
    inline llrp_u32_t
    getSuccessCount (void)
    {
        return m_SuccessCount;
    }

    /** @brief Set accessor functions for the LLRP SuccessCount field */
    inline void
    setSuccessCount (
      llrp_u32_t value)
    {
        m_SuccessCount = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeDataResult for LLRP parameter ImpinjEncodeDataResult
 **
 
    
    
    
    
    
  
 **/

class CImpinjEncodeDataResult : public CParameter
{
  public:
    CImpinjEncodeDataResult (void);
    ~CImpinjEncodeDataResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    EImpinjEncodeDataResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjEncodeDataResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjEncodeDataResultType value)
    {
        m_eResult = value;
    }


  
  protected:
    CEPCData * m_pEPCData;

  public:
    /** @brief Get accessor functions for the LLRP EPCData sub-parameter */  
    inline CEPCData *
    getEPCData (void)
    {
        return m_pEPCData;
    }

    /** @brief Set accessor functions for the LLRP EPCData sub-parameter */  
    EResultCode
    setEPCData (
      CEPCData * pValue);


  protected:
    CImpinjEncodeDataDetailedResult * m_pImpinjEncodeDataDetailedResult;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEncodeDataDetailedResult sub-parameter */  
    inline CImpinjEncodeDataDetailedResult *
    getImpinjEncodeDataDetailedResult (void)
    {
        return m_pImpinjEncodeDataDetailedResult;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEncodeDataDetailedResult sub-parameter */  
    EResultCode
    setImpinjEncodeDataDetailedResult (
      CImpinjEncodeDataDetailedResult * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEncodeDataDetailedResult for LLRP parameter ImpinjEncodeDataDetailedResult
 **
 
    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjEncodeDataDetailedResult : public CParameter
{
  public:
    CImpinjEncodeDataDetailedResult (void);
    ~CImpinjEncodeDataDetailedResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjEncodeDataResultType m_eEncodeEPCResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeEPCResult;
//@}

    /** @brief Get accessor functions for the LLRP EncodeEPCResult field */
    inline EImpinjEncodeDataResultType
    getEncodeEPCResult (void)
    {
        return m_eEncodeEPCResult;
    }

    /** @brief Set accessor functions for the LLRP EncodeEPCResult field */
    inline void
    setEncodeEPCResult (
      EImpinjEncodeDataResultType value)
    {
        m_eEncodeEPCResult = value;
    }


  protected:
    EImpinjEncodeDataResultType m_eEncodePCBitsResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodePCBitsResult;
//@}

    /** @brief Get accessor functions for the LLRP EncodePCBitsResult field */
    inline EImpinjEncodeDataResultType
    getEncodePCBitsResult (void)
    {
        return m_eEncodePCBitsResult;
    }

    /** @brief Set accessor functions for the LLRP EncodePCBitsResult field */
    inline void
    setEncodePCBitsResult (
      EImpinjEncodeDataResultType value)
    {
        m_eEncodePCBitsResult = value;
    }


  protected:
    EImpinjEncodeDataResultType m_eEncodeAccessPasswordResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeAccessPasswordResult;
//@}

    /** @brief Get accessor functions for the LLRP EncodeAccessPasswordResult field */
    inline EImpinjEncodeDataResultType
    getEncodeAccessPasswordResult (void)
    {
        return m_eEncodeAccessPasswordResult;
    }

    /** @brief Set accessor functions for the LLRP EncodeAccessPasswordResult field */
    inline void
    setEncodeAccessPasswordResult (
      EImpinjEncodeDataResultType value)
    {
        m_eEncodeAccessPasswordResult = value;
    }


  protected:
    EImpinjEncodeDataResultType m_eEncodeKillPasswordResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeKillPasswordResult;
//@}

    /** @brief Get accessor functions for the LLRP EncodeKillPasswordResult field */
    inline EImpinjEncodeDataResultType
    getEncodeKillPasswordResult (void)
    {
        return m_eEncodeKillPasswordResult;
    }

    /** @brief Set accessor functions for the LLRP EncodeKillPasswordResult field */
    inline void
    setEncodeKillPasswordResult (
      EImpinjEncodeDataResultType value)
    {
        m_eEncodeKillPasswordResult = value;
    }


  protected:
    EImpinjEncodeDataResultType m_eEncodeUserMemoryResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeUserMemoryResult;
//@}

    /** @brief Get accessor functions for the LLRP EncodeUserMemoryResult field */
    inline EImpinjEncodeDataResultType
    getEncodeUserMemoryResult (void)
    {
        return m_eEncodeUserMemoryResult;
    }

    /** @brief Set accessor functions for the LLRP EncodeUserMemoryResult field */
    inline void
    setEncodeUserMemoryResult (
      EImpinjEncodeDataResultType value)
    {
        m_eEncodeUserMemoryResult = value;
    }


  protected:
    EImpinjEncodeDataResultType m_eEncodeAlternateEPCResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeAlternateEPCResult;
//@}

    /** @brief Get accessor functions for the LLRP EncodeAlternateEPCResult field */
    inline EImpinjEncodeDataResultType
    getEncodeAlternateEPCResult (void)
    {
        return m_eEncodeAlternateEPCResult;
    }

    /** @brief Set accessor functions for the LLRP EncodeAlternateEPCResult field */
    inline void
    setEncodeAlternateEPCResult (
      EImpinjEncodeDataResultType value)
    {
        m_eEncodeAlternateEPCResult = value;
    }


  protected:
    EImpinjEncodeDataResultType m_eEncodeQTConfigResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeQTConfigResult;
//@}

    /** @brief Get accessor functions for the LLRP EncodeQTConfigResult field */
    inline EImpinjEncodeDataResultType
    getEncodeQTConfigResult (void)
    {
        return m_eEncodeQTConfigResult;
    }

    /** @brief Set accessor functions for the LLRP EncodeQTConfigResult field */
    inline void
    setEncodeQTConfigResult (
      EImpinjEncodeDataResultType value)
    {
        m_eEncodeQTConfigResult = value;
    }


  protected:
    EImpinjEncodeDataResultType m_eEncodeLockConfigResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEncodeLockConfigResult;
//@}

    /** @brief Get accessor functions for the LLRP EncodeLockConfigResult field */
    inline EImpinjEncodeDataResultType
    getEncodeLockConfigResult (void)
    {
        return m_eEncodeLockConfigResult;
    }

    /** @brief Set accessor functions for the LLRP EncodeLockConfigResult field */
    inline void
    setEncodeLockConfigResult (
      EImpinjEncodeDataResultType value)
    {
        m_eEncodeLockConfigResult = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjArrayVersion for LLRP parameter ImpinjArrayVersion
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter contains Array specific hardware and version information that is considered additional to ImpinjDetailedVersion information.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
  
 **/

class CImpinjArrayVersion : public CParameter
{
  public:
    CImpinjArrayVersion (void);
    ~CImpinjArrayVersion (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_SerialNumber;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSerialNumber;
//@}

    /** @brief Get accessor functions for the LLRP SerialNumber field */
    inline llrp_utf8v_t
    getSerialNumber (void)
    {
        return m_SerialNumber;
    }

    /** @brief Set accessor functions for the LLRP SerialNumber field */
    inline void
    setSerialNumber (
      llrp_utf8v_t value)
    {
        m_SerialNumber = value;
    }


  protected:
    llrp_utf8v_t m_FirmwareVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFirmwareVersion;
//@}

    /** @brief Get accessor functions for the LLRP FirmwareVersion field */
    inline llrp_utf8v_t
    getFirmwareVersion (void)
    {
        return m_FirmwareVersion;
    }

    /** @brief Set accessor functions for the LLRP FirmwareVersion field */
    inline void
    setFirmwareVersion (
      llrp_utf8v_t value)
    {
        m_FirmwareVersion = value;
    }


  protected:
    llrp_utf8v_t m_PCBAVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPCBAVersion;
//@}

    /** @brief Get accessor functions for the LLRP PCBAVersion field */
    inline llrp_utf8v_t
    getPCBAVersion (void)
    {
        return m_PCBAVersion;
    }

    /** @brief Set accessor functions for the LLRP PCBAVersion field */
    inline void
    setPCBAVersion (
      llrp_utf8v_t value)
    {
        m_PCBAVersion = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjArrayCapabilities for LLRP parameter ImpinjArrayCapabilities
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to report Array-specific capabilities.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
  
 **/

class CImpinjArrayCapabilities : public CParameter
{
  public:
    CImpinjArrayCapabilities (void);
    ~CImpinjArrayCapabilities (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16v_t m_RolesSupported;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRolesSupported;
//@}

    /** @brief Get accessor functions for the LLRP RolesSupported field */
    inline llrp_u16v_t
    getRolesSupported (void)
    {
        return m_RolesSupported;
    }

    /** @brief Set accessor functions for the LLRP RolesSupported field */
    inline void
    setRolesSupported (
      llrp_u16v_t value)
    {
        m_RolesSupported = value;
    }


  protected:
    llrp_u32_t m_MaxNumSectors;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMaxNumSectors;
//@}

    /** @brief Get accessor functions for the LLRP MaxNumSectors field */
    inline llrp_u32_t
    getMaxNumSectors (void)
    {
        return m_MaxNumSectors;
    }

    /** @brief Set accessor functions for the LLRP MaxNumSectors field */
    inline void
    setMaxNumSectors (
      llrp_u32_t value)
    {
        m_MaxNumSectors = value;
    }


  protected:
    llrp_u1_t m_CanDoSectorDetection;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdCanDoSectorDetection;
//@}

    /** @brief Get accessor functions for the LLRP CanDoSectorDetection field */
    inline llrp_u1_t
    getCanDoSectorDetection (void)
    {
        return m_CanDoSectorDetection;
    }

    /** @brief Set accessor functions for the LLRP CanDoSectorDetection field */
    inline void
    setCanDoSectorDetection (
      llrp_u1_t value)
    {
        m_CanDoSectorDetection = value;
    }


  protected:
    llrp_u1_t m_CanDoTransitionDetection;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdCanDoTransitionDetection;
//@}

    /** @brief Get accessor functions for the LLRP CanDoTransitionDetection field */
    inline llrp_u1_t
    getCanDoTransitionDetection (void)
    {
        return m_CanDoTransitionDetection;
    }

    /** @brief Set accessor functions for the LLRP CanDoTransitionDetection field */
    inline void
    setCanDoTransitionDetection (
      llrp_u1_t value)
    {
        m_CanDoTransitionDetection = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTiltConfiguration for LLRP parameter ImpinjTiltConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to get the Array physical orientation from the onboard sensor.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
  
 **/

class CImpinjTiltConfiguration : public CParameter
{
  public:
    CImpinjTiltConfiguration (void);
    ~CImpinjTiltConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_s32_t m_XAxis;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdXAxis;
//@}

    /** @brief Get accessor functions for the LLRP XAxis field */
    inline llrp_s32_t
    getXAxis (void)
    {
        return m_XAxis;
    }

    /** @brief Set accessor functions for the LLRP XAxis field */
    inline void
    setXAxis (
      llrp_s32_t value)
    {
        m_XAxis = value;
    }


  protected:
    llrp_s32_t m_YAxis;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdYAxis;
//@}

    /** @brief Get accessor functions for the LLRP YAxis field */
    inline llrp_s32_t
    getYAxis (void)
    {
        return m_YAxis;
    }

    /** @brief Set accessor functions for the LLRP YAxis field */
    inline void
    setYAxis (
      llrp_s32_t value)
    {
        m_YAxis = value;
    }


  protected:
    llrp_s32_t m_ZAxis;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdZAxis;
//@}

    /** @brief Get accessor functions for the LLRP ZAxis field */
    inline llrp_s32_t
    getZAxis (void)
    {
        return m_ZAxis;
    }

    /** @brief Set accessor functions for the LLRP ZAxis field */
    inline void
    setZAxis (
      llrp_s32_t value)
    {
        m_ZAxis = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjBeaconConfiguration for LLRP parameter ImpinjBeaconConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used for getting and setting the Array beacon LED.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
  
 **/

class CImpinjBeaconConfiguration : public CParameter
{
  public:
    CImpinjBeaconConfiguration (void);
    ~CImpinjBeaconConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_BeaconState;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBeaconState;
//@}

    /** @brief Get accessor functions for the LLRP BeaconState field */
    inline llrp_u1_t
    getBeaconState (void)
    {
        return m_BeaconState;
    }

    /** @brief Set accessor functions for the LLRP BeaconState field */
    inline void
    setBeaconState (
      llrp_u1_t value)
    {
        m_BeaconState = value;
    }


  protected:
    llrp_u64_t m_BeaconDuration;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBeaconDuration;
//@}

    /** @brief Get accessor functions for the LLRP BeaconDuration field */
    inline llrp_u64_t
    getBeaconDuration (void)
    {
        return m_BeaconDuration;
    }

    /** @brief Set accessor functions for the LLRP BeaconDuration field */
    inline void
    setBeaconDuration (
      llrp_u64_t value)
    {
        m_BeaconDuration = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAntennaConfiguration for LLRP parameter ImpinjAntennaConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used for getting and setting Array antenna configuration.</p> 
 
        
    <p>This configuration is comprised of Antenna hysteresis and Sector configuation.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
  
 **/

class CImpinjAntennaConfiguration : public CParameter
{
  public:
    CImpinjAntennaConfiguration (void);
    ~CImpinjAntennaConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjAntennaEventHysteresis * m_pImpinjAntennaEventHysteresis;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjAntennaEventHysteresis sub-parameter */  
    inline CImpinjAntennaEventHysteresis *
    getImpinjAntennaEventHysteresis (void)
    {
        return m_pImpinjAntennaEventHysteresis;
    }

    /** @brief Set accessor functions for the LLRP ImpinjAntennaEventHysteresis sub-parameter */  
    EResultCode
    setImpinjAntennaEventHysteresis (
      CImpinjAntennaEventHysteresis * pValue);


  protected:
    std::list<CImpinjSectorConfiguration *> m_listImpinjSectorConfiguration;

  public:
     /** @brief  Returns the first element of the ImpinjSectorConfiguration sub-parameter list*/  
    inline std::list<CImpinjSectorConfiguration *>::iterator
    beginImpinjSectorConfiguration (void)
    {
        return m_listImpinjSectorConfiguration.begin();
    }

     /** @brief  Returns the last element of the ImpinjSectorConfiguration sub-parameter list*/  
    inline std::list<CImpinjSectorConfiguration *>::iterator
    endImpinjSectorConfiguration (void)
    {
        return m_listImpinjSectorConfiguration.end();
    }

     /** @brief  Clears the LLRP ImpinjSectorConfiguration sub-parameter list*/  
    inline void
    clearImpinjSectorConfiguration (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listImpinjSectorConfiguration);
    }

     /** @brief  Count of the LLRP ImpinjSectorConfiguration sub-parameter list*/  
    inline int
    countImpinjSectorConfiguration (void)
    {
        return (int) (m_listImpinjSectorConfiguration.size());
    }

    EResultCode
     /** @brief  Add a ImpinjSectorConfiguration to the LLRP sub-parameter list*/  
    addImpinjSectorConfiguration (
      CImpinjSectorConfiguration * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSectorConfiguration for LLRP parameter ImpinjSectorConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to configure an Array Role as to which sectors to monitor and report.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
  
 **/

class CImpinjSectorConfiguration : public CParameter
{
  public:
    CImpinjSectorConfiguration (void);
    ~CImpinjSectorConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_SectorID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSectorID;
//@}

    /** @brief Get accessor functions for the LLRP SectorID field */
    inline llrp_u16_t
    getSectorID (void)
    {
        return m_SectorID;
    }

    /** @brief Set accessor functions for the LLRP SectorID field */
    inline void
    setSectorID (
      llrp_u16_t value)
    {
        m_SectorID = value;
    }


  protected:
    llrp_s32_t m_TransmitPower;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTransmitPower;
//@}

    /** @brief Get accessor functions for the LLRP TransmitPower field */
    inline llrp_s32_t
    getTransmitPower (void)
    {
        return m_TransmitPower;
    }

    /** @brief Set accessor functions for the LLRP TransmitPower field */
    inline void
    setTransmitPower (
      llrp_s32_t value)
    {
        m_TransmitPower = value;
    }


  protected:
    llrp_u16_t m_ReceiverSensitivity;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdReceiverSensitivity;
//@}

    /** @brief Get accessor functions for the LLRP ReceiverSensitivity field */
    inline llrp_u16_t
    getReceiverSensitivity (void)
    {
        return m_ReceiverSensitivity;
    }

    /** @brief Set accessor functions for the LLRP ReceiverSensitivity field */
    inline void
    setReceiverSensitivity (
      llrp_u16_t value)
    {
        m_ReceiverSensitivity = value;
    }


  
  protected:
    CImpinjFixedFrequencyList * m_pImpinjFixedFrequencyList;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjFixedFrequencyList sub-parameter */  
    inline CImpinjFixedFrequencyList *
    getImpinjFixedFrequencyList (void)
    {
        return m_pImpinjFixedFrequencyList;
    }

    /** @brief Set accessor functions for the LLRP ImpinjFixedFrequencyList sub-parameter */  
    EResultCode
    setImpinjFixedFrequencyList (
      CImpinjFixedFrequencyList * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAntennaEventHysteresis for LLRP parameter ImpinjAntennaEventHysteresis
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to control the intervals for antenna disconnect/reconnect notifications.</p> 
 
        
    <p>The AntennaEventConnected field contains the number of milliseconds that an Antenna must be working after failure before an AntennaConnected notification is reported.</p> 
 
        
    <p>The AntennaEventDisconnected field contains the number of milliseconds that an Antenna must be in failure before an AntennaDisconnected notification is reported.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjAntennaEventHysteresis : public CParameter
{
  public:
    CImpinjAntennaEventHysteresis (void);
    ~CImpinjAntennaEventHysteresis (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u64_t m_AntennaEventConnected;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAntennaEventConnected;
//@}

    /** @brief Get accessor functions for the LLRP AntennaEventConnected field */
    inline llrp_u64_t
    getAntennaEventConnected (void)
    {
        return m_AntennaEventConnected;
    }

    /** @brief Set accessor functions for the LLRP AntennaEventConnected field */
    inline void
    setAntennaEventConnected (
      llrp_u64_t value)
    {
        m_AntennaEventConnected = value;
    }


  protected:
    llrp_u64_t m_AntennaEventDisconnected;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAntennaEventDisconnected;
//@}

    /** @brief Get accessor functions for the LLRP AntennaEventDisconnected field */
    inline llrp_u64_t
    getAntennaEventDisconnected (void)
    {
        return m_AntennaEventDisconnected;
    }

    /** @brief Set accessor functions for the LLRP AntennaEventDisconnected field */
    inline void
    setAntennaEventDisconnected (
      llrp_u64_t value)
    {
        m_AntennaEventDisconnected = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjArrayInventorySpec for LLRP parameter ImpinjArrayInventorySpec
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is specified in an ROSpec and details Array Role operation.</p> 
 
        
    <p>The ArrayRole field is used to specify the array Role.</p> 
 
        
    <p>The SectorIDs field is used to specify sectors to montiro and report on.</p> 
 
        
    <p>Only one ImpinjArraySpec may be specified in an ROSpec. When specifed, AISpecs and RFSurvey specs may not be additionally configured.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
  
 **/

class CImpinjArrayInventorySpec : public CParameter
{
  public:
    CImpinjArrayInventorySpec (void);
    ~CImpinjArrayInventorySpec (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjArrayRole m_eArrayRole;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdArrayRole;
//@}

    /** @brief Get accessor functions for the LLRP ArrayRole field */
    inline EImpinjArrayRole
    getArrayRole (void)
    {
        return m_eArrayRole;
    }

    /** @brief Set accessor functions for the LLRP ArrayRole field */
    inline void
    setArrayRole (
      EImpinjArrayRole value)
    {
        m_eArrayRole = value;
    }


  protected:
    llrp_u16v_t m_SectorIDs;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSectorIDs;
//@}

    /** @brief Get accessor functions for the LLRP SectorIDs field */
    inline llrp_u16v_t
    getSectorIDs (void)
    {
        return m_SectorIDs;
    }

    /** @brief Set accessor functions for the LLRP SectorIDs field */
    inline void
    setSectorIDs (
      llrp_u16v_t value)
    {
        m_SectorIDs = value;
    }


  
  protected:
    std::list<CImpinjSectorConfiguration *> m_listImpinjSectorConfiguration;

  public:
     /** @brief  Returns the first element of the ImpinjSectorConfiguration sub-parameter list*/  
    inline std::list<CImpinjSectorConfiguration *>::iterator
    beginImpinjSectorConfiguration (void)
    {
        return m_listImpinjSectorConfiguration.begin();
    }

     /** @brief  Returns the last element of the ImpinjSectorConfiguration sub-parameter list*/  
    inline std::list<CImpinjSectorConfiguration *>::iterator
    endImpinjSectorConfiguration (void)
    {
        return m_listImpinjSectorConfiguration.end();
    }

     /** @brief  Clears the LLRP ImpinjSectorConfiguration sub-parameter list*/  
    inline void
    clearImpinjSectorConfiguration (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listImpinjSectorConfiguration);
    }

     /** @brief  Count of the LLRP ImpinjSectorConfiguration sub-parameter list*/  
    inline int
    countImpinjSectorConfiguration (void)
    {
        return (int) (m_listImpinjSectorConfiguration.size());
    }

    EResultCode
     /** @brief  Add a ImpinjSectorConfiguration to the LLRP sub-parameter list*/  
    addImpinjSectorConfiguration (
      CImpinjSectorConfiguration * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSectorID for LLRP parameter ImpinjSectorID
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to report Sector information with TagData reports, when allowed.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjSectorID : public CParameter
{
  public:
    CImpinjSectorID (void);
    ~CImpinjSectorID (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_SectorID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSectorID;
//@}

    /** @brief Get accessor functions for the LLRP SectorID field */
    inline llrp_u16_t
    getSectorID (void)
    {
        return m_SectorID;
    }

    /** @brief Set accessor functions for the LLRP SectorID field */
    inline void
    setSectorID (
      llrp_u16_t value)
    {
        m_SectorID = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjDirectionReporting for LLRP parameter ImpinjDirectionReporting
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to configure directionality reporting.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjDirectionReporting : public CParameter
{
  public:
    CImpinjDirectionReporting (void);
    ~CImpinjDirectionReporting (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjEnableSectorReport * m_pImpinjEnableSectorReport;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableSectorReport sub-parameter */  
    inline CImpinjEnableSectorReport *
    getImpinjEnableSectorReport (void)
    {
        return m_pImpinjEnableSectorReport;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableSectorReport sub-parameter */  
    EResultCode
    setImpinjEnableSectorReport (
      CImpinjEnableSectorReport * pValue);


  protected:
    CImpinjEnableTransitionReport * m_pImpinjEnableTransitionReport;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableTransitionReport sub-parameter */  
    inline CImpinjEnableTransitionReport *
    getImpinjEnableTransitionReport (void)
    {
        return m_pImpinjEnableTransitionReport;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableTransitionReport sub-parameter */  
    EResultCode
    setImpinjEnableTransitionReport (
      CImpinjEnableTransitionReport * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableSectorReport for LLRP parameter ImpinjEnableSectorReport
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to configure Sector reporting.</p> 
 
        
    <p>The SectorMode field is used to enable/disable sector reporting.</p> 
 
        
    <p>The ConfidenceFilter is used to set the minimum directionlaity confidence threshhold for triggering a sector report.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjEnableSectorReport : public CParameter
{
  public:
    CImpinjEnableSectorReport (void);
    ~CImpinjEnableSectorReport (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_SectorMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSectorMode;
//@}

    /** @brief Get accessor functions for the LLRP SectorMode field */
    inline llrp_u1_t
    getSectorMode (void)
    {
        return m_SectorMode;
    }

    /** @brief Set accessor functions for the LLRP SectorMode field */
    inline void
    setSectorMode (
      llrp_u1_t value)
    {
        m_SectorMode = value;
    }


  protected:
    llrp_u16_t m_ConfidenceFilter;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdConfidenceFilter;
//@}

    /** @brief Get accessor functions for the LLRP ConfidenceFilter field */
    inline llrp_u16_t
    getConfidenceFilter (void)
    {
        return m_ConfidenceFilter;
    }

    /** @brief Set accessor functions for the LLRP ConfidenceFilter field */
    inline void
    setConfidenceFilter (
      llrp_u16_t value)
    {
        m_ConfidenceFilter = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableTransitionReport for LLRP parameter ImpinjEnableTransitionReport
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to configure Sector reporting.</p> 
 
        
    <p>The TransitionMode field is used to enable/disable transition reporting.</p> 
 
        
    <p>The ConfidenceFilter is used to set the minimum directionlaity confidence threshhold for triggering a transition report.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjEnableTransitionReport : public CParameter
{
  public:
    CImpinjEnableTransitionReport (void);
    ~CImpinjEnableTransitionReport (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_TransitionMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTransitionMode;
//@}

    /** @brief Get accessor functions for the LLRP TransitionMode field */
    inline llrp_u1_t
    getTransitionMode (void)
    {
        return m_TransitionMode;
    }

    /** @brief Set accessor functions for the LLRP TransitionMode field */
    inline void
    setTransitionMode (
      llrp_u1_t value)
    {
        m_TransitionMode = value;
    }


  protected:
    llrp_u16_t m_ConfidenceFilter;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdConfidenceFilter;
//@}

    /** @brief Get accessor functions for the LLRP ConfidenceFilter field */
    inline llrp_u16_t
    getConfidenceFilter (void)
    {
        return m_ConfidenceFilter;
    }

    /** @brief Set accessor functions for the LLRP ConfidenceFilter field */
    inline void
    setConfidenceFilter (
      llrp_u16_t value)
    {
        m_ConfidenceFilter = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSectorReportData for LLRP parameter ImpinjSectorReportData
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter represents a single Sector report.</p> 
 
        
    <p>The TimeStampUTC field contains the time stamp of the sector event.</p> 
 
        
    <p>The SectorID field contains the sector ID that a Sector event has been detected.</p> 
 
        
    <p>The Confidence field contains confidence that the event occured in the form of a percentage. 0 is not confident. 100 is perfectly confident</p> 
 
        
    <p>EPCData contains all EPCs associated with the sector event.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
  
 **/

class CImpinjSectorReportData : public CParameter
{
  public:
    CImpinjSectorReportData (void);
    ~CImpinjSectorReportData (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u64_t m_TimestampUTC;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTimestampUTC;
//@}

    /** @brief Get accessor functions for the LLRP TimestampUTC field */
    inline llrp_u64_t
    getTimestampUTC (void)
    {
        return m_TimestampUTC;
    }

    /** @brief Set accessor functions for the LLRP TimestampUTC field */
    inline void
    setTimestampUTC (
      llrp_u64_t value)
    {
        m_TimestampUTC = value;
    }


  protected:
    llrp_u16_t m_SectorID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSectorID;
//@}

    /** @brief Get accessor functions for the LLRP SectorID field */
    inline llrp_u16_t
    getSectorID (void)
    {
        return m_SectorID;
    }

    /** @brief Set accessor functions for the LLRP SectorID field */
    inline void
    setSectorID (
      llrp_u16_t value)
    {
        m_SectorID = value;
    }


  protected:
    llrp_u16_t m_Confidence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdConfidence;
//@}

    /** @brief Get accessor functions for the LLRP Confidence field */
    inline llrp_u16_t
    getConfidence (void)
    {
        return m_Confidence;
    }

    /** @brief Set accessor functions for the LLRP Confidence field */
    inline void
    setConfidence (
      llrp_u16_t value)
    {
        m_Confidence = value;
    }


  
  protected:
    std::list<CEPCData *> m_listEPCData;

  public:
     /** @brief  Returns the first element of the EPCData sub-parameter list*/  
    inline std::list<CEPCData *>::iterator
    beginEPCData (void)
    {
        return m_listEPCData.begin();
    }

     /** @brief  Returns the last element of the EPCData sub-parameter list*/  
    inline std::list<CEPCData *>::iterator
    endEPCData (void)
    {
        return m_listEPCData.end();
    }

     /** @brief  Clears the LLRP EPCData sub-parameter list*/  
    inline void
    clearEPCData (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listEPCData);
    }

     /** @brief  Count of the LLRP EPCData sub-parameter list*/  
    inline int
    countEPCData (void)
    {
        return (int) (m_listEPCData.size());
    }

    EResultCode
     /** @brief  Add a EPCData to the LLRP sub-parameter list*/  
    addEPCData (
      CEPCData * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTransitionReportData for LLRP parameter ImpinjTransitionReportData
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter represents a single Transition report.</p> 
 
        
    <p>The TimeStampUTC field contains the time stamp of the transition event.</p> 
 
        
    <p>The FromSectorID field contains the sector ID where the transition event began.</p> 
 
        
    <p>The ToSectorID field contains the sector ID where the transition event ended.</p> 
 
        
    <p>The Confidence field contains confidence that the event occured in the form of a percentage. 0 is not confident. 100 is perfectly confident</p> 
 
        
    <p>EPCData contains all EPCs associated with the transition event.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
  
 **/

class CImpinjTransitionReportData : public CParameter
{
  public:
    CImpinjTransitionReportData (void);
    ~CImpinjTransitionReportData (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u64_t m_TimestampUTC;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTimestampUTC;
//@}

    /** @brief Get accessor functions for the LLRP TimestampUTC field */
    inline llrp_u64_t
    getTimestampUTC (void)
    {
        return m_TimestampUTC;
    }

    /** @brief Set accessor functions for the LLRP TimestampUTC field */
    inline void
    setTimestampUTC (
      llrp_u64_t value)
    {
        m_TimestampUTC = value;
    }


  protected:
    llrp_u16_t m_FromSectorID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFromSectorID;
//@}

    /** @brief Get accessor functions for the LLRP FromSectorID field */
    inline llrp_u16_t
    getFromSectorID (void)
    {
        return m_FromSectorID;
    }

    /** @brief Set accessor functions for the LLRP FromSectorID field */
    inline void
    setFromSectorID (
      llrp_u16_t value)
    {
        m_FromSectorID = value;
    }


  protected:
    llrp_u16_t m_ToSectorID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdToSectorID;
//@}

    /** @brief Get accessor functions for the LLRP ToSectorID field */
    inline llrp_u16_t
    getToSectorID (void)
    {
        return m_ToSectorID;
    }

    /** @brief Set accessor functions for the LLRP ToSectorID field */
    inline void
    setToSectorID (
      llrp_u16_t value)
    {
        m_ToSectorID = value;
    }


  protected:
    llrp_u16_t m_Confidence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdConfidence;
//@}

    /** @brief Get accessor functions for the LLRP Confidence field */
    inline llrp_u16_t
    getConfidence (void)
    {
        return m_Confidence;
    }

    /** @brief Set accessor functions for the LLRP Confidence field */
    inline void
    setConfidence (
      llrp_u16_t value)
    {
        m_Confidence = value;
    }


  
  protected:
    std::list<CEPCData *> m_listEPCData;

  public:
     /** @brief  Returns the first element of the EPCData sub-parameter list*/  
    inline std::list<CEPCData *>::iterator
    beginEPCData (void)
    {
        return m_listEPCData.begin();
    }

     /** @brief  Returns the last element of the EPCData sub-parameter list*/  
    inline std::list<CEPCData *>::iterator
    endEPCData (void)
    {
        return m_listEPCData.end();
    }

     /** @brief  Clears the LLRP EPCData sub-parameter list*/  
    inline void
    clearEPCData (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listEPCData);
    }

     /** @brief  Count of the LLRP EPCData sub-parameter list*/  
    inline int
    countEPCData (void)
    {
        return (int) (m_listEPCData.size());
    }

    EResultCode
     /** @brief  Add a EPCData to the LLRP sub-parameter list*/  
    addEPCData (
      CEPCData * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTagReporting for LLRP parameter ImpinjTagReporting
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to configure raw tag reporting.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjTagReporting : public CParameter
{
  public:
    CImpinjTagReporting (void);
    ~CImpinjTagReporting (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjEnableTagReport * m_pImpinjEnableTagReport;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableTagReport sub-parameter */  
    inline CImpinjEnableTagReport *
    getImpinjEnableTagReport (void)
    {
        return m_pImpinjEnableTagReport;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableTagReport sub-parameter */  
    EResultCode
    setImpinjEnableTagReport (
      CImpinjEnableTagReport * pValue);


  protected:
    CImpinjAllowStaleTags * m_pImpinjAllowStaleTags;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjAllowStaleTags sub-parameter */  
    inline CImpinjAllowStaleTags *
    getImpinjAllowStaleTags (void)
    {
        return m_pImpinjAllowStaleTags;
    }

    /** @brief Set accessor functions for the LLRP ImpinjAllowStaleTags sub-parameter */  
    EResultCode
    setImpinjAllowStaleTags (
      CImpinjAllowStaleTags * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableTagReport for LLRP parameter ImpinjEnableTagReport
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to configure tag reporting.</p> 
 
        
    <p>The TagMode field is used to enable/disable tag reporting.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
  
 **/

class CImpinjEnableTagReport : public CParameter
{
  public:
    CImpinjEnableTagReport (void);
    ~CImpinjEnableTagReport (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_TagMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTagMode;
//@}

    /** @brief Get accessor functions for the LLRP TagMode field */
    inline llrp_u1_t
    getTagMode (void)
    {
        return m_TagMode;
    }

    /** @brief Set accessor functions for the LLRP TagMode field */
    inline void
    setTagMode (
      llrp_u1_t value)
    {
        m_TagMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAllowStaleTags for LLRP parameter ImpinjAllowStaleTags
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to indicate whether reader will send stale tags in its reports.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
  
 **/

class CImpinjAllowStaleTags : public CParameter
{
  public:
    CImpinjAllowStaleTags (void);
    ~CImpinjAllowStaleTags (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_Allow;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAllow;
//@}

    /** @brief Get accessor functions for the LLRP Allow field */
    inline llrp_u1_t
    getAllow (void)
    {
        return m_Allow;
    }

    /** @brief Set accessor functions for the LLRP Allow field */
    inline void
    setAllow (
      llrp_u1_t value)
    {
        m_Allow = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjHubVersions for LLRP parameter ImpinjHubVersions
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter contains Antenna Hub-specific hardware and version information that is considered additional to ImpinjDetailedVersion information.</p> 
 
      <SMALL><i>Copyright 2012 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjHubVersions : public CParameter
{
  public:
    CImpinjHubVersions (void);
    ~CImpinjHubVersions (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    std::list<CImpinjArrayVersion *> m_listImpinjArrayVersion;

  public:
     /** @brief  Returns the first element of the ImpinjArrayVersion sub-parameter list*/  
    inline std::list<CImpinjArrayVersion *>::iterator
    beginImpinjArrayVersion (void)
    {
        return m_listImpinjArrayVersion.begin();
    }

     /** @brief  Returns the last element of the ImpinjArrayVersion sub-parameter list*/  
    inline std::list<CImpinjArrayVersion *>::iterator
    endImpinjArrayVersion (void)
    {
        return m_listImpinjArrayVersion.end();
    }

     /** @brief  Clears the LLRP ImpinjArrayVersion sub-parameter list*/  
    inline void
    clearImpinjArrayVersion (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listImpinjArrayVersion);
    }

     /** @brief  Count of the LLRP ImpinjArrayVersion sub-parameter list*/  
    inline int
    countImpinjArrayVersion (void)
    {
        return (int) (m_listImpinjArrayVersion.size());
    }

    EResultCode
     /** @brief  Add a ImpinjArrayVersion to the LLRP sub-parameter list*/  
    addImpinjArrayVersion (
      CImpinjArrayVersion * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjHubConfiguration for LLRP parameter ImpinjHubConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter contains the Antenna Hub connection and fault state.</p> 
 
      <SMALL><i>Copyright 2012 Impinj Inc.</i></SMALL> 
  <HR>

    
     
    
    
    
    
    
  
 **/

class CImpinjHubConfiguration : public CParameter
{
  public:
    CImpinjHubConfiguration (void);
    ~CImpinjHubConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_HubID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdHubID;
//@}

    /** @brief Get accessor functions for the LLRP HubID field */
    inline llrp_u16_t
    getHubID (void)
    {
        return m_HubID;
    }

    /** @brief Set accessor functions for the LLRP HubID field */
    inline void
    setHubID (
      llrp_u16_t value)
    {
        m_HubID = value;
    }


  protected:
    EImpinjHubConnectedType m_eConnected;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdConnected;
//@}

    /** @brief Get accessor functions for the LLRP Connected field */
    inline EImpinjHubConnectedType
    getConnected (void)
    {
        return m_eConnected;
    }

    /** @brief Set accessor functions for the LLRP Connected field */
    inline void
    setConnected (
      EImpinjHubConnectedType value)
    {
        m_eConnected = value;
    }


  protected:
    EImpinjHubFaultType m_eFault;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFault;
//@}

    /** @brief Get accessor functions for the LLRP Fault field */
    inline EImpinjHubFaultType
    getFault (void)
    {
        return m_eFault;
    }

    /** @brief Set accessor functions for the LLRP Fault field */
    inline void
    setFault (
      EImpinjHubFaultType value)
    {
        m_eFault = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/*@}*/ 


/** @brief Enrolls the types for Impinj into the LTKCPP registry
 ** 
 ** LTKCPP needs an internal registry for storing all the type information.  This function
 ** is required to enroll the types for the Impinj into
 ** the operating registry.  
 ** 
 ** For example -- in order to decode and encode packets from the core LLRP specification
 ** The user must EnrollCoreTypesIntoRegistry.
 **
 ** @ingroup LTKCoreElement
 */
extern void
enrollImpinjTypesIntoRegistry (
  CTypeRegistry *               pTypeRegistry);
