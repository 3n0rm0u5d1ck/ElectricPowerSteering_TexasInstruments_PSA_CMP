
/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : DiagMgr_Cfg.c
* Module Description: Configuration file of DiagMgr module
* Product           : Gen II Plus - EA3.0
* Generator         : artt 2.0.2.0
* Generation Time   : 17.05.2018 16:26:24
*****************************************************************************/
/* Version Control:
 * Date Created:      Fri Jul 13 18:34:17 2012
 * %version:          15 %
 * %date_modified:    Tue Sep 18 15:37:25 2012 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/13/12   1       JJW       Initial template creation
 */



/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#define DIAGMGR_C /* Enable visibility to Module internal definitions in DiagMgr.h*/
#include "Ap_DiagMgr.h"


/*******************************************************************************
**                      Module Private Data                                   **
*******************************************************************************/

/*
 * Ntc Info Arrays
 */
/* Ap_0 Info Array */
	/* Note: No Events Configured for Ap_0 application */
/* Ap_6 Info Array */
#define DIAGMGR6_START_SEC_VAR_CLEARED_8
#include "MemMap.h"
VAR(uint8, AP_DIAGMGR_VAR) NTCQueueIndex6_Cnt_M_u08;
VAR(uint8, AP_DIAGMGR_VAR) ActDiagSts6_Cnt_M_u08;
VAR(uint8, AP_DIAGMGR_VAR) ResetNTCFlag6_Cnt_M_u08;
VAR(uint8, AP_DIAGMGR_VAR) ResetNTCFlag_Cnt_M_u08;
#define DIAGMGR6_STOP_SEC_VAR_CLEARED_8
#include "MemMap.h"

#define DIAGMGR6_START_SEC_VAR_CLEARED_16
#include "MemMap.h"
VAR(uint16, AP_DIAGMGR_VAR) DiagSts6_Cnt_M_b16[2u];
#define DIAGMGR6_STOP_SEC_VAR_CLEARED_16
#include "MemMap.h"

#define DIAGMGR6_START_SEC_VAR_CLEARED_32
#include "MemMap.h"
VAR(float32, AP_DIAGMGR_VAR) ActiveRmpRate6_UlspmS_M_f32[2u];
#define DIAGMGR6_STOP_SEC_VAR_CLEARED_32
#include "MemMap.h"

#define DIAGMGR6_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"
VAR(boolean, AP_DIAGMGR_VAR) DiagMgrInitComp6_Cnt_M_lgc;
VAR(NTCInfo_Str, AP_DIAGMGR_VAR)	DiagMgr_NTCInfo6_Cnt_M_str[DIAGMGR_EVENTNUM_6];
VAR(NTCInfoQueue_Str, AP_DIAGMGR_VAR)	NTCInfoQueue6_Cnt_M_str[2];
#define DIAGMGR6_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"

/* 
 * Description: Event Id to NTC Map 
 * Usage:       Index into the table with the Event Id to find the associated NTC
 */
CONST(NTCNumber, AP_DIAGMGR_CONST) T_NTCMapTbl6_Cnt_enum[6] = { 0xA0u, 0xF0u, 0xF1u, 0x100u, 0x1F5u, 0x1F3u };

/* Ap_9 Info Array */
#define DIAGMGR9_START_SEC_VAR_CLEARED_8
#include "MemMap.h"
VAR(uint8, AP_DIAGMGR_VAR) NTCQueueIndex9_Cnt_M_u08;
VAR(uint8, AP_DIAGMGR_VAR) ActDiagSts9_Cnt_M_u08;
VAR(uint8, AP_DIAGMGR_VAR) ResetNTCFlag9_Cnt_M_u08;
#define DIAGMGR9_STOP_SEC_VAR_CLEARED_8
#include "MemMap.h"

#define DIAGMGR9_START_SEC_VAR_CLEARED_16
#include "MemMap.h"
VAR(uint16, AP_DIAGMGR_VAR) DiagSts9_Cnt_M_b16[2u];
#define DIAGMGR9_STOP_SEC_VAR_CLEARED_16
#include "MemMap.h"

#define DIAGMGR9_START_SEC_VAR_CLEARED_32
#include "MemMap.h"
VAR(float32, AP_DIAGMGR_VAR) ActiveRmpRate9_UlspmS_M_f32[2u];
#define DIAGMGR9_STOP_SEC_VAR_CLEARED_32
#include "MemMap.h"

#define DIAGMGR9_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"
VAR(boolean, AP_DIAGMGR_VAR) DiagMgrInitComp9_Cnt_M_lgc;
VAR(NTCInfo_Str, AP_DIAGMGR_VAR)	DiagMgr_NTCInfo9_Cnt_M_str[DIAGMGR_EVENTNUM_9];
VAR(NTCInfoQueue_Str, AP_DIAGMGR_VAR)	NTCInfoQueue9_Cnt_M_str[1];
#define DIAGMGR9_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"

/* 
 * Description: Event Id to NTC Map 
 * Usage:       Index into the table with the Event Id to find the associated NTC
 */
CONST(NTCNumber, AP_DIAGMGR_CONST) T_NTCMapTbl9_Cnt_enum[28] = { 0x40u, 0x41u, 0x42u, 0x43u, 0x44u, 0x66u, 0x67u, 0x91u, 0x94u, 0x95u, 0xB0u, 0xB5u, 0xB6u, 0xD1u, 0xE0u, 0xE1u, 0xE2u, 0xE3u, 0xE4u, 0xE5u, 0xE6u, 0xE7u, 0xE8u, 0xE9u, 0x69u, 0x6Au, 0xF4u, 0x99u };

/* Ap_10 Info Array */
#define DIAGMGR10_START_SEC_VAR_CLEARED_8
#include "MemMap.h"
VAR(uint8, AP_DIAGMGR_VAR) NTCQueueIndex10_Cnt_M_u08;
VAR(uint8, AP_DIAGMGR_VAR) ActDiagSts10_Cnt_M_u08;
VAR(uint8, AP_DIAGMGR_VAR) ResetNTCFlag10_Cnt_M_u08;
#define DIAGMGR10_STOP_SEC_VAR_CLEARED_8
#include "MemMap.h"

