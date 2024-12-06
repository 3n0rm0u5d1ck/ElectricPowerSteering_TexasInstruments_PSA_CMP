/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2010 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  ===================================================================================================================
 *  FILE DESCRIPTION
 *  ===================================================================================================================
 *         File:  IoHwAb_Dio.c
 *    Component:  EcuAb_AsrIoHwAb
 *       Module:  IoHwAb
 *    Generator:  -
 *
 *  Description:  This file implements the Ecu signals which are provided by the Dio driver.
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
    Project:       EPS.ecuc
    Generated:  2014-01-31 04:28 pm
    Licensee:    Vector AUTOSAR Basic Software (MICROSAR)
 
    This file is generated by DaVinci Configurator Base - DAVINCICFG.EXE V4.0.67.0.
    Do not modify this file, otherwise the software may behave in unexpected way.
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  ===================================================================================================================
 *  Name                          Initials      Company
 *  ===================================================================================================================
 *  Christian Marchl              Chm           Vector Informatik GmbH
 *  Christoph Ederer              Cer           Vector Informatik GmbH
 *  ===================================================================================================================
 *  REVISION HISTORY
 *  ===================================================================================================================
 *  Version   Date        Author  Change Id     Description
 *  ===================================================================================================================
 *  1.01.01   2007-11-26  Chm     ESCAN00022772 No changes here
 *                                ESCAN00023310 Changed line ending to CRLF
 *                                -             New file header added.
 *  1.01.02   2007-02-13  Chm     ESCAN00024551 GenRule G11 affected: replaced ON with STD_ON (in condition)
 *                                -             Function GenRules changed for more readability.
 *  1.02.00   2008-05-07  Cer     5006330       Created BSWMD, reworked transformation to use ECU-C file as input,
 *                                              multiple operations in one user defined port possible now, DCM
 *                                              interface added
 *  1.02.01   2008-06-13  Cer     ESCAN00027572 Rework of identifiers in Generation.xml and Validation.xml for
 *                                              EAD versions 3.2.4.341 and later, Indexes of EAD function
 *                                              RefValue() adjusted
 *  1.02.02   2008-07-10  Cer     ESCAN00028289 Read functions available for all signals now.
 *                                ESCAN00027419 Tags removed
 *                                ESCAN00026634 SIP check added
 *  1.02.03   2008-08-21  Cer     ESCAN00028337 View.xml added to Schemes
 *                                ESCAN00029093 Error in Transformation of SWC-structure reworked
 *                                ESCAN00028340 Critical section handling added
 *            2008-09-09  Chm     ESCAN00029855 Generation of references corrected
 *                                ESCAN00029854 Version defines corrected
 *                                ESCAN00029853 Corrected critical section handling
 *  1.03.00   2008-10-02  Cer     ESCAN00030019 Shortname adapted to AUTOSAR specification
 *                                ESCAN00029653 SWC generation for float data types reworked
 *  1.04.00   2008-12-05  Cer     -             Include of 'Rte_Type.h'/'IoHwAb_Types.h' moved from implementation
 *                                              to configuration header
 *                        Chm     ESCAN00031178 Added parameter IoHwAbstractionRequirementId
 *                        Chm     ESCAN00030122 Removed automatic definition of configuration container.
 *                        Chm     ESCAN00032103 Changed critical section handling to be independent of Board
 *                                              InterruptFunctionSet parameter if SchM is used.
 *  1.05.00   2008-12-19  Cer     ESCAN00032205 SubFunction 'ResetToDefault' added to DCM interface, Configuration of
 *                                              default value added to signal configuration
 *  1.05.01   2009-02-24  Cer     ESCAN00031178 RequirementId added to GUI
 *  1.05.02   2009-03-16  Cer     ESCAN00029642 Sortability added for all the tables in the view (IoHwAb.xml)
 *                                ESCAN00032636 Multiplicity of container IoHwAbDiscrete reworked (no discrete
 *                                              signal is created on startup anymore; Identifier.xml)
 *                                ESCAN00032636 Multiplicity of container IoHwAbDiscrete reworked (no discrete
 *                                              signal is created on startup anymore; Identifier.xml)
 *                                ESCAN00032763 Dev-Error Detection is disabled by default (Identifier.xml)
 *                                ESCAN00033386 RTE includes moved from configuration header to C-files
 *                                ESCAN00033387 Added support for generation of service ports (Identifer.xml,
 *                                              SWC_IoHwAb.xsl)
 *                                ESCAN00033645 Generation of data types of IOHWAB-specific default-values fixed
 *                                              (GenIoHwAbUserSourceTemplate.xml)
 *                                ESCAN00033835 Added ADMIN-DATA to SWC generation (SWC_IoHwAb.xsl)
 *  1.06.00   2009-07-10  Cer     ESCAN00034782 Added update of CalSourceType to avoid generation of empty DIO
 *                                              entity identifiers
 *                                ESCAN00036329 Fixed icon placement in view
 *                                ESCAN00036279 Automatic generation of SWC file added
 *                                ESCAN00032561 User blocks added to IoHwAb.c to avoid overwriting of user
 *                                              modifications in the generated template
 *                                ESCAN00029651 Added informative text about all the configured CAL entities
 *                                              to IoHwAb.c
 *                                ESCAN00036542 Added include of IoHwAbstraction types to the DCM header file
 *                                ESCAN00029887 Added dummy-statement mechanism to prevent compile warnings
 *  1.06.01   2009-09-22  Cer     ESCAN00037605 Reworked DCM services to provide multiple writing to the DCM
 *                                ESCAN00037601 Functionality of DCM sub-function 'resetToDefault' corrected
 *                                ESCAN00038188 Validation of default values extended to input signals
 *  1.06.02   2010-04-28  Cer     ESCAN00040647 Added general implementation are for local functions (IoHwAb.c)
 *                                ESCAN00040708 Reworked setting of parameter IoHwAbCalSourceType to ensure, that
 *                                              generation works correctly, even if the project is not saved
 *                                ESCAN00042720 'AS'-tag added to all identifers in Identifer.xml due to an in-
 *                                              compatibility with DaVinci Configurator from version 4.00.40
 *  1.06.03   2010-11-25  Cer     ESCAN00046423 Optional generation of symbolic name prefixes added
 *                                ESCAN00044073 Renamed 'Insert' buttons in the GUI to 'Append'
 *                                ESCAN00043885 Renamed control 'Component Name' and reworked description
 *                                ESCAN00043745 Default value selection removed from DIO entity parameter
 *                                -             Removed all unnecessary information from Identifer.xml (Labels, ...)
 *********************************************************************************************************************/

