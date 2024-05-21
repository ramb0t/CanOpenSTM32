/*******************************************************************************
    CANopen Object Dictionary definition for CANopenNode V4

    This file was automatically generated by CANopenEditor v4.2.1-0-g5ca7d71

    https://github.com/CANopenNode/CANopenNode
    https://github.com/CANopenNode/CANopenEditor

    DON'T EDIT THIS FILE MANUALLY !!!!
********************************************************************************

    File info:
        File Names:   OD.h; OD.c
        Project File: DS301_profile.xpd
        File Version: 2

        Created:      2020/11/23 13:00:00
        Created By:   
        Modified:     2024/05/21 23:54:14
        Modified By:  

    Device Info:
        Vendor Name:  
        Vendor ID:    
        Product Name: CANGrabR Open
        Product ID:   

        Description:  
*******************************************************************************/

#ifndef OD_H
#define OD_H
/*******************************************************************************
    Counters of OD objects
*******************************************************************************/
#define OD_CNT_NMT 1
#define OD_CNT_EM 1
#define OD_CNT_SYNC 1
#define OD_CNT_SYNC_PROD 1
#define OD_CNT_STORAGE 1
#define OD_CNT_TIME 1
#define OD_CNT_EM_PROD 1
#define OD_CNT_HB_CONS 1
#define OD_CNT_HB_PROD 1
#define OD_CNT_SDO_SRV 1
#define OD_CNT_SDO_CLI 1
#define OD_CNT_RPDO 4
#define OD_CNT_TPDO 2


/*******************************************************************************
    Sizes of OD arrays
*******************************************************************************/
#define OD_CNT_ARR_1003 16
#define OD_CNT_ARR_1010 4
#define OD_CNT_ARR_1011 4
#define OD_CNT_ARR_1016 8
#define OD_CNT_ARR_1029 2
#define OD_CNT_ARR_1F81 127
#define OD_CNT_ARR_1F82 127
#define OD_CNT_ARR_3001 4
#define OD_CNT_ARR_3005 11
#define OD_CNT_ARR_3006 16
#define OD_CNT_ARR_300A 4
#define OD_CNT_ARR_300E 5
#define OD_CNT_ARR_300F 6
#define OD_CNT_ARR_6030 5
#define OD_CNT_ARR_6031 8


/*******************************************************************************
    OD data declaration of all groups
*******************************************************************************/
typedef struct {
    uint32_t x1000_deviceType;
    uint32_t x1005_COB_ID_SYNCMessage;
    uint32_t x1006_communicationCyclePeriod;
    uint32_t x1007_synchronousWindowLength;
    uint32_t x1012_COB_IDTimeStampObject;
    uint32_t x1014_COB_ID_EMCY;
    uint16_t x1015_inhibitTimeEMCY;
    uint8_t x1016_consumerHeartbeatTime_sub0;
    uint32_t x1016_consumerHeartbeatTime[OD_CNT_ARR_1016];
    uint16_t x1017_producerHeartbeatTime;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t vendor_ID;
        uint32_t productCode;
        uint32_t revisionNumber;
        uint32_t serialNumber;
    } x1018_identity;
    uint8_t x1019_synchronousCounterOverflowValue;
    uint8_t x1029_errorBehaviorObject_sub0;
    uint8_t x1029_errorBehaviorObject[OD_CNT_ARR_1029];
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDClientToServerTx;
        uint32_t COB_IDServerToClientRx;
        uint8_t node_IDOfTheSDOServer;
    } x1280_SDOClientParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByRPDO;
        uint8_t transmissionType;
        uint16_t eventTimer;
    } x1400_RPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByRPDO;
        uint8_t transmissionType;
        uint16_t eventTimer;
    } x1401_RPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByRPDO;
        uint8_t transmissionType;
        uint16_t eventTimer;
    } x1402_RPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByRPDO;
        uint8_t transmissionType;
        uint16_t eventTimer;
    } x1403_RPDOCommunicationParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1600_RPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1601_RPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1602_RPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1603_RPDOMappingParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1801_TPDOCommunicationParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1A01_TPDOMappingParameter;
    uint32_t x1F80_NMTStartup;
    uint8_t x2000_SOC;
    uint8_t x2001_status;
    uint16_t x2002_DCVolt;
    int16_t x2003_DCCurrent;
    int8_t x2004_sysTemp;
    uint8_t x2005_thermDerate;
} OD_PERSIST_COMM_t;