#define DIAGMGR10_START_SEC_VAR_CLEARED_16
#include "MemMap.h"
VAR(uint16, AP_DIAGMGR_VAR) DiagSts10_Cnt_M_b16[2u];
#define DIAGMGR10_STOP_SEC_VAR_CLEARED_16
#include "MemMap.h"

#define DIAGMGR10_START_SEC_VAR_CLEARED_32
#include "MemMap.h"
VAR(float32, AP_DIAGMGR_VAR) ActiveRmpRate10_UlspmS_M_f32[2u];
#define DIAGMGR10_STOP_SEC_VAR_CLEARED_32
#include "MemMap.h"

#define DIAGMGR10_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"
VAR(boolean, AP_DIAGMGR_VAR) DiagMgrInitComp10_Cnt_M_lgc;
VAR(NTCInfo_Str, AP_DIAGMGR_VAR)	DiagMgr_NTCInfo10_Cnt_M_str[DIAGMGR_EVENTNUM_10];
VAR(NTCInfoQueue_Str, AP_DIAGMGR_VAR)	NTCInfoQueue10_Cnt_M_str[9];
#define DIAGMGR10_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"

/* 
 * Description: Event Id to NTC Map 
 * Usage:       Index into the table with the Event Id to find the associated NTC
 */
CONST(NTCNumber, AP_DIAGMGR_CONST) T_NTCMapTbl10_Cnt_enum[147] = { 0x01u, 0x02u, 0x03u, 0x04u, 0x06u, 0x07u, 0x08u, 0x0Au, 0x0Bu, 0x0Cu, 0x10u, 0x11u, 0x12u, 0x13u, 0x17u, 0x18u, 0x19u, 0x1Au, 0x1Bu, 0x1Cu, 0x1Du, 0x1Eu, 0x20u, 0x21u, 0x22u, 0x23u, 0x24u, 0x25u, 0x28u, 0x2Au, 0x2Bu, 0x2Cu, 0x30u, 0x31u, 0x32u, 0x33u, 0x35u, 0x36u, 0x37u, 0x46u, 0x48u, 0x4Du, 0x4Eu, 0x4Fu, 0x52u, 0x65u, 0x70u, 0x71u, 0x72u, 0x75u, 0x80u, 0x82u, 0x85u, 0x90u, 0xA9u, 0xB2u, 0xB9u, 0xBFu, 0xC0u, 0xC4u, 0xC5u, 0xC6u, 0xC7u, 0xC8u, 0xC9u, 0xCAu, 0xCCu, 0x101u, 0x120u, 0x121u, 0x128u, 0x129u, 0x12Cu, 0x130u, 0x131u, 0x132u, 0x133u, 0x134u, 0x138u, 0x139u, 0x140u, 0x141u, 0x146u, 0x148u, 0x149u, 0x14Au, 0x14Bu, 0x14Cu, 0x14Du, 0x14Eu, 0x150u, 0x151u, 0x152u, 0x153u, 0x154u, 0x155u, 0x158u, 0x159u, 0x160u, 0x161u, 0x164u, 0x165u, 0x168u, 0x169u, 0x16Cu, 0x16Du, 0x1F8u, 0x1FBu, 0x166u, 0x171u, 0x179u, 0x191u, 0x170u, 0x190u, 0x194u, 0x147u, 0x144u, 0x1FCu, 0xAAu, 0xABu, 0xACu, 0xADu, 0xAEu, 0xAFu, 0xEBu, 0xECu, 0xEDu, 0x178u, 0x15Cu, 0x145u, 0x180u, 0x181u, 0x184u, 0x188u, 0x189u, 0x18Au, 0x18Bu, 0x18Cu, 0x18Du, 0x18Eu, 0x16u, 0xEFu, 0xEEu, 0xEAu, 0x0Fu, 0x18Fu, 0x4Cu };

/* Ap_11 Info Array */
#define DIAGMGR11_START_SEC_VAR_CLEARED_8
#include "MemMap.h"
VAR(uint8, AP_DIAGMGR_VAR) NTCQueueIndex11_Cnt_M_u08;
VAR(uint8, AP_DIAGMGR_VAR) ActDiagSts11_Cnt_M_u08;
VAR(uint8, AP_DIAGMGR_VAR) ResetNTCFlag11_Cnt_M_u08;
#define DIAGMGR11_STOP_SEC_VAR_CLEARED_8
#include "MemMap.h"

#define DIAGMGR11_START_SEC_VAR_CLEARED_16
#include "MemMap.h"
VAR(uint16, AP_DIAGMGR_VAR) DiagSts11_Cnt_M_b16[2u];
#define DIAGMGR11_STOP_SEC_VAR_CLEARED_16
#include "MemMap.h"

#define DIAGMGR11_START_SEC_VAR_CLEARED_32
#include "MemMap.h"
VAR(float32, AP_DIAGMGR_VAR) ActiveRmpRate11_UlspmS_M_f32[2u];
#define DIAGMGR11_STOP_SEC_VAR_CLEARED_32
#include "MemMap.h"

#define DIAGMGR11_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"
VAR(boolean, AP_DIAGMGR_VAR) DiagMgrInitComp11_Cnt_M_lgc;
VAR(NTCInfo_Str, AP_DIAGMGR_VAR)	DiagMgr_NTCInfo11_Cnt_M_str[DIAGMGR_EVENTNUM_11];
VAR(NTCInfoQueue_Str, AP_DIAGMGR_VAR)	NTCInfoQueue11_Cnt_M_str[1];
#define DIAGMGR11_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"

/* 
 * Description: Event Id to NTC Map 
 * Usage:       Index into the table with the Event Id to find the associated NTC
 */
CONST(NTCNumber, AP_DIAGMGR_CONST) T_NTCMapTbl11_Cnt_enum[4] = { 0x45u, 0x56u, 0xCBu, 0xCDu };


/* 
 * Description: Application Id to DiagSts Lookup 
 * Usage:       Index into the table with the Application Id to find the associated DiagSts buffer
 */
