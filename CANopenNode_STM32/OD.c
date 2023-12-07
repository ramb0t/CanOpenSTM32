/*******************************************************************************
    CANopen Object Dictionary definition for CANopenNode V4

    This file was automatically generated by CANopenEditor v4.1-30-g5935269

    https://github.com/CANopenNode/CANopenNode
    https://github.com/CANopenNode/CANopenEditor

    DON'T EDIT THIS FILE MANUALLY, UNLESS YOU KNOW WHAT YOU ARE DOING !!!!
*******************************************************************************/

#define OD_DEFINITION
#include "301/CO_ODinterface.h"
#include "OD.h"

#if CO_VERSION_MAJOR < 4
#error This Object dictionary is compatible with CANopenNode V4.0 and above!
#endif

/*******************************************************************************
    OD data initialization of all groups
*******************************************************************************/
OD_ATTR_PERSIST_COMM OD_PERSIST_COMM_t OD_PERSIST_COMM = {
    .x1000_deviceType = 0x00004269,
    .x1005_COB_ID_SYNCMessage = 0x00000080,
    .x1006_communicationCyclePeriod = 0x00000000,
    .x1007_synchronousWindowLength = 0x00000000,
    .x1012_COB_IDTimeStampObject = 0x00000100,
    .x1014_COB_ID_EMCY = 0x00000080,
    .x1015_inhibitTimeEMCY = 0x0000,
    .x1016_consumerHeartbeatTime_sub0 = 0x08,
    .x1016_consumerHeartbeatTime = {0x00710FA0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
    .x1017_producerHeartbeatTime = 0x0000,
    .x1018_identity = {
        .highestSub_indexSupported = 0x04,
        .vendor_ID = 0x00000000,
        .productCode = 0x00000000,
        .revisionNumber = 0x00000000,
        .serialNumber = 0x00000000
    },
    .x1019_synchronousCounterOverflowValue = 0x00,
    .x1029_errorBehaviorObject_sub0 = 0x02,
    .x1029_errorBehaviorObject = {0x01, 0x00},
    .x1280_SDOClientParameter = {
        .highestSub_indexSupported = 0x03,
        .COB_IDClientToServerTx = 0x80000000,
        .COB_IDServerToClientRx = 0x80000000,
        .node_IDOfTheSDOServer = 0x01
    },
    .x1400_RPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x05,
        .COB_IDUsedByRPDO = 0x800001F1,
        .transmissionType = 0xFE,
        .eventTimer = 0x0000
    },
    .x1401_RPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x05,
        .COB_IDUsedByRPDO = 0x80000300,
        .transmissionType = 0xFE,
        .eventTimer = 0x0000
    },
    .x1402_RPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x05,
        .COB_IDUsedByRPDO = 0x80000400,
        .transmissionType = 0xFE,
        .eventTimer = 0x0000
    },
    .x1403_RPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x05,
        .COB_IDUsedByRPDO = 0x80000500,
        .transmissionType = 0xFE,
        .eventTimer = 0x0000
    },
    .x1600_RPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x00,
        .applicationObject1 = 0x00000000,
        .applicationObject2 = 0x00000000,
        .applicationObject3 = 0x00000000,
        .applicationObject4 = 0x00000000,
        .applicationObject5 = 0x00000000,
        .applicationObject6 = 0x00000000,
        .applicationObject7 = 0x00000000,
        .applicationObject8 = 0x00000000
    },
    .x1601_RPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x00,
        .applicationObject1 = 0x00000000,
        .applicationObject2 = 0x00000000,
        .applicationObject3 = 0x00000000,
        .applicationObject4 = 0x00000000,
        .applicationObject5 = 0x00000000,
        .applicationObject6 = 0x00000000,
        .applicationObject7 = 0x00000000,
        .applicationObject8 = 0x00000000
    },
    .x1602_RPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x00,
        .applicationObject1 = 0x00000000,
        .applicationObject2 = 0x00000000,
        .applicationObject3 = 0x00000000,
        .applicationObject4 = 0x00000000,
        .applicationObject5 = 0x00000000,
        .applicationObject6 = 0x00000000,
        .applicationObject7 = 0x00000000,
        .applicationObject8 = 0x00000000
    },
    .x1603_RPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x00,
        .applicationObject1 = 0x00000000,
        .applicationObject2 = 0x00000000,
        .applicationObject3 = 0x00000000,
        .applicationObject4 = 0x00000000,
        .applicationObject5 = 0x00000000,
        .applicationObject6 = 0x00000000,
        .applicationObject7 = 0x00000000,
        .applicationObject8 = 0x00000000
    },
    .x1801_TPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x06,
        .COB_IDUsedByTPDO = 0x0000038E,
        .transmissionType = 0xFE,
        .inhibitTime = 0x0000,
        .eventTimer = 0x0064,
        .SYNCStartValue = 0x00
    },
    .x1A01_TPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x04,
        .applicationObject1 = 0x30060010,
        .applicationObject2 = 0x30070010,
        .applicationObject3 = 0x30080010,
        .applicationObject4 = 0x30090010,
        .applicationObject5 = 0x00000000,
        .applicationObject6 = 0x00000000,
        .applicationObject7 = 0x00000000,
        .applicationObject8 = 0x00000000
    },
    .x1F80_NMTStartup = 0x00000000,
    .x3000_SOC = 0x00,
    .x3001_status = 0x00,
    .x3002_DCVolt = 0x0000,
    .x3003_DCCurrent = 0,
    .x3004_sysTemp = 0,
    .x3005_thermDerate = 0x00
};