typedef struct {
    uint8_t x1001_errorRegister;
    uint8_t x1010_storeParameters_sub0;
    uint32_t x1010_storeParameters[OD_CNT_ARR_1010];
    uint8_t x1011_restoreDefaultParameters_sub0;
    uint32_t x1011_restoreDefaultParameters[OD_CNT_ARR_1011];
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDClientToServerRx;
        uint32_t COB_IDServerToClientTx;
    } x1200_SDOServerParameter;
    uint8_t x1F81_slaveAssignment_sub0;
    uint8_t x1F82_requestNMT_sub0;
    uint16_t x2006_DCL;
    uint16_t x2007_CCL;
    uint16_t x2008_DVL;
    uint16_t x2009_CVL;
    uint16_t x280C_totalNumberOfBatteryCycles;
    uint32_t x280D_SW_AsmVersion;
    uint8_t x3000_batteryEfficiencyChargeInVsDischargeOut;
    uint8_t x3001_nominalSOH_sub0;
    uint16_t x3001_nominalSOH[OD_CNT_ARR_3001];
    uint16_t x3002_remainingBatteryCyclesLeftForWarranty;
    uint32_t x3003_accumulatedTimeInService;
    uint32_t x3004_remainingHoursLeftForWarranty;
    uint8_t x3005_BMS_Data_sub0;
    uint8_t x3006_logOfFaultCodes_sub0;
    uint32_t x3006_logOfFaultCodes[OD_CNT_ARR_3006];
    uint32_t x3007_totalNumberOfChargeEvents;
    uint32_t x3008_totalTimeReceivingCurrentInChargeMode;
    uint32_t x3009_totalTimeInChargeMode;
    uint8_t x300A_thermistors_sub0;
    int16_t x300A_thermistors[OD_CNT_ARR_300A];
    uint32_t x300B_cumulativeTotalDischargeKWh;
    uint32_t x300C_energyRemainingForBatteryWarrantyKWh;
    uint32_t x300D_cumulativeTotalBatteryRegenKWh;
    uint8_t x300E_GPS_Derate_sub0;
    uint32_t x300E_GPS_Derate[OD_CNT_ARR_300E];
    uint8_t x300F_charger_sub0;
    uint32_t x300F_charger[OD_CNT_ARR_300F];
    uint8_t x6030_batterySN_sub0;
    uint32_t x6030_batterySN[OD_CNT_ARR_6030];
    uint8_t x6031_modelID_sub0;
    uint32_t x6031_modelID[OD_CNT_ARR_6031];
    uint32_t x6050_cumulativeTotalBatteryChargeKWh;
    uint16_t x6092_totalBatteryRemainingEnergyKWh;
} OD_RAM_t;

typedef struct {
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1800_TPDOCommunicationParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1A00_TPDOMappingParameter;
} OD_ROM_t;

#ifndef OD_ATTR_PERSIST_COMM
#define OD_ATTR_PERSIST_COMM
#endif
extern OD_ATTR_PERSIST_COMM OD_PERSIST_COMM_t OD_PERSIST_COMM;

#ifndef OD_ATTR_RAM
#define OD_ATTR_RAM
#endif
extern OD_ATTR_RAM OD_RAM_t OD_RAM;

#ifndef OD_ATTR_ROM
#define OD_ATTR_ROM
#endif
extern OD_ATTR_ROM OD_ROM_t OD_ROM;

#ifndef OD_ATTR_OD
#define OD_ATTR_OD
#endif
extern OD_ATTR_OD OD_t *OD;