#define IOHWAB

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "IoHwAb.h"
#include "IoHwAb_Cbk.h"
#include "IoHwAb_Dcm.h"

/* ---- Configuration switch ---------------------------------------------- */
#define IOHWAB_DIO_SOURCE

/* ---- Include of configuration (private section and const structures) --- */
#include "IoHwAb_Cfg.h"

/*<IOHWAB_HEADER_INCLUDE>*/

/* RTE Include: Function prototypes */
#include "Rte_IoHwAbstraction.h"
/*</IOHWAB_HEADER_INCLUDE>*/

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/

#if (  (IOHWAB_CFG_MAJOR_VERSION != (1u)) \
    || (IOHWAB_CFG_MINOR_VERSION != (6u)))
        #error "Version numbers of IoHwAb_Dio.c and IoHwAb_Cfg.h are inconsistent!"
#endif

#if(   (IOHWAB_SW_MAJOR_VERSION != (1u)) \
    || (IOHWAB_SW_MINOR_VERSION != (3u)) \
    || (IOHWAB_AR_MAJOR_VERSION != (2u)) \
    || (IOHWAB_AR_MINOR_VERSION != (0u)) \
    || (IOHWAB_AR_PATCH_VERSION != (0u)))
    #error "Version numbers of IoHwAb_Dio.c and IoHwAb.h are inconsistent!"
#endif

#if(   (IOHWAB_DCM_MAJOR_VERSION != (1u)) \
    || (IOHWAB_DCM_MINOR_VERSION != (3u)))
    #error "Version numbers of IoHwAb_Dio.c and IoHwAb_Dcm.h are inconsistent!"
#endif

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/*<IOHWAB_CAL_DEFAULT_VALUES>*/
/*</IOHWAB_CAL_DEFAULT_VALUES>*/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

#define IOHWAB_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"

/*<IOHWAB_CAL_DCM_VARIABLES>*/
/*</IOHWAB_CAL_DCM_VARIABLES>*/

#define IOHWAB_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

#define IOHWAB_START_SEC_CODE
#include "MemMap.h"

/*<IOHWAB_GENERATED_SIGNAL_FUNCTIONS>*/

/**********************************************************************************************************************
 *  IoHwAb_GetEpsEn
 **********************************************************************************************************************
 *! \brief      This is the OP_GET for the CAL signal EpsEn.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_GetEpsEn
(
    P2VAR(IoHwAb_BoolType, AUTOMATIC, IOHWAB_APPL_DATA) signal
)
{
    #if (STD_ON == IOHWAB_CFG_CHK_PARAM_PTR)
        if (NULL_PTR == signal)
        {
            IoHwAb_Errorhook(IOHWAB_SID_OPT_GET, IOHWAB_E_NULL_POINTER);

            return E_NOT_OK;
        }
        else
        {
            /* No Error */
        }
    #endif

    *signal = (IoHwAb_BoolType)Dio_ReadChannel(ADC1_Ch0);

    return E_OK;
}/* IoHwAb_GetEpsEn() */

 