CONSTP2VAR(uint16, AUTOMATIC, AP_DIAGMGR_CONST) T_DiagMgrDiagSts_Ptr_b16[4u] = {DiagSts6_Cnt_M_b16, DiagSts9_Cnt_M_b16, DiagSts10_Cnt_M_b16, DiagSts11_Cnt_M_b16};

/* 
 * Description: Application Id to DiagSts Lookup 
 * Usage:       Index into the table with the Application Id to find the associated DiagSts buffer
 */
CONSTP2VAR(float32, AUTOMATIC, AP_DIAGMGR_CONST) T_DiagMgrRmpRate_Ptr_f32[4u] = {ActiveRmpRate6_UlspmS_M_f32, ActiveRmpRate9_UlspmS_M_f32, ActiveRmpRate10_UlspmS_M_f32, ActiveRmpRate11_UlspmS_M_f32};

/* 
 * Description: Application to Info Array Map 
 * Usage:       Index into the table with the application index found in T_DiagMgrNtcAppInfoMap_Cnt_Str
 */
#define DIAGMGR_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
CONST(DiagMgrNtcInfoMap_Str, AP_DIAGMGR_CONST) T_DiagMgrNtcInfoPtr_Cnt_Str[4u]= {
/*		NtcInfo		Size	*/
	{ &DiagMgr_NTCInfo6_Cnt_M_str[0], 6u /* Ap_6 */ },
	{ &DiagMgr_NTCInfo9_Cnt_M_str[0], 28u /* Ap_9 */ },
	{ &DiagMgr_NTCInfo10_Cnt_M_str[0], 147u /* Ap_10 */ },
	{ &DiagMgr_NTCInfo11_Cnt_M_str[0], 4u /* Ap_11 */ },
};


/* 
 * Description: NTC to Application and EventId Map 
 * Usage:       Index into the table with the desired NTC (0 to 511)
 *              An application value 0xFF indicates no mapping exists for the NTC
 */