/*******************************************************************************
    Object dictionary entries - shortcuts
*******************************************************************************/
#define OD_ENTRY_H1000 &OD->list[0]
#define OD_ENTRY_H1001 &OD->list[1]
#define OD_ENTRY_H1003 &OD->list[2]
#define OD_ENTRY_H1005 &OD->list[3]
#define OD_ENTRY_H1006 &OD->list[4]
#define OD_ENTRY_H1007 &OD->list[5]
#define OD_ENTRY_H100C &OD->list[6]
#define OD_ENTRY_H100D &OD->list[7]
#define OD_ENTRY_H1010 &OD->list[8]
#define OD_ENTRY_H1011 &OD->list[9]
#define OD_ENTRY_H1012 &OD->list[10]
#define OD_ENTRY_H1014 &OD->list[11]
#define OD_ENTRY_H1015 &OD->list[12]
#define OD_ENTRY_H1016 &OD->list[13]
#define OD_ENTRY_H1017 &OD->list[14]
#define OD_ENTRY_H1018 &OD->list[15]
#define OD_ENTRY_H1019 &OD->list[16]
#define OD_ENTRY_H1029 &OD->list[17]
#define OD_ENTRY_H1200 &OD->list[18]
#define OD_ENTRY_H1280 &OD->list[19]
#define OD_ENTRY_H1400 &OD->list[20]
#define OD_ENTRY_H1401 &OD->list[21]
#define OD_ENTRY_H1402 &OD->list[22]
#define OD_ENTRY_H1403 &OD->list[23]
#define OD_ENTRY_H1600 &OD->list[24]
#define OD_ENTRY_H1601 &OD->list[25]
#define OD_ENTRY_H1602 &OD->list[26]
#define OD_ENTRY_H1603 &OD->list[27]
#define OD_ENTRY_H1800 &OD->list[28]
#define OD_ENTRY_H1801 &OD->list[29]
#define OD_ENTRY_H1A00 &OD->list[30]
#define OD_ENTRY_H1A01 &OD->list[31]
#define OD_ENTRY_H1F80 &OD->list[32]
#define OD_ENTRY_H1F81 &OD->list[33]
#define OD_ENTRY_H1F82 &OD->list[34]
#define OD_ENTRY_H1F89 &OD->list[35]
#define OD_ENTRY_H2000 &OD->list[36]
#define OD_ENTRY_H2001 &OD->list[37]
#define OD_ENTRY_H2002 &OD->list[38]
#define OD_ENTRY_H2003 &OD->list[39]
#define OD_ENTRY_H2004 &OD->list[40]
#define OD_ENTRY_H2005 &OD->list[41]
#define OD_ENTRY_H2006 &OD->list[42]
#define OD_ENTRY_H2007 &OD->list[43]
#define OD_ENTRY_H2008 &OD->list[44]
#define OD_ENTRY_H2009 &OD->list[45]
#define OD_ENTRY_H280C &OD->list[46]
#define OD_ENTRY_H280D &OD->list[47]
#define OD_ENTRY_H3000 &OD->list[48]
#define OD_ENTRY_H3001 &OD->list[49]
#define OD_ENTRY_H3002 &OD->list[50]
#define OD_ENTRY_H3003 &OD->list[51]
#define OD_ENTRY_H3004 &OD->list[52]
#define OD_ENTRY_H3005 &OD->list[53]
#define OD_ENTRY_H3006 &OD->list[54]
#define OD_ENTRY_H3007 &OD->list[55]
#define OD_ENTRY_H3008 &OD->list[56]
#define OD_ENTRY_H3009 &OD->list[57]
#define OD_ENTRY_H300A &OD->list[58]
#define OD_ENTRY_H300B &OD->list[59]
#define OD_ENTRY_H300C &OD->list[60]
#define OD_ENTRY_H300D &OD->list[61]
#define OD_ENTRY_H300E &OD->list[62]
#define OD_ENTRY_H300F &OD->list[63]
#define OD_ENTRY_H6030 &OD->list[64]
#define OD_ENTRY_H6031 &OD->list[65]
#define OD_ENTRY_H6050 &OD->list[66]
#define OD_ENTRY_H6092 &OD->list[67]


