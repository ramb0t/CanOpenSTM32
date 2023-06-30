/*******************************************************************************
    CANopen Object Dictionary definition for CANopenNode V4

    This file was automatically generated by CANopenEditor v4.1-2-gff637a7

    https://github.com/CANopenNode/CANopenNode
    https://github.com/CANopenNode/CANopenEditor

    DON'T EDIT THIS FILE MANUALLY !!!!
********************************************************************************

    File info:
        File Names:   OD.h; OD.c
        Project File: DS301_profile.xpd
        File Version: 1

        Created:      2020/11/23 13:00:00
        Created By:   
        Modified:     2023/06/28 20:12:56
        Modified By:  

    Device Info:
        Vendor Name:  
        Vendor ID:    
        Product Name: CANGrabR
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
#define OD_CNT_ARR_1F81 127
#define OD_CNT_ARR_1F82 127
#define OD_CNT_ARR_3020 1
#define OD_CNT_ARR_3030 1


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
    uint16_t x3000_command_Word;
    struct {
        uint8_t large_Display_Length;
        uint8_t large_Text_Char_1;
        uint8_t large_Text_Char_2;
        uint8_t large_Text_Char_3;
    } x3001_large_Display;
    struct {
        uint8_t small_Display_Length;
        uint8_t small_Text_Char_1;
        uint8_t small_Text_Char_2;
        uint8_t small_Text_Char_3;
        uint8_t small_Text_Char_4;
        uint8_t small_Text_Char_5;
        uint8_t small_Text_Char_6;
    } x3002_small_Display;
    uint8_t x3003_LEDCommand;
    uint8_t x3005_backlightPercent;
    struct {
        uint8_t hourMeterEnable;
        uint8_t hourMeterReset;
    } x3010_hourMeter;
    uint8_t x3020_BDI_sub0;
    uint8_t x3020_BDI[OD_CNT_ARR_3020];
    uint8_t x3030_bplus_sub0;
    uint16_t x3030_bplus[OD_CNT_ARR_3030];
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
    uint32_t x6000_velocity;
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
#define OD_ENTRY_H1200 &OD->list[17]
#define OD_ENTRY_H1280 &OD->list[18]
#define OD_ENTRY_H1400 &OD->list[19]
#define OD_ENTRY_H1401 &OD->list[20]
#define OD_ENTRY_H1402 &OD->list[21]
#define OD_ENTRY_H1403 &OD->list[22]
#define OD_ENTRY_H1600 &OD->list[23]
#define OD_ENTRY_H1601 &OD->list[24]
#define OD_ENTRY_H1602 &OD->list[25]
#define OD_ENTRY_H1603 &OD->list[26]
#define OD_ENTRY_H1800 &OD->list[27]
#define OD_ENTRY_H1801 &OD->list[28]
#define OD_ENTRY_H1A00 &OD->list[29]
#define OD_ENTRY_H1A01 &OD->list[30]
#define OD_ENTRY_H1F80 &OD->list[31]
#define OD_ENTRY_H1F81 &OD->list[32]
#define OD_ENTRY_H1F82 &OD->list[33]
#define OD_ENTRY_H1F89 &OD->list[34]
#define OD_ENTRY_H3000 &OD->list[35]
#define OD_ENTRY_H3001 &OD->list[36]
#define OD_ENTRY_H3002 &OD->list[37]
#define OD_ENTRY_H3003 &OD->list[38]
#define OD_ENTRY_H3005 &OD->list[39]
#define OD_ENTRY_H3010 &OD->list[40]
#define OD_ENTRY_H3020 &OD->list[41]
#define OD_ENTRY_H3030 &OD->list[42]
#define OD_ENTRY_H6000 &OD->list[43]


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
#define OD_ENTRY_H1200_SDOServerParameter &OD->list[17]
#define OD_ENTRY_H1280_SDOClientParameter &OD->list[18]
#define OD_ENTRY_H1400_RPDOCommunicationParameter &OD->list[19]
#define OD_ENTRY_H1401_RPDOCommunicationParameter &OD->list[20]
#define OD_ENTRY_H1402_RPDOCommunicationParameter &OD->list[21]
#define OD_ENTRY_H1403_RPDOCommunicationParameter &OD->list[22]
#define OD_ENTRY_H1600_RPDOMappingParameter &OD->list[23]
#define OD_ENTRY_H1601_RPDOMappingParameter &OD->list[24]
#define OD_ENTRY_H1602_RPDOMappingParameter &OD->list[25]
#define OD_ENTRY_H1603_RPDOMappingParameter &OD->list[26]
#define OD_ENTRY_H1800_TPDOCommunicationParameter &OD->list[27]
#define OD_ENTRY_H1801_TPDOCommunicationParameter &OD->list[28]
#define OD_ENTRY_H1A00_TPDOMappingParameter &OD->list[29]
#define OD_ENTRY_H1A01_TPDOMappingParameter &OD->list[30]
#define OD_ENTRY_H1F80_NMTStartup &OD->list[31]
#define OD_ENTRY_H1F81_slaveAssignment &OD->list[32]
#define OD_ENTRY_H1F82_requestNMT &OD->list[33]
#define OD_ENTRY_H1F89_bootTime &OD->list[34]
#define OD_ENTRY_H3000_command_Word &OD->list[35]
#define OD_ENTRY_H3001_large_Display &OD->list[36]
#define OD_ENTRY_H3002_small_Display &OD->list[37]
#define OD_ENTRY_H3003_LEDCommand &OD->list[38]
#define OD_ENTRY_H3005_backlightPercent &OD->list[39]
#define OD_ENTRY_H3010_hourMeter &OD->list[40]
#define OD_ENTRY_H3020_BDI &OD->list[41]
#define OD_ENTRY_H3030_bplus &OD->list[42]
#define OD_ENTRY_H6000_velocity &OD->list[43]


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