/**********************************************************************************************************************
 *  IoHwAb_GetPwrSwitchEn
 **********************************************************************************************************************
 *! \brief      This is the OP_GET for the CAL signal PwrSwitchEn.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_GetPwrSwitchEn
(
    P2VAR(IoHwAb_BoolType, AUTOMATIC, IOHWAB_APPL_DATA) signal
)
{
    #if (STD_ON == IOHWAB_CFG_CHK_PARAM_PTR)
        if (NULL_PTR == signal)
        {
            IoHwAb_Errorhook(IOHWAB_SID_OPT_GET, IOHWAB_E_NULL_POINTER);

            return E_NOT_OK;
        }
        else
        {
            /* No Error */
        }
    #endif

    *signal = (IoHwAb_BoolType)Dio_ReadChannel(NHet_Ch8);

    return E_OK;
}/* IoHwAb_GetPwrSwitchEn() */

 

/**********************************************************************************************************************
 *  IoHwAb_GetFetDrvCntl
 **********************************************************************************************************************
 *! \brief      This is the OP_GET for the CAL signal FetDrvCntl.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_GetFetDrvCntl
(
    P2VAR(IoHwAb_BoolType, AUTOMATIC, IOHWAB_APPL_DATA) signal
)
{
    #if (STD_ON == IOHWAB_CFG_CHK_PARAM_PTR)
        if (NULL_PTR == signal)
        {
            IoHwAb_Errorhook(IOHWAB_SID_OPT_GET, IOHWAB_E_NULL_POINTER);

            return E_NOT_OK;
        }
        else
        {
            /* No Error */
        }
    #endif

    *signal = (IoHwAb_BoolType)Dio_ReadChannel(NHet_Ch4);

    return E_OK;
}/* IoHwAb_GetFetDrvCntl() */

 

/**********************************************************************************************************************
 *  IoHwAb_SetFetFlt2Clk
 **********************************************************************************************************************
 *! \brief      This is the OP_SET function for the CAL signal FetFlt2Clk.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_SetFetFlt2Clk
(
    IoHwAb_BoolType signal
)
{

    Dio_WriteChannel(NHet_Ch26, (Dio_LevelType)signal);

  return E_OK;
}/* IoHwAb_SetFetFlt2Clk() */

 

/**********************************************************************************************************************
 *  IoHwAb_GetFetFlt2Clk
 **********************************************************************************************************************
 *! \brief      This is the OP_GET for the CAL signal FetFlt2Clk.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_GetFetFlt2Clk
(
    P2VAR(IoHwAb_BoolType, AUTOMATIC, IOHWAB_APPL_DATA) signal
)
{
    #if (STD_ON == IOHWAB_CFG_CHK_PARAM_PTR)
        if (NULL_PTR == signal)
        {
            IoHwAb_Errorhook(IOHWAB_SID_OPT_GET, IOHWAB_E_NULL_POINTER);

            return E_NOT_OK;
        }
        else
        {
            /* No Error */
        }
    #endif

    *signal = (IoHwAb_BoolType)Dio_ReadChannel(NHet_Ch26);

    return E_OK;
}/* IoHwAb_GetFetFlt2Clk() */

 

/**********************************************************************************************************************
 *  IoHwAb_GetFetFlt1Data
 **********************************************************************************************************************
 *! \brief      This is the OP_GET for the CAL signal FetFlt1Data.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_GetFetFlt1Data
(
    P2VAR(IoHwAb_BoolType, AUTOMATIC, IOHWAB_APPL_DATA) signal
)
{
    #if (STD_ON == IOHWAB_CFG_CHK_PARAM_PTR)
        if (NULL_PTR == signal)
        {
            IoHwAb_Errorhook(IOHWAB_SID_OPT_GET, IOHWAB_E_NULL_POINTER);

            return E_NOT_OK;
        }
        else
        {
            /* No Error */
        }
    #endif

    *signal = (IoHwAb_BoolType)Dio_ReadChannel(NHet_Ch24);

    return E_OK;
}/* IoHwAb_GetFetFlt1Data() */

 

/**********************************************************************************************************************
 *  IoHwAb_SetSysFault2
 **********************************************************************************************************************
 *! \brief      This is the OP_SET function for the CAL signal SysFault2.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_SetSysFault2
(
    IoHwAb_BoolType signal
)
{

    Dio_WriteChannel(NHet_Ch15, (Dio_LevelType)signal);

  return E_OK;
}/* IoHwAb_SetSysFault2() */

 