OD_ATTR_RAM OD_RAM_t OD_RAM = {
    .x1001_errorRegister = 0x00,
    .x1010_storeParameters_sub0 = 0x04,
    .x1010_storeParameters = {0x00000001, 0x00000001, 0x00000001, 0x00000001},
    .x1011_restoreDefaultParameters_sub0 = 0x04,
    .x1011_restoreDefaultParameters = {0x00000001, 0x00000001, 0x00000001, 0x00000001},
    .x1200_SDOServerParameter = {
        .highestSub_indexSupported = 0x02,
        .COB_IDClientToServerRx = 0x00000600,
        .COB_IDServerToClientTx = 0x00000580
    },
    .x1F81_slaveAssignment_sub0 = 0x7F,
    .x1F82_requestNMT_sub0 = 0x7F,
    .x3006_DCL = 0x0000,
    .x3007_CCL = 0x0000,
    .x3008_DVL = 0x0000,
    .x3009_CVL = 0x0000,
    .x6000_velocity = 0x00000000
};

OD_ATTR_ROM OD_ROM_t OD_ROM = {
    .x1800_TPDOCommunicationParameter = {
        .highestSub_indexSupported = 0x06,
        .COB_IDUsedByTPDO = 0x0000018E,
        .transmissionType = 0xFE,
        .inhibitTime = 0x0000,
        .eventTimer = 0x0064,
        .SYNCStartValue = 0x00
    },
    .x1A00_TPDOMappingParameter = {
        .numberOfMappedApplicationObjectsInPDO = 0x06,
        .applicationObject1 = 0x30000008,
        .applicationObject2 = 0x30010008,
        .applicationObject3 = 0x30020010,
        .applicationObject4 = 0x30030010,
        .applicationObject5 = 0x30040008,
        .applicationObject6 = 0x30050008,
        .applicationObject7 = 0x00000000,
        .applicationObject8 = 0x00000000
    }
};