/*******************************************************************************
    Object dictionary entries - shortcuts with names
*******************************************************************************/
#define OD_ENTRY_H1000_deviceType &OD->list[0]
#define OD_ENTRY_H1001_errorRegister &OD->list[1]
#define OD_ENTRY_H1003_pre_definedErrorField &OD->list[2]
#define OD_ENTRY_H1005_COB_ID_SYNCMessage &OD->list[3]
#define OD_ENTRY_H1006_communicationCyclePeriod &OD->list[4]
#define OD_ENTRY_H1007_synchronousWindowLength &OD->list[5]
#define OD_ENTRY_H100C_guardTime &OD->list[6]
#define OD_ENTRY_H100D_lifeTimeFactor &OD->list[7]
#define OD_ENTRY_H1010_storeParameters &OD->list[8]
#define OD_ENTRY_H1011_restoreDefaultParameters &OD->list[9]
#define OD_ENTRY_H1012_COB_IDTimeStampObject &OD->list[10]
#define OD_ENTRY_H1014_COB_ID_EMCY &OD->list[11]
#define OD_ENTRY_H1015_inhibitTimeEMCY &OD->list[12]
#define OD_ENTRY_H1016_consumerHeartbeatTime &OD->list[13]
#define OD_ENTRY_H1017_producerHeartbeatTime &OD->list[14]
#define OD_ENTRY_H1018_identity &OD->list[15]
#define OD_ENTRY_H1019_synchronousCounterOverflowValue &OD->list[16]
#define OD_ENTRY_H1029_errorBehaviorObject &OD->list[17]
#define OD_ENTRY_H1200_SDOServerParameter &OD->list[18]
#define OD_ENTRY_H1280_SDOClientParameter &OD->list[19]
#define OD_ENTRY_H1400_RPDOCommunicationParameter &OD->list[20]
#define OD_ENTRY_H1401_RPDOCommunicationParameter &OD->list[21]
#define OD_ENTRY_H1402_RPDOCommunicationParameter &OD->list[22]
#define OD_ENTRY_H1403_RPDOCommunicationParameter &OD->list[23]
#define OD_ENTRY_H1600_RPDOMappingParameter &OD->list[24]
#define OD_ENTRY_H1601_RPDOMappingParameter &OD->list[25]
#define OD_ENTRY_H1602_RPDOMappingParameter &OD->list[26]
#define OD_ENTRY_H1603_RPDOMappingParameter &OD->list[27]
#define OD_ENTRY_H1800_TPDOCommunicationParameter &OD->list[28]
#define OD_ENTRY_H1801_TPDOCommunicationParameter &OD->list[29]
#define OD_ENTRY_H1A00_TPDOMappingParameter &OD->list[30]
#define OD_ENTRY_H1A01_TPDOMappingParameter &OD->list[31]
#define OD_ENTRY_H1F80_NMTStartup &OD->list[32]
#define OD_ENTRY_H1F81_slaveAssignment &OD->list[33]
#define OD_ENTRY_H1F82_requestNMT &OD->list[34]
#define OD_ENTRY_H1F89_bootTime &OD->list[35]
#define OD_ENTRY_H2000_SOC &OD->list[36]
#define OD_ENTRY_H2001_status &OD->list[37]
#define OD_ENTRY_H2002_DCVolt &OD->list[38]
#define OD_ENTRY_H2003_DCCurrent &OD->list[39]
#define OD_ENTRY_H2004_sysTemp &OD->list[40]
#define OD_ENTRY_H2005_thermDerate &OD->list[41]
#define OD_ENTRY_H2006_DCL &OD->list[42]
#define OD_ENTRY_H2007_CCL &OD->list[43]
#define OD_ENTRY_H2008_DVL &OD->list[44]
#define OD_ENTRY_H2009_CVL &OD->list[45]
#define OD_ENTRY_H280C_totalNumberOfBatteryCycles &OD->list[46]
#define OD_ENTRY_H280D_SW_AsmVersion &OD->list[47]
#define OD_ENTRY_H3000_batteryEfficiencyChargeInVsDischargeOut &OD->list[48]
#define OD_ENTRY_H3001_nominalSOH &OD->list[49]
#define OD_ENTRY_H3002_remainingBatteryCyclesLeftForWarranty &OD->list[50]
#define OD_ENTRY_H3003_accumulatedTimeInService &OD->list[51]
#define OD_ENTRY_H3004_remainingHoursLeftForWarranty &OD->list[52]
#define OD_ENTRY_H3005_BMS_Data &OD->list[53]
#define OD_ENTRY_H3006_logOfFaultCodes &OD->list[54]
#define OD_ENTRY_H3007_totalNumberOfChargeEvents &OD->list[55]
#define OD_ENTRY_H3008_totalTimeReceivingCurrentInChargeMode &OD->list[56]
#define OD_ENTRY_H3009_totalTimeInChargeMode &OD->list[57]
#define OD_ENTRY_H300A_thermistors &OD->list[58]
#define OD_ENTRY_H300B_cumulativeTotalDischargeKWh &OD->list[59]
#define OD_ENTRY_H300C_energyRemainingForBatteryWarrantyKWh &OD->list[60]
#define OD_ENTRY_H300D_cumulativeTotalBatteryRegenKWh &OD->list[61]
#define OD_ENTRY_H300E_GPS_Derate &OD->list[62]
#define OD_ENTRY_H300F_charger &OD->list[63]
#define OD_ENTRY_H6030_batterySN &OD->list[64]
#define OD_ENTRY_H6031_modelID &OD->list[65]
#define OD_ENTRY_H6050_cumulativeTotalBatteryChargeKWh &OD->list[66]
#define OD_ENTRY_H6092_totalBatteryRemainingEnergyKWh &OD->list[67]