/**********************************************************************************************************************
 *  IoHwAb_GetSysFault2
 **********************************************************************************************************************
 *! \brief      This is the OP_GET for the CAL signal SysFault2.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_GetSysFault2
(
    P2VAR(IoHwAb_BoolType, AUTOMATIC, IOHWAB_APPL_DATA) signal
)
{
    #if (STD_ON == IOHWAB_CFG_CHK_PARAM_PTR)
        if (NULL_PTR == signal)
        {
            IoHwAb_Errorhook(IOHWAB_SID_OPT_GET, IOHWAB_E_NULL_POINTER);

            return E_NOT_OK;
        }
        else
        {
            /* No Error */
        }
    #endif

    *signal = (IoHwAb_BoolType)Dio_ReadChannel(NHet_Ch15);

    return E_OK;
}/* IoHwAb_GetSysFault2() */

 

/**********************************************************************************************************************
 *  IoHwAb_SetWdMonitor
 **********************************************************************************************************************
 *! \brief      This is the OP_SET function for the CAL signal WdMonitor.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_SetWdMonitor
(
    IoHwAb_BoolType signal
)
{

    Dio_WriteChannel(Can3Rx, (Dio_LevelType)signal);

  return E_OK;
}/* IoHwAb_SetWdMonitor() */

 

/**********************************************************************************************************************
 *  IoHwAb_SetFetDrvReset
 **********************************************************************************************************************
 *! \brief      This is the OP_SET function for the CAL signal FetDrvReset.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_SetFetDrvReset
(
    IoHwAb_BoolType signal
)
{

    Dio_WriteChannel(SPI3_NCS1, (Dio_LevelType)signal);

  return E_OK;
}/* IoHwAb_SetFetDrvReset() */

 

/**********************************************************************************************************************
 *  IoHwAb_GetFetDrvReset
 **********************************************************************************************************************
 *! \brief      This is the OP_GET for the CAL signal FetDrvReset.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_GetFetDrvReset
(
    P2VAR(IoHwAb_BoolType, AUTOMATIC, IOHWAB_APPL_DATA) signal
)
{
    #if (STD_ON == IOHWAB_CFG_CHK_PARAM_PTR)
        if (NULL_PTR == signal)
        {
            IoHwAb_Errorhook(IOHWAB_SID_OPT_GET, IOHWAB_E_NULL_POINTER);

            return E_NOT_OK;
        }
        else
        {
            /* No Error */
        }
    #endif

    *signal = (IoHwAb_BoolType)Dio_ReadChannel(SPI3_NCS1);

    return E_OK;
}/* IoHwAb_GetFetDrvReset() */

 

/**********************************************************************************************************************
 *  IoHwAb_SetWdReset
 **********************************************************************************************************************
 *! \brief      This is the OP_SET function for the CAL signal WdReset.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_SetWdReset
(
    IoHwAb_BoolType signal
)
{

    Dio_WriteChannel(Can3Tx, (Dio_LevelType)signal);

  return E_OK;
}/* IoHwAb_SetWdReset() */

 

/**********************************************************************************************************************
 *  IoHwAb_SetTODReset
 **********************************************************************************************************************
 *! \brief      This is the OP_SET function for the CAL signal TODReset.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_SetTODReset
(
    IoHwAb_BoolType signal
)
{

    Dio_WriteChannel(NHet_Ch20, (Dio_LevelType)signal);

  return E_OK;
}/* IoHwAb_SetTODReset() */

 

/**********************************************************************************************************************
 *  IoHwAb_GetOvrVoltFdbk
 **********************************************************************************************************************
 *! \brief      This is the OP_GET for the CAL signal OvrVoltFdbk.
 *  \param[in]  in                      IoHwAb_BoolType signal
 *  \retval     E_OK - success
 *********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_APPL_CODE) IoHwAb_GetOvrVoltFdbk
(
    P2VAR(IoHwAb_BoolType, AUTOMATIC, IOHWAB_APPL_DATA) signal
)
{
    #if (STD_ON == IOHWAB_CFG_CHK_PARAM_PTR)
        if (NULL_PTR == signal)
        {
            IoHwAb_Errorhook(IOHWAB_SID_OPT_GET, IOHWAB_E_NULL_POINTER);

            return E_NOT_OK;
        }
        else
        {
            /* No Error */
        }
    #endif

    *signal = (IoHwAb_BoolType)Dio_ReadChannel(NHet_Ch22);

    return E_OK;
}/* IoHwAb_GetOvrVoltFdbk() */

 
/*</IOHWAB_GENERATED_SIGNAL_FUNCTIONS>*/

#define IOHWAB_STOP_SEC_CODE
#include "MemMap.h"
/**********************************************************************************************************************
 *  END OF FILE: IoHwAb_Dio.c
 *********************************************************************************************************************/