/*******************************************************************************
    All OD objects (constant definitions)
*******************************************************************************/
typedef struct {
    OD_obj_var_t o_1000_deviceType;
    OD_obj_var_t o_1001_errorRegister;
    OD_obj_array_t o_1003_pre_definedErrorField;
    OD_obj_var_t o_1005_COB_ID_SYNCMessage;
    OD_obj_var_t o_1006_communicationCyclePeriod;
    OD_obj_var_t o_1007_synchronousWindowLength;
    OD_obj_var_t o_100C_guardTime;
    OD_obj_var_t o_100D_lifeTimeFactor;
    OD_obj_array_t o_1010_storeParameters;
    OD_obj_array_t o_1011_restoreDefaultParameters;
    OD_obj_var_t o_1012_COB_IDTimeStampObject;
    OD_obj_var_t o_1014_COB_ID_EMCY;
    OD_obj_var_t o_1015_inhibitTimeEMCY;
    OD_obj_array_t o_1016_consumerHeartbeatTime;
    OD_obj_var_t o_1017_producerHeartbeatTime;
    OD_obj_record_t o_1018_identity[5];
    OD_obj_var_t o_1019_synchronousCounterOverflowValue;
    OD_obj_array_t o_1029_errorBehaviorObject;
    OD_obj_record_t o_1200_SDOServerParameter[3];
    OD_obj_record_t o_1280_SDOClientParameter[4];
    OD_obj_record_t o_1400_RPDOCommunicationParameter[4];
    OD_obj_record_t o_1401_RPDOCommunicationParameter[4];
    OD_obj_record_t o_1402_RPDOCommunicationParameter[4];
    OD_obj_record_t o_1403_RPDOCommunicationParameter[4];
    OD_obj_record_t o_1600_RPDOMappingParameter[9];
    OD_obj_record_t o_1601_RPDOMappingParameter[9];
    OD_obj_record_t o_1602_RPDOMappingParameter[9];
    OD_obj_record_t o_1603_RPDOMappingParameter[9];
    OD_obj_record_t o_1800_TPDOCommunicationParameter[6];
    OD_obj_record_t o_1801_TPDOCommunicationParameter[6];
    OD_obj_record_t o_1A00_TPDOMappingParameter[9];
    OD_obj_record_t o_1A01_TPDOMappingParameter[9];
    OD_obj_var_t o_1F80_NMTStartup;
    OD_obj_array_t o_1F81_slaveAssignment;
    OD_obj_array_t o_1F82_requestNMT;
    OD_obj_var_t o_1F89_bootTime;
    OD_obj_var_t o_3000_SOC;
    OD_obj_var_t o_3001_status;
    OD_obj_var_t o_3002_DCVolt;
    OD_obj_var_t o_3003_DCCurrent;
    OD_obj_var_t o_3004_sysTemp;
    OD_obj_var_t o_3005_thermDerate;
    OD_obj_var_t o_3006_DCL;
    OD_obj_var_t o_3007_CCL;
    OD_obj_var_t o_3008_DVL;
    OD_obj_var_t o_3009_CVL;
    OD_obj_var_t o_6000_velocity;
} ODObjs_t;

