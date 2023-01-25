#pragma once
/******************************************************************************/
/* File   : infServiceEcuM_Exp.hpp                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceEcuM_ServiceStartUp.hpp"
#include "infServiceEcuM_ServiceDet.hpp"
#include "infServiceEcuM_ServiceOs.hpp"
#include "infServiceEcuM_ServiceSwcEcuM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define INTERFACES_EXPORTED_SERVICEECUM   public infServiceEcuM_ServiceStartUp \
                                        , public infServiceEcuM_ServiceOs      \
                                        , public infServiceEcuM_ServiceSwcEcuM

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

