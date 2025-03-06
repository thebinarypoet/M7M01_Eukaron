/******************************************************************************
Filename   : rme_platform_x64_conf.h
Author     : pry
Date       : 24/06/2017
Licence    : The Unlicense; see LICENSE for details.
Description: The configuration file for x64 profile settings.
******************************************************************************/

/* Config Includes ***********************************************************/
#include "Platform/X64/Profiles/Super/rme_platform_X64_SUPER.h"
/* End Config Includes *******************************************************/
#define RME_EXTERN                      EXTERN
#define RME_PREEMPT_PRIO_NUM         (64U)
#define RME_KOM_VA_BASE              0xFFFFFFFF81000000
#define RME_KOM_VA_SIZE                0x30000000U
#define RME_KOT_WORD_NUM                0
#define RME_KOT_SLOT_NUM                0
#define RME_TIMESTAMP                  (1U)
#define RME_HYP_VA_BASE                 0
#define RME_HYP_VA_SIZE                 0
#define RME_DBGLOG_ENABLE               (1U)
#define RME_DBG_U(USI)
#define RME_KOT_VA_BASE_ROUND(x)        (((x) + 0xFFF) & ~0xFFF)
#define RME_CAPID(table, index)         ((table) + (index))
#define RME_THD_SIZE                    (1024U)
#define RME_WORD_BITS                   (64U)
#define RME_ERR_PGT_OPFAIL              0x01
#define RME_PGT_SIZEORD(size_num_order)   ((size_num_order) * 4096)
#define RME_PGT_NUMORD(size_num_order)   ((size_num_order) * 4096)
/* End Of File ***************************************************************/

/* Copyright (C) Evo-Devo Instrum. All rights reserved ***********************/