static CO_PROGMEM ODObjs_t ODObjs = {
    .o_1000_deviceType = {
        .dataOrig = &OD_PERSIST_COMM.x1000_deviceType,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 4
    },
    .o_1001_errorRegister = {
        .dataOrig = &OD_RAM.x1001_errorRegister,
        .attribute = ODA_SDO_R | ODA_TPDO,
        .dataLength = 1
    },
    .o_1003_pre_definedErrorField = {
        .dataOrig0 = NULL,
        .dataOrig = NULL,
        .attribute0 = ODA_SDO_RW,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1005_COB_ID_SYNCMessage = {
        .dataOrig = &OD_PERSIST_COMM.x1005_COB_ID_SYNCMessage,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_1006_communicationCyclePeriod = {
        .dataOrig = &OD_PERSIST_COMM.x1006_communicationCyclePeriod,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_1007_synchronousWindowLength = {
        .dataOrig = &OD_PERSIST_COMM.x1007_synchronousWindowLength,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_100C_guardTime = {
        .dataOrig = &OD_ROM.x100C_guardTime,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 2
    },
    .o_100D_lifeTimeFactor = {
        .dataOrig = &OD_RAM.x100D_lifeTimeFactor,
        .attribute = ODA_SDO_R,
        .dataLength = 1
    },
    .o_1010_storeParameters = {
        .dataOrig0 = &OD_RAM.x1010_storeParameters_sub0,
        .dataOrig = &OD_RAM.x1010_storeParameters[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1011_restoreDefaultParameters = {
        .dataOrig0 = &OD_RAM.x1011_restoreDefaultParameters_sub0,
        .dataOrig = &OD_RAM.x1011_restoreDefaultParameters[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1012_COB_IDTimeStampObject = {
        .dataOrig = &OD_PERSIST_COMM.x1012_COB_IDTimeStampObject,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_1014_COB_ID_EMCY = {
        .dataOrig = &OD_PERSIST_COMM.x1014_COB_ID_EMCY,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_1015_inhibitTimeEMCY = {
        .dataOrig = &OD_PERSIST_COMM.x1015_inhibitTimeEMCY,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_1016_consumerHeartbeatTime = {
        .dataOrig0 = &OD_PERSIST_COMM.x1016_consumerHeartbeatTime_sub0,
        .dataOrig = &OD_PERSIST_COMM.x1016_consumerHeartbeatTime[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1017_producerHeartbeatTime = {
        .dataOrig = &OD_PERSIST_COMM.x1017_producerHeartbeatTime,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_1018_identity = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1018_identity.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1018_identity.vendor_ID,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1018_identity.productCode,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1018_identity.revisionNumber,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1018_identity.serialNumber,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1019_synchronousCounterOverflowValue = {
        .dataOrig = &OD_PERSIST_COMM.x1019_synchronousCounterOverflowValue,
        .attribute = ODA_SDO_RW,
        .dataLength = 1
    },
    .o_1029_errorBehaviorObject = {
        .dataOrig0 = &OD_PERSIST_COMM.x1029_errorBehaviorObject_sub0,
        .dataOrig = &OD_PERSIST_COMM.x1029_errorBehaviorObject[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW,
        .dataElementLength = 1,
        .dataElementSizeof = sizeof(uint8_t)
    },
    .o_1200_SDOServerParameter = {
        {
            .dataOrig = &OD_RAM.x1200_SDOServerParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1200_SDOServerParameter.COB_IDClientToServerRx,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1200_SDOServerParameter.COB_IDServerToClientTx,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_TPDO | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1280_SDOClientParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1280_SDOClientParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1280_SDOClientParameter.COB_IDClientToServerTx,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1280_SDOClientParameter.COB_IDServerToClientRx,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1280_SDOClientParameter.node_IDOfTheSDOServer,
            .subIndex = 3,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1400_RPDOCommunicationParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1400_RPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1400_RPDOCommunicationParameter.COB_IDUsedByRPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1400_RPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1400_RPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1401_RPDOCommunicationParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1401_RPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1401_RPDOCommunicationParameter.COB_IDUsedByRPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1401_RPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1401_RPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1402_RPDOCommunicationParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1402_RPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1402_RPDOCommunicationParameter.COB_IDUsedByRPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1402_RPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1402_RPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1403_RPDOCommunicationParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1403_RPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1403_RPDOCommunicationParameter.COB_IDUsedByRPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1403_RPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1403_RPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1600_RPDOMappingParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1600_RPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1600_RPDOMappingParameter.applicationObject1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1600_RPDOMappingParameter.applicationObject2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1600_RPDOMappingParameter.applicationObject3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1600_RPDOMappingParameter.applicationObject4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1600_RPDOMappingParameter.applicationObject5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1600_RPDOMappingParameter.applicationObject6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1600_RPDOMappingParameter.applicationObject7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1600_RPDOMappingParameter.applicationObject8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1601_RPDOMappingParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1601_RPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1601_RPDOMappingParameter.applicationObject1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1601_RPDOMappingParameter.applicationObject2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1601_RPDOMappingParameter.applicationObject3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1601_RPDOMappingParameter.applicationObject4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1601_RPDOMappingParameter.applicationObject5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1601_RPDOMappingParameter.applicationObject6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1601_RPDOMappingParameter.applicationObject7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1601_RPDOMappingParameter.applicationObject8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1602_RPDOMappingParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1602_RPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1602_RPDOMappingParameter.applicationObject1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1602_RPDOMappingParameter.applicationObject2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1602_RPDOMappingParameter.applicationObject3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1602_RPDOMappingParameter.applicationObject4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1602_RPDOMappingParameter.applicationObject5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1602_RPDOMappingParameter.applicationObject6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1602_RPDOMappingParameter.applicationObject7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1602_RPDOMappingParameter.applicationObject8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1603_RPDOMappingParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1603_RPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1603_RPDOMappingParameter.applicationObject1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1603_RPDOMappingParameter.applicationObject2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1603_RPDOMappingParameter.applicationObject3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1603_RPDOMappingParameter.applicationObject4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1603_RPDOMappingParameter.applicationObject5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1603_RPDOMappingParameter.applicationObject6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1603_RPDOMappingParameter.applicationObject7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1603_RPDOMappingParameter.applicationObject8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1800_TPDOCommunicationParameter = {
        {
            .dataOrig = &OD_ROM.x1800_TPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1800_TPDOCommunicationParameter.COB_IDUsedByTPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1800_TPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1800_TPDOCommunicationParameter.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_ROM.x1800_TPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_ROM.x1800_TPDOCommunicationParameter.SYNCStartValue,
            .subIndex = 6,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1801_TPDOCommunicationParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1801_TPDOCommunicationParameter.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1801_TPDOCommunicationParameter.COB_IDUsedByTPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1801_TPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1801_TPDOCommunicationParameter.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1801_TPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1801_TPDOCommunicationParameter.SYNCStartValue,
            .subIndex = 6,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1A00_TPDOMappingParameter = {
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.applicationObject1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.applicationObject2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.applicationObject3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.applicationObject4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.applicationObject5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.applicationObject6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.applicationObject7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.applicationObject8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1A01_TPDOMappingParameter = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1A01_TPDOMappingParameter.numberOfMappedApplicationObjectsInPDO,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A01_TPDOMappingParameter.applicationObject1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A01_TPDOMappingParameter.applicationObject2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A01_TPDOMappingParameter.applicationObject3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A01_TPDOMappingParameter.applicationObject4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A01_TPDOMappingParameter.applicationObject5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A01_TPDOMappingParameter.applicationObject6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A01_TPDOMappingParameter.applicationObject7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1A01_TPDOMappingParameter.applicationObject8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1F80_NMTStartup = {
        .dataOrig = &OD_PERSIST_COMM.x1F80_NMTStartup,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_1F81_slaveAssignment = {
        .dataOrig0 = &OD_RAM.x1F81_slaveAssignment_sub0,
        .dataOrig = NULL,
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1F82_requestNMT = {
        .dataOrig0 = &OD_RAM.x1F82_requestNMT_sub0,
        .dataOrig = NULL,
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW,
        .dataElementLength = 1,
        .dataElementSizeof = sizeof(uint8_t)
    },
    .o_1F89_bootTime = {
        .dataOrig = &OD_RAM.x1F89_bootTime,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_3000_SOC = {
        .dataOrig = &OD_PERSIST_COMM.x3000_SOC,
        .attribute = ODA_SDO_RW | ODA_TRPDO,
        .dataLength = 1
    },
    .o_3001_status = {
        .dataOrig = &OD_PERSIST_COMM.x3001_status,
        .attribute = ODA_SDO_RW | ODA_TRPDO,
        .dataLength = 1
    },
    .o_3002_DCVolt = {
        .dataOrig = &OD_PERSIST_COMM.x3002_DCVolt,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_3003_DCCurrent = {
        .dataOrig = &OD_PERSIST_COMM.x3003_DCCurrent,
        .attribute = ODA_SDO_RW | ODA_TPDO | ODA_MB,
        .dataLength = 2
    },
    .o_3004_sysTemp = {
        .dataOrig = &OD_PERSIST_COMM.x3004_sysTemp,
        .attribute = ODA_SDO_RW | ODA_TPDO,
        .dataLength = 1
    },
    .o_3005_thermDerate = {
        .dataOrig = &OD_PERSIST_COMM.x3005_thermDerate,
        .attribute = ODA_SDO_RW | ODA_TRPDO,
        .dataLength = 1
    },
    .o_3006_DCL = {
        .dataOrig = &OD_RAM.x3006_DCL,
        .attribute = ODA_SDO_RW | ODA_TPDO | ODA_MB,
        .dataLength = 2
    },
    .o_3007_CCL = {
        .dataOrig = &OD_RAM.x3007_CCL,
        .attribute = ODA_SDO_RW | ODA_TPDO | ODA_MB,
        .dataLength = 2
    },
    .o_3008_DVL = {
        .dataOrig = &OD_RAM.x3008_DVL,
        .attribute = ODA_SDO_RW | ODA_TPDO | ODA_MB,
        .dataLength = 2
    },
    .o_3009_CVL = {
        .dataOrig = &OD_RAM.x3009_CVL,
        .attribute = ODA_SDO_RW | ODA_TPDO | ODA_MB,
        .dataLength = 2
    },
    .o_6000_velocity = {
        .dataOrig = &OD_RAM.x6000_velocity,
        .attribute = ODA_SDO_RW | ODA_RPDO | ODA_MB,
        .dataLength = 4
    }
};


/*******************************************************************************
    Object dictionary
*******************************************************************************/
static OD_ATTR_OD OD_entry_t ODList[] = {
    {0x1000, 0x01, ODT_VAR, &ODObjs.o_1000_deviceType, NULL},
    {0x1001, 0x01, ODT_VAR, &ODObjs.o_1001_errorRegister, NULL},
    {0x1003, 0x11, ODT_ARR, &ODObjs.o_1003_pre_definedErrorField, NULL},
    {0x1005, 0x01, ODT_VAR, &ODObjs.o_1005_COB_ID_SYNCMessage, NULL},
    {0x1006, 0x01, ODT_VAR, &ODObjs.o_1006_communicationCyclePeriod, NULL},
    {0x1007, 0x01, ODT_VAR, &ODObjs.o_1007_synchronousWindowLength, NULL},
    {0x100C, 0x01, ODT_VAR, &ODObjs.o_100C_guardTime, NULL},
    {0x100D, 0x01, ODT_VAR, &ODObjs.o_100D_lifeTimeFactor, NULL},
    {0x1010, 0x05, ODT_ARR, &ODObjs.o_1010_storeParameters, NULL},
    {0x1011, 0x05, ODT_ARR, &ODObjs.o_1011_restoreDefaultParameters, NULL},
    {0x1012, 0x01, ODT_VAR, &ODObjs.o_1012_COB_IDTimeStampObject, NULL},
    {0x1014, 0x01, ODT_VAR, &ODObjs.o_1014_COB_ID_EMCY, NULL},
    {0x1015, 0x01, ODT_VAR, &ODObjs.o_1015_inhibitTimeEMCY, NULL},
    {0x1016, 0x09, ODT_ARR, &ODObjs.o_1016_consumerHeartbeatTime, NULL},
    {0x1017, 0x01, ODT_VAR, &ODObjs.o_1017_producerHeartbeatTime, NULL},
    {0x1018, 0x05, ODT_REC, &ODObjs.o_1018_identity, NULL},
    {0x1019, 0x01, ODT_VAR, &ODObjs.o_1019_synchronousCounterOverflowValue, NULL},
    {0x1029, 0x03, ODT_ARR, &ODObjs.o_1029_errorBehaviorObject, NULL},
    {0x1200, 0x03, ODT_REC, &ODObjs.o_1200_SDOServerParameter, NULL},
    {0x1280, 0x04, ODT_REC, &ODObjs.o_1280_SDOClientParameter, NULL},
    {0x1400, 0x04, ODT_REC, &ODObjs.o_1400_RPDOCommunicationParameter, NULL},
    {0x1401, 0x04, ODT_REC, &ODObjs.o_1401_RPDOCommunicationParameter, NULL},
    {0x1402, 0x04, ODT_REC, &ODObjs.o_1402_RPDOCommunicationParameter, NULL},
    {0x1403, 0x04, ODT_REC, &ODObjs.o_1403_RPDOCommunicationParameter, NULL},
    {0x1600, 0x09, ODT_REC, &ODObjs.o_1600_RPDOMappingParameter, NULL},
    {0x1601, 0x09, ODT_REC, &ODObjs.o_1601_RPDOMappingParameter, NULL},
    {0x1602, 0x09, ODT_REC, &ODObjs.o_1602_RPDOMappingParameter, NULL},
    {0x1603, 0x09, ODT_REC, &ODObjs.o_1603_RPDOMappingParameter, NULL},
    {0x1800, 0x06, ODT_REC, &ODObjs.o_1800_TPDOCommunicationParameter, NULL},
    {0x1801, 0x06, ODT_REC, &ODObjs.o_1801_TPDOCommunicationParameter, NULL},
    {0x1A00, 0x09, ODT_REC, &ODObjs.o_1A00_TPDOMappingParameter, NULL},
    {0x1A01, 0x09, ODT_REC, &ODObjs.o_1A01_TPDOMappingParameter, NULL},
    {0x1F80, 0x01, ODT_VAR, &ODObjs.o_1F80_NMTStartup, NULL},
    {0x1F81, 0x80, ODT_ARR, &ODObjs.o_1F81_slaveAssignment, NULL},
    {0x1F82, 0x80, ODT_ARR, &ODObjs.o_1F82_requestNMT, NULL},
    {0x1F89, 0x01, ODT_VAR, &ODObjs.o_1F89_bootTime, NULL},
    {0x3000, 0x01, ODT_VAR, &ODObjs.o_3000_SOC, NULL},
    {0x3001, 0x01, ODT_VAR, &ODObjs.o_3001_status, NULL},
    {0x3002, 0x01, ODT_VAR, &ODObjs.o_3002_DCVolt, NULL},
    {0x3003, 0x01, ODT_VAR, &ODObjs.o_3003_DCCurrent, NULL},
    {0x3004, 0x01, ODT_VAR, &ODObjs.o_3004_sysTemp, NULL},
    {0x3005, 0x01, ODT_VAR, &ODObjs.o_3005_thermDerate, NULL},
    {0x3006, 0x01, ODT_VAR, &ODObjs.o_3006_DCL, NULL},
    {0x3007, 0x01, ODT_VAR, &ODObjs.o_3007_CCL, NULL},
    {0x3008, 0x01, ODT_VAR, &ODObjs.o_3008_DVL, NULL},
    {0x3009, 0x01, ODT_VAR, &ODObjs.o_3009_CVL, NULL},
    {0x6000, 0x01, ODT_VAR, &ODObjs.o_6000_velocity, NULL},
    {0x0000, 0x00, 0, NULL, NULL}
};

static OD_t _OD = {
    (sizeof(ODList) / sizeof(ODList[0])) - 1,
    &ODList[0]
};

OD_t *OD = &_OD;