CONST(DiagMgrNtcAppMap_Str, AP_DIAGMGR_CONST) T_DiagMgrNtcAppInfoMap_Cnt_Str[512u]= {
/*Idx	App  Info	*/
	{ 0xFFu, 0xFFu },	/* NTC 0x00 */
	{ 0x02u, 0x00u },	/* NTC 0x01 */
	{ 0x02u, 0x01u },	/* NTC 0x02 */
	{ 0x02u, 0x02u },	/* NTC 0x03 */
	{ 0x02u, 0x03u },	/* NTC 0x04 */
	{ 0xFFu, 0xFFu },	/* NTC 0x05 */
	{ 0x02u, 0x04u },	/* NTC 0x06 */
	{ 0x02u, 0x05u },	/* NTC 0x07 */
	{ 0x02u, 0x06u },	/* NTC 0x08 */
	{ 0xFFu, 0xFFu },	/* NTC 0x09 */
	{ 0x02u, 0x07u },	/* NTC 0x0A */
	{ 0x02u, 0x08u },	/* NTC 0x0B */
	{ 0x02u, 0x09u },	/* NTC 0x0C */
	{ 0xFFu, 0xFFu },	/* NTC 0x0D */
	{ 0xFFu, 0xFFu },	/* NTC 0x0E */
	{ 0x02u, 0x90u },	/* NTC 0x0F */
	{ 0x02u, 0x0Au },	/* NTC 0x10 */
	{ 0x02u, 0x0Bu },	/* NTC 0x11 */
	{ 0x02u, 0x0Cu },	/* NTC 0x12 */
	{ 0x02u, 0x0Du },	/* NTC 0x13 */
	{ 0xFFu, 0xFFu },	/* NTC 0x14 */
	{ 0xFFu, 0xFFu },	/* NTC 0x15 */
	{ 0x02u, 0x8Cu },	/* NTC 0x16 */
	{ 0x02u, 0x0Eu },	/* NTC 0x17 */
	{ 0x02u, 0x0Fu },	/* NTC 0x18 */
	{ 0x02u, 0x10u },	/* NTC 0x19 */
	{ 0x02u, 0x11u },	/* NTC 0x1A */
	{ 0x02u, 0x12u },	/* NTC 0x1B */
	{ 0x02u, 0x13u },	/* NTC 0x1C */
	{ 0x02u, 0x14u },	/* NTC 0x1D */
	{ 0x02u, 0x15u },	/* NTC 0x1E */
	{ 0xFFu, 0xFFu },	/* NTC 0x1F */
	{ 0x02u, 0x16u },	/* NTC 0x20 */
	{ 0x02u, 0x17u },	/* NTC 0x21 */
	{ 0x02u, 0x18u },	/* NTC 0x22 */
	{ 0x02u, 0x19u },	/* NTC 0x23 */
	{ 0x02u, 0x1Au },	/* NTC 0x24 */
	{ 0x02u, 0x1Bu },	/* NTC 0x25 */
	{ 0xFFu, 0xFFu },	/* NTC 0x26 */
	{ 0xFFu, 0xFFu },	/* NTC 0x27 */
	{ 0x02u, 0x1Cu },	/* NTC 0x28 */
	{ 0xFFu, 0xFFu },	/* NTC 0x29 */
	{ 0x02u, 0x1Du },	/* NTC 0x2A */
	{ 0x02u, 0x1Eu },	/* NTC 0x2B */
	{ 0x02u, 0x1Fu },	/* NTC 0x2C */
	{ 0xFFu, 0xFFu },	/* NTC 0x2D */
	{ 0xFFu, 0xFFu },	/* NTC 0x2E */
	{ 0xFFu, 0xFFu },	/* NTC 0x2F */
	{ 0x02u, 0x20u },	/* NTC 0x30 */
	{ 0x02u, 0x21u },	/* NTC 0x31 */
	{ 0x02u, 0x22u },	/* NTC 0x32 */
	{ 0x02u, 0x23u },	/* NTC 0x33 */
	{ 0xFFu, 0xFFu },	/* NTC 0x34 */
	{ 0x02u, 0x24u },	/* NTC 0x35 */
	{ 0x02u, 0x25u },	/* NTC 0x36 */
	{ 0x02u, 0x26u },	/* NTC 0x37 */
	{ 0xFFu, 0xFFu },	/* NTC 0x38 */
	{ 0xFFu, 0xFFu },	/* NTC 0x39 */
	{ 0xFFu, 0xFFu },	/* NTC 0x3A */
	{ 0xFFu, 0xFFu },	/* NTC 0x3B */
	{ 0xFFu, 0xFFu },	/* NTC 0x3C */
	{ 0xFFu, 0xFFu },	/* NTC 0x3D */
	{ 0xFFu, 0xFFu },	/* NTC 0x3E */
	{ 0xFFu, 0xFFu },	/* NTC 0x3F */
	{ 0x01u, 0x00u },	/* NTC 0x40 */
	{ 0x01u, 0x01u },	/* NTC 0x41 */
	{ 0x01u, 0x02u },	/* NTC 0x42 */
	{ 0x01u, 0x03u },	/* NTC 0x43 */
	{ 0x01u, 0x04u },	/* NTC 0x44 */
	{ 0x03u, 0x00u },	/* NTC 0x45 */
	{ 0x02u, 0x27u },	/* NTC 0x46 */
	{ 0xFFu, 0xFFu },	/* NTC 0x47 */
	{ 0x02u, 0x28u },	/* NTC 0x48 */
	{ 0xFFu, 0xFFu },	/* NTC 0x49 */
	{ 0xFFu, 0xFFu },	/* NTC 0x4A */
	{ 0xFFu, 0xFFu },	/* NTC 0x4B */
	{ 0x02u, 0x92u },	/* NTC 0x4C */
	{ 0x02u, 0x29u },	/* NTC 0x4D */
	{ 0x02u, 0x2Au },	/* NTC 0x4E */
	{ 0x02u, 0x2Bu },	/* NTC 0x4F */
	{ 0xFFu, 0xFFu },	/* NTC 0x50 */
	{ 0xFFu, 0xFFu },	/* NTC 0x51 */
	{ 0x02u, 0x2Cu },	/* NTC 0x52 */
	{ 0xFFu, 0xFFu },	/* NTC 0x53 */
	{ 0xFFu, 0xFFu },	/* NTC 0x54 */
	{ 0xFFu, 0xFFu },	/* NTC 0x55 */
	{ 0x03u, 0x01u },	/* NTC 0x56 */
	{ 0xFFu, 0xFFu },	/* NTC 0x57 */
	{ 0xFFu, 0xFFu },	/* NTC 0x58 */
	{ 0xFFu, 0xFFu },	/* NTC 0x59 */
	{ 0xFFu, 0xFFu },	/* NTC 0x5A */
	{ 0xFFu, 0xFFu },	/* NTC 0x5B */
	{ 0xFFu, 0xFFu },	/* NTC 0x5C */
	{ 0xFFu, 0xFFu },	/* NTC 0x5D */
	{ 0xFFu, 0xFFu },	/* NTC 0x5E */
	{ 0xFFu, 0xFFu },	/* NTC 0x5F */
	{ 0xFFu, 0xFFu },	/* NTC 0x60 */
	{ 0xFFu, 0xFFu },	/* NTC 0x61 */
	{ 0xFFu, 0xFFu },	/* NTC 0x62 */
	{ 0xFFu, 0xFFu },	/* NTC 0x63 */
	{ 0xFFu, 0xFFu },	/* NTC 0x64 */
	{ 0x02u, 0x2Du },	/* NTC 0x65 */
	{ 0x01u, 0x05u },	/* NTC 0x66 */
	{ 0x01u, 0x06u },	/* NTC 0x67 */
	{ 0xFFu, 0xFFu },	/* NTC 0x68 */
	{ 0x01u, 0x18u },	/* NTC 0x69 */
	{ 0x01u, 0x19u },	/* NTC 0x6A */
	{ 0xFFu, 0xFFu },	/* NTC 0x6B */
	{ 0xFFu, 0xFFu },	/* NTC 0x6C */
	{ 0xFFu, 0xFFu },	/* NTC 0x6D */
	{ 0xFFu, 0xFFu },	/* NTC 0x6E */
	{ 0xFFu, 0xFFu },	/* NTC 0x6F */
	{ 0x02u, 0x2Eu },	/* NTC 0x70 */
	{ 0x02u, 0x2Fu },	/* NTC 0x71 */
	{ 0x02u, 0x30u },	/* NTC 0x72 */
	{ 0xFFu, 0xFFu },	/* NTC 0x73 */
	{ 0xFFu, 0xFFu },	/* NTC 0x74 */
	{ 0x02u, 0x31u },	/* NTC 0x75 */
	{ 0xFFu, 0xFFu },	/* NTC 0x76 */
	{ 0xFFu, 0xFFu },	/* NTC 0x77 */
	{ 0xFFu, 0xFFu },	/* NTC 0x78 */
	{ 0xFFu, 0xFFu },	/* NTC 0x79 */
	{ 0xFFu, 0xFFu },	/* NTC 0x7A */
	{ 0xFFu, 0xFFu },	/* NTC 0x7B */
	{ 0xFFu, 0xFFu },	/* NTC 0x7C */
	{ 0xFFu, 0xFFu },	/* NTC 0x7D */
	{ 0xFFu, 0xFFu },	/* NTC 0x7E */
	{ 0xFFu, 0xFFu },	/* NTC 0x7F */
	{ 0x02u, 0x32u },	/* NTC 0x80 */
	{ 0xFFu, 0xFFu },	/* NTC 0x81 */
	{ 0x02u, 0x33u },	/* NTC 0x82 */
	{ 0xFFu, 0xFFu },	/* NTC 0x83 */
	{ 0xFFu, 0xFFu },	/* NTC 0x84 */
	{ 0x02u, 0x34u },	/* NTC 0x85 */
	{ 0xFFu, 0xFFu },	/* NTC 0x86 */
	{ 0xFFu, 0xFFu },	/* NTC 0x87 */
	{ 0xFFu, 0xFFu },	/* NTC 0x88 */
	{ 0xFFu, 0xFFu },	/* NTC 0x89 */
	{ 0xFFu, 0xFFu },	/* NTC 0x8A */
	{ 0xFFu, 0xFFu },	/* NTC 0x8B */
	{ 0xFFu, 0xFFu },	/* NTC 0x8C */
	{ 0xFFu, 0xFFu },	/* NTC 0x8D */
	{ 0xFFu, 0xFFu },	/* NTC 0x8E */
	{ 0xFFu, 0xFFu },	/* NTC 0x8F */
	{ 0x02u, 0x35u },	/* NTC 0x90 */
	{ 0x01u, 0x07u },	/* NTC 0x91 */
	{ 0xFFu, 0xFFu },	/* NTC 0x92 */
	{ 0xFFu, 0xFFu },	/* NTC 0x93 */
	{ 0x01u, 0x08u },	/* NTC 0x94 */
	{ 0x01u, 0x09u },	/* NTC 0x95 */
	{ 0xFFu, 0xFFu },	/* NTC 0x96 */
	{ 0xFFu, 0xFFu },	/* NTC 0x97 */
	{ 0xFFu, 0xFFu },	/* NTC 0x98 */
	{ 0x01u, 0x1Bu },	/* NTC 0x99 */
	{ 0xFFu, 0xFFu },	/* NTC 0x9A */
	{ 0xFFu, 0xFFu },	/* NTC 0x9B */
	{ 0xFFu, 0xFFu },	/* NTC 0x9C */
	{ 0xFFu, 0xFFu },	/* NTC 0x9D */
	{ 0xFFu, 0xFFu },	/* NTC 0x9E */
	{ 0xFFu, 0xFFu },	/* NTC 0x9F */
	{ 0x00u, 0x00u },	/* NTC 0xA0 */
	{ 0xFFu, 0xFFu },	/* NTC 0xA1 */
	{ 0xFFu, 0xFFu },	/* NTC 0xA2 */
	{ 0xFFu, 0xFFu },	/* NTC 0xA3 */
	{ 0xFFu, 0xFFu },	/* NTC 0xA4 */
	{ 0xFFu, 0xFFu },	/* NTC 0xA5 */
	{ 0xFFu, 0xFFu },	/* NTC 0xA6 */
	{ 0xFFu, 0xFFu },	/* NTC 0xA7 */
	{ 0xFFu, 0xFFu },	/* NTC 0xA8 */
	{ 0x02u, 0x36u },	/* NTC 0xA9 */
	{ 0x02u, 0x76u },	/* NTC 0xAA */
	{ 0x02u, 0x77u },	/* NTC 0xAB */
	{ 0x02u, 0x78u },	/* NTC 0xAC */
	{ 0x02u, 0x79u },	/* NTC 0xAD */
	{ 0x02u, 0x7Au },	/* NTC 0xAE */
	{ 0x02u, 0x7Bu },	/* NTC 0xAF */
	{ 0x01u, 0x0Au },	/* NTC 0xB0 */
	{ 0xFFu, 0xFFu },	/* NTC 0xB1 */
	{ 0x02u, 0x37u },	/* NTC 0xB2 */
	{ 0xFFu, 0xFFu },	/* NTC 0xB3 */
	{ 0xFFu, 0xFFu },	/* NTC 0xB4 */
	{ 0x01u, 0x0Bu },	/* NTC 0xB5 */
	{ 0x01u, 0x0Cu },	/* NTC 0xB6 */
	{ 0xFFu, 0xFFu },	/* NTC 0xB7 */
	{ 0xFFu, 0xFFu },	/* NTC 0xB8 */
	{ 0x02u, 0x38u },	/* NTC 0xB9 */
	{ 0xFFu, 0xFFu },	/* NTC 0xBA */
	{ 0xFFu, 0xFFu },	/* NTC 0xBB */
	{ 0xFFu, 0xFFu },	/* NTC 0xBC */
	{ 0xFFu, 0xFFu },	/* NTC 0xBD */
	{ 0xFFu, 0xFFu },	/* NTC 0xBE */
	{ 0x02u, 0x39u },	/* NTC 0xBF */
	{ 0x02u, 0x3Au },	/* NTC 0xC0 */
	{ 0xFFu, 0xFFu },	/* NTC 0xC1 */
	{ 0xFFu, 0xFFu },	/* NTC 0xC2 */
	{ 0xFFu, 0xFFu },	/* NTC 0xC3 */
	{ 0x02u, 0x3Bu },	/* NTC 0xC4 */
	{ 0x02u, 0x3Cu },	/* NTC 0xC5 */
	{ 0x02u, 0x3Du },	/* NTC 0xC6 */
	{ 0x02u, 0x3Eu },	/* NTC 0xC7 */
	{ 0x02u, 0x3Fu },	/* NTC 0xC8 */
	{ 0x02u, 0x40u },	/* NTC 0xC9 */
	{ 0x02u, 0x41u },	/* NTC 0xCA */
	{ 0x03u, 0x02u },	/* NTC 0xCB */
	{ 0x02u, 0x42u },	/* NTC 0xCC */
	{ 0x03u, 0x03u },	/* NTC 0xCD */
	{ 0xFFu, 0xFFu },	/* NTC 0xCE */
	{ 0xFFu, 0xFFu },	/* NTC 0xCF */
	{ 0xFFu, 0xFFu },	/* NTC 0xD0 */
	{ 0x01u, 0x0Du },	/* NTC 0xD1 */
	{ 0xFFu, 0xFFu },	/* NTC 0xD2 */
	{ 0xFFu, 0xFFu },	/* NTC 0xD3 */
	{ 0xFFu, 0xFFu },	/* NTC 0xD4 */
	{ 0xFFu, 0xFFu },	/* NTC 0xD5 */
	{ 0xFFu, 0xFFu },	/* NTC 0xD6 */
	{ 0xFFu, 0xFFu },	/* NTC 0xD7 */
	{ 0xFFu, 0xFFu },	/* NTC 0xD8 */
	{ 0xFFu, 0xFFu },	/* NTC 0xD9 */
	{ 0xFFu, 0xFFu },	/* NTC 0xDA */
	{ 0xFFu, 0xFFu },	/* NTC 0xDB */
	{ 0xFFu, 0xFFu },	/* NTC 0xDC */
	{ 0xFFu, 0xFFu },	/* NTC 0xDD */
	{ 0xFFu, 0xFFu },	/* NTC 0xDE */
	{ 0xFFu, 0xFFu },	/* NTC 0xDF */
	{ 0x01u, 0x0Eu },	/* NTC 0xE0 */
	{ 0x01u, 0x0Fu },	/* NTC 0xE1 */
	{ 0x01u, 0x10u },	/* NTC 0xE2 */
	{ 0x01u, 0x11u },	/* NTC 0xE3 */
	{ 0x01u, 0x12u },	/* NTC 0xE4 */
	{ 0x01u, 0x13u },	/* NTC 0xE5 */
	{ 0x01u, 0x14u },	/* NTC 0xE6 */
	{ 0x01u, 0x15u },	/* NTC 0xE7 */
	{ 0x01u, 0x16u },	/* NTC 0xE8 */
	{ 0x01u, 0x17u },	/* NTC 0xE9 */
	{ 0x02u, 0x8Fu },	/* NTC 0xEA */
	{ 0x02u, 0x7Cu },	/* NTC 0xEB */
	{ 0x02u, 0x7Du },	/* NTC 0xEC */
	{ 0x02u, 0x7Eu },	/* NTC 0xED */
	{ 0x02u, 0x8Eu },	/* NTC 0xEE */
	{ 0x02u, 0x8Du },	/* NTC 0xEF */
	{ 0x00u, 0x01u },	/* NTC 0xF0 */
	{ 0x00u, 0x02u },	/* NTC 0xF1 */
	{ 0xFFu, 0xFFu },	/* NTC 0xF2 */
	{ 0xFFu, 0xFFu },	/* NTC 0xF3 */
	{ 0x01u, 0x1Au },	/* NTC 0xF4 */
	{ 0xFFu, 0xFFu },	/* NTC 0xF5 */
	{ 0xFFu, 0xFFu },	/* NTC 0xF6 */
	{ 0xFFu, 0xFFu },	/* NTC 0xF7 */
	{ 0xFFu, 0xFFu },	/* NTC 0xF8 */
	{ 0xFFu, 0xFFu },	/* NTC 0xF9 */
	{ 0xFFu, 0xFFu },	/* NTC 0xFA */
	{ 0xFFu, 0xFFu },	/* NTC 0xFB */
	{ 0xFFu, 0xFFu },	/* NTC 0xFC */
	{ 0xFFu, 0xFFu },	/* NTC 0xFD */
	{ 0xFFu, 0xFFu },	/* NTC 0xFE */
	{ 0xFFu, 0xFFu },	/* NTC 0xFF */
	{ 0x00u, 0x03u },	/* NTC 0x100 */
	{ 0x02u, 0x43u },	/* NTC 0x101 */
	{ 0xFFu, 0xFFu },	/* NTC 0x102 */
	{ 0xFFu, 0xFFu },	/* NTC 0x103 */
	{ 0xFFu, 0xFFu },	/* NTC 0x104 */
	{ 0xFFu, 0xFFu },	/* NTC 0x105 */
	{ 0xFFu, 0xFFu },	/* NTC 0x106 */
	{ 0xFFu, 0xFFu },	/* NTC 0x107 */
	{ 0xFFu, 0xFFu },	/* NTC 0x108 */
	{ 0xFFu, 0xFFu },	/* NTC 0x109 */
	{ 0xFFu, 0xFFu },	/* NTC 0x10A */
	{ 0xFFu, 0xFFu },	/* NTC 0x10B */
	{ 0xFFu, 0xFFu },	/* NTC 0x10C */
	{ 0xFFu, 0xFFu },	/* NTC 0x10D */
	{ 0xFFu, 0xFFu },	/* NTC 0x10E */
	{ 0xFFu, 0xFFu },	/* NTC 0x10F */
	{ 0xFFu, 0xFFu },	/* NTC 0x110 */
	{ 0xFFu, 0xFFu },	/* NTC 0x111 */
	{ 0xFFu, 0xFFu },	/* NTC 0x112 */
	{ 0xFFu, 0xFFu },	/* NTC 0x113 */
	{ 0xFFu, 0xFFu },	/* NTC 0x114 */
	{ 0xFFu, 0xFFu },	/* NTC 0x115 */
	{ 0xFFu, 0xFFu },	/* NTC 0x116 */
	{ 0xFFu, 0xFFu },	/* NTC 0x117 */
	{ 0xFFu, 0xFFu },	/* NTC 0x118 */
	{ 0xFFu, 0xFFu },	/* NTC 0x119 */
	{ 0xFFu, 0xFFu },	/* NTC 0x11A */
	{ 0xFFu, 0xFFu },	/* NTC 0x11B */
	{ 0xFFu, 0xFFu },	/* NTC 0x11C */
	{ 0xFFu, 0xFFu },	/* NTC 0x11D */
	{ 0xFFu, 0xFFu },	/* NTC 0x11E */
	{ 0xFFu, 0xFFu },	/* NTC 0x11F */
	{ 0x02u, 0x44u },	/* NTC 0x120 */
	{ 0x02u, 0x45u },	/* NTC 0x121 */
	{ 0xFFu, 0xFFu },	/* NTC 0x122 */
	{ 0xFFu, 0xFFu },	/* NTC 0x123 */
	{ 0xFFu, 0xFFu },	/* NTC 0x124 */
	{ 0xFFu, 0xFFu },	/* NTC 0x125 */
	{ 0xFFu, 0xFFu },	/* NTC 0x126 */
	{ 0xFFu, 0xFFu },	/* NTC 0x127 */
	{ 0x02u, 0x46u },	/* NTC 0x128 */
	{ 0x02u, 0x47u },	/* NTC 0x129 */
	{ 0xFFu, 0xFFu },	/* NTC 0x12A */
	{ 0xFFu, 0xFFu },	/* NTC 0x12B */
	{ 0x02u, 0x48u },	/* NTC 0x12C */
	{ 0xFFu, 0xFFu },	/* NTC 0x12D */
	{ 0xFFu, 0xFFu },	/* NTC 0x12E */
	{ 0xFFu, 0xFFu },	/* NTC 0x12F */
	{ 0x02u, 0x49u },	/* NTC 0x130 */
	{ 0x02u, 0x4Au },	/* NTC 0x131 */
	{ 0x02u, 0x4Bu },	/* NTC 0x132 */
	{ 0x02u, 0x4Cu },	/* NTC 0x133 */
	{ 0x02u, 0x4Du },	/* NTC 0x134 */
	{ 0xFFu, 0xFFu },	/* NTC 0x135 */
	{ 0xFFu, 0xFFu },	/* NTC 0x136 */
	{ 0xFFu, 0xFFu },	/* NTC 0x137 */
	{ 0x02u, 0x4Eu },	/* NTC 0x138 */
	{ 0x02u, 0x4Fu },	/* NTC 0x139 */
	{ 0xFFu, 0xFFu },	/* NTC 0x13A */
	{ 0xFFu, 0xFFu },	/* NTC 0x13B */
	{ 0xFFu, 0xFFu },	/* NTC 0x13C */
	{ 0xFFu, 0xFFu },	/* NTC 0x13D */
	{ 0xFFu, 0xFFu },	/* NTC 0x13E */
	{ 0xFFu, 0xFFu },	/* NTC 0x13F */
	{ 0x02u, 0x50u },	/* NTC 0x140 */
	{ 0x02u, 0x51u },	/* NTC 0x141 */
	{ 0xFFu, 0xFFu },	/* NTC 0x142 */
	{ 0xFFu, 0xFFu },	/* NTC 0x143 */
	{ 0x02u, 0x74u },	/* NTC 0x144 */
	{ 0x02u, 0x81u },	/* NTC 0x145 */
	{ 0x02u, 0x52u },	/* NTC 0x146 */
	{ 0x02u, 0x73u },	/* NTC 0x147 */
	{ 0x02u, 0x53u },	/* NTC 0x148 */
	{ 0x02u, 0x54u },	/* NTC 0x149 */
	{ 0x02u, 0x55u },	/* NTC 0x14A */
	{ 0x02u, 0x56u },	/* NTC 0x14B */
	{ 0x02u, 0x57u },	/* NTC 0x14C */
	{ 0x02u, 0x58u },	/* NTC 0x14D */
	{ 0x02u, 0x59u },	/* NTC 0x14E */
	{ 0xFFu, 0xFFu },	/* NTC 0x14F */
	{ 0x02u, 0x5Au },	/* NTC 0x150 */
	{ 0x02u, 0x5Bu },	/* NTC 0x151 */
	{ 0x02u, 0x5Cu },	/* NTC 0x152 */
	{ 0x02u, 0x5Du },	/* NTC 0x153 */
	{ 0x02u, 0x5Eu },	/* NTC 0x154 */
	{ 0x02u, 0x5Fu },	/* NTC 0x155 */
	{ 0xFFu, 0xFFu },	/* NTC 0x156 */
	{ 0xFFu, 0xFFu },	/* NTC 0x157 */
	{ 0x02u, 0x60u },	/* NTC 0x158 */
	{ 0x02u, 0x61u },	/* NTC 0x159 */
	{ 0xFFu, 0xFFu },	/* NTC 0x15A */
	{ 0xFFu, 0xFFu },	/* NTC 0x15B */
	{ 0x02u, 0x80u },	/* NTC 0x15C */
	{ 0xFFu, 0xFFu },	/* NTC 0x15D */
	{ 0xFFu, 0xFFu },	/* NTC 0x15E */
	{ 0xFFu, 0xFFu },	/* NTC 0x15F */
	{ 0x02u, 0x62u },	/* NTC 0x160 */
	{ 0x02u, 0x63u },	/* NTC 0x161 */
	{ 0xFFu, 0xFFu },	/* NTC 0x162 */
	{ 0xFFu, 0xFFu },	/* NTC 0x163 */
	{ 0x02u, 0x64u },	/* NTC 0x164 */
	{ 0x02u, 0x65u },	/* NTC 0x165 */
	{ 0x02u, 0x6Cu },	/* NTC 0x166 */
	{ 0xFFu, 0xFFu },	/* NTC 0x167 */
	{ 0x02u, 0x66u },	/* NTC 0x168 */
	{ 0x02u, 0x67u },	/* NTC 0x169 */
	{ 0xFFu, 0xFFu },	/* NTC 0x16A */
	{ 0xFFu, 0xFFu },	/* NTC 0x16B */
	{ 0x02u, 0x68u },	/* NTC 0x16C */
	{ 0x02u, 0x69u },	/* NTC 0x16D */
	{ 0xFFu, 0xFFu },	/* NTC 0x16E */
	{ 0xFFu, 0xFFu },	/* NTC 0x16F */
	{ 0x02u, 0x70u },	/* NTC 0x170 */
	{ 0x02u, 0x6Du },	/* NTC 0x171 */
	{ 0xFFu, 0xFFu },	/* NTC 0x172 */
	{ 0xFFu, 0xFFu },	/* NTC 0x173 */
	{ 0xFFu, 0xFFu },	/* NTC 0x174 */
	{ 0xFFu, 0xFFu },	/* NTC 0x175 */
	{ 0xFFu, 0xFFu },	/* NTC 0x176 */
	{ 0xFFu, 0xFFu },	/* NTC 0x177 */
	{ 0x02u, 0x7Fu },	/* NTC 0x178 */
	{ 0x02u, 0x6Eu },	/* NTC 0x179 */
	{ 0xFFu, 0xFFu },	/* NTC 0x17A */
	{ 0xFFu, 0xFFu },	/* NTC 0x17B */
	{ 0xFFu, 0xFFu },	/* NTC 0x17C */
	{ 0xFFu, 0xFFu },	/* NTC 0x17D */
	{ 0xFFu, 0xFFu },	/* NTC 0x17E */
	{ 0xFFu, 0xFFu },	/* NTC 0x17F */
	{ 0x02u, 0x82u },	/* NTC 0x180 */
	{ 0x02u, 0x83u },	/* NTC 0x181 */
	{ 0xFFu, 0xFFu },	/* NTC 0x182 */
	{ 0xFFu, 0xFFu },	/* NTC 0x183 */
	{ 0x02u, 0x84u },	/* NTC 0x184 */
	{ 0xFFu, 0xFFu },	/* NTC 0x185 */
	{ 0xFFu, 0xFFu },	/* NTC 0x186 */
	{ 0xFFu, 0xFFu },	/* NTC 0x187 */
	{ 0x02u, 0x85u },	/* NTC 0x188 */
	{ 0x02u, 0x86u },	/* NTC 0x189 */
	{ 0x02u, 0x87u },	/* NTC 0x18A */
	{ 0x02u, 0x88u },	/* NTC 0x18B */
	{ 0x02u, 0x89u },	/* NTC 0x18C */
	{ 0x02u, 0x8Au },	/* NTC 0x18D */
	{ 0x02u, 0x8Bu },	/* NTC 0x18E */
	{ 0x02u, 0x91u },	/* NTC 0x18F */
	{ 0x02u, 0x71u },	/* NTC 0x190 */
	{ 0x02u, 0x6Fu },	/* NTC 0x191 */
	{ 0xFFu, 0xFFu },	/* NTC 0x192 */
	{ 0xFFu, 0xFFu },	/* NTC 0x193 */
	{ 0x02u, 0x72u },	/* NTC 0x194 */
	{ 0xFFu, 0xFFu },	/* NTC 0x195 */
	{ 0xFFu, 0xFFu },	/* NTC 0x196 */
	{ 0xFFu, 0xFFu },	/* NTC 0x197 */
	{ 0xFFu, 0xFFu },	/* NTC 0x198 */
	{ 0xFFu, 0xFFu },	/* NTC 0x199 */
	{ 0xFFu, 0xFFu },	/* NTC 0x19A */
	{ 0xFFu, 0xFFu },	/* NTC 0x19B */
	{ 0xFFu, 0xFFu },	/* NTC 0x19C */
	{ 0xFFu, 0xFFu },	/* NTC 0x19D */
	{ 0xFFu, 0xFFu },	/* NTC 0x19E */
	{ 0xFFu, 0xFFu },	/* NTC 0x19F */
	{ 0xFFu, 0xFFu },	/* NTC 0x1A0 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1A1 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1A2 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1A3 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1A4 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1A5 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1A6 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1A7 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1A8 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1A9 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1AA */
	{ 0xFFu, 0xFFu },	/* NTC 0x1AB */
	{ 0xFFu, 0xFFu },	/* NTC 0x1AC */
	{ 0xFFu, 0xFFu },	/* NTC 0x1AD */
	{ 0xFFu, 0xFFu },	/* NTC 0x1AE */
	{ 0xFFu, 0xFFu },	/* NTC 0x1AF */
	{ 0xFFu, 0xFFu },	/* NTC 0x1B0 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1B1 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1B2 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1B3 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1B4 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1B5 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1B6 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1B7 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1B8 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1B9 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1BA */
	{ 0xFFu, 0xFFu },	/* NTC 0x1BB */
	{ 0xFFu, 0xFFu },	/* NTC 0x1BC */
	{ 0xFFu, 0xFFu },	/* NTC 0x1BD */
	{ 0xFFu, 0xFFu },	/* NTC 0x1BE */
	{ 0xFFu, 0xFFu },	/* NTC 0x1BF */
	{ 0xFFu, 0xFFu },	/* NTC 0x1C0 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1C1 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1C2 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1C3 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1C4 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1C5 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1C6 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1C7 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1C8 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1C9 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1CA */
	{ 0xFFu, 0xFFu },	/* NTC 0x1CB */
	{ 0xFFu, 0xFFu },	/* NTC 0x1CC */
	{ 0xFFu, 0xFFu },	/* NTC 0x1CD */
	{ 0xFFu, 0xFFu },	/* NTC 0x1CE */
	{ 0xFFu, 0xFFu },	/* NTC 0x1CF */
	{ 0xFFu, 0xFFu },	/* NTC 0x1D0 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1D1 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1D2 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1D3 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1D4 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1D5 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1D6 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1D7 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1D8 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1D9 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1DA */
	{ 0xFFu, 0xFFu },	/* NTC 0x1DB */
	{ 0xFFu, 0xFFu },	/* NTC 0x1DC */
	{ 0xFFu, 0xFFu },	/* NTC 0x1DD */
	{ 0xFFu, 0xFFu },	/* NTC 0x1DE */
	{ 0xFFu, 0xFFu },	/* NTC 0x1DF */
	{ 0xFFu, 0xFFu },	/* NTC 0x1E0 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1E1 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1E2 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1E3 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1E4 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1E5 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1E6 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1E7 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1E8 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1E9 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1EA */
	{ 0xFFu, 0xFFu },	/* NTC 0x1EB */
	{ 0xFFu, 0xFFu },	/* NTC 0x1EC */
	{ 0xFFu, 0xFFu },	/* NTC 0x1ED */
	{ 0xFFu, 0xFFu },	/* NTC 0x1EE */
	{ 0xFFu, 0xFFu },	/* NTC 0x1EF */
	{ 0xFFu, 0xFFu },	/* NTC 0x1F0 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1F1 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1F2 */
	{ 0x00u, 0x05u },	/* NTC 0x1F3 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1F4 */
	{ 0x00u, 0x04u },	/* NTC 0x1F5 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1F6 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1F7 */
	{ 0x02u, 0x6Au },	/* NTC 0x1F8 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1F9 */
	{ 0xFFu, 0xFFu },	/* NTC 0x1FA */
	{ 0x02u, 0x6Bu },	/* NTC 0x1FB */
	{ 0x02u, 0x75u },	/* NTC 0x1FC */
	{ 0xFFu, 0xFFu },	/* NTC 0x1FD */
	{ 0xFFu, 0xFFu },	/* NTC 0x1FE */
	{ 0xFFu, 0xFFu },	/* NTC 0x1FF */
};
#define DIAGMGR_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