/*******************************************************************************
    OD config structure
*******************************************************************************/
#ifdef CO_MULTIPLE_OD
#define OD_INIT_CONFIG(config) {\
    (config).CNT_NMT = OD_CNT_NMT;\
    (config).ENTRY_H1017 = OD_ENTRY_H1017;\
    (config).CNT_HB_CONS = OD_CNT_HB_CONS;\
    (config).CNT_ARR_1016 = OD_CNT_ARR_1016;\
    (config).ENTRY_H1016 = OD_ENTRY_H1016;\
    (config).CNT_EM = OD_CNT_EM;\
    (config).ENTRY_H1001 = OD_ENTRY_H1001;\
    (config).ENTRY_H1014 = OD_ENTRY_H1014;\
    (config).ENTRY_H1015 = OD_ENTRY_H1015;\
    (config).CNT_ARR_1003 = OD_CNT_ARR_1003;\
    (config).ENTRY_H1003 = OD_ENTRY_H1003;\
    (config).CNT_SDO_SRV = OD_CNT_SDO_SRV;\
    (config).ENTRY_H1200 = OD_ENTRY_H1200;\
    (config).CNT_SDO_CLI = OD_CNT_SDO_CLI;\
    (config).ENTRY_H1280 = OD_ENTRY_H1280;\
    (config).CNT_TIME = OD_CNT_TIME;\
    (config).ENTRY_H1012 = OD_ENTRY_H1012;\
    (config).CNT_SYNC = OD_CNT_SYNC;\
    (config).ENTRY_H1005 = OD_ENTRY_H1005;\
    (config).ENTRY_H1006 = OD_ENTRY_H1006;\
    (config).ENTRY_H1007 = OD_ENTRY_H1007;\
    (config).ENTRY_H1019 = OD_ENTRY_H1019;\
    (config).CNT_RPDO = OD_CNT_RPDO;\
    (config).ENTRY_H1400 = OD_ENTRY_H1400;\
    (config).ENTRY_H1600 = OD_ENTRY_H1600;\
    (config).CNT_TPDO = OD_CNT_TPDO;\
    (config).ENTRY_H1800 = OD_ENTRY_H1800;\
    (config).ENTRY_H1A00 = OD_ENTRY_H1A00;\
    (config).CNT_LEDS = 0;\
    (config).CNT_GFC = 0;\
    (config).ENTRY_H1300 = NULL;\
    (config).CNT_SRDO = 0;\
    (config).ENTRY_H1301 = NULL;\
    (config).ENTRY_H1381 = NULL;\
    (config).ENTRY_H13FE = NULL;\
    (config).ENTRY_H13FF = NULL;\
    (config).CNT_LSS_SLV = 0;\
    (config).CNT_LSS_MST = 0;\
    (config).CNT_GTWA = 0;\
    (config).CNT_TRACE = 0;\
}
#endif

#endif /* OD_H */
