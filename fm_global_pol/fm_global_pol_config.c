/* continuus file information --- %full_filespec: fm_global_pol_config.c~7.1.3:csrc:1 % */
/*******************************************************************
 *
 *  @(#) %full_filespec: fm_global_pol_config.c~7.1.3:csrc:1 %
 *
 *      Copyright (c) 1999 - 2006 Oracle. All rights reserved.
 *
 *      This material is the confidential property of Oracle Corporation
 *      or its subsidiaries or licensors and may be used, reproduced, stored
 *      or transmitted only in accordance with a valid Oracle license or
 *      sublicense agreement.
 *
 *******************************************************************/

#ifndef lint
static  char    Sccs_id[] = "@(#)%Portal Version: fm_global_pol_config.c:ServerIDCVelocityInt:2:2006-Sep-06 16:41:23 %";
#endif

#include <stdio.h>	/* for FILE * in pcm.h */
#include "pcm.h"
#include "cm_fm.h"
#include "ops/cust.h"
#include "cust_flds_ops.h"

#ifdef MSDOS
__declspec(dllexport) void * fm_global_pol_config_func();
#endif

/*******************************************************************
 *******************************************************************/
struct cm_fm_config fm_global_pol_config[] = {
	/* opcode as a u_int, function name (as a string) */
	
        { PCM_OP_CUST_POL_PRE_COMMIT,           "op_global_pol_main" },
        { PCM_OP_CUST_POL_POST_COMMIT,          "op_global_pol_main" },
      //  { PCM_OP_CUST_POL_PRE_CREATE,          "op_global_pol_main" },
      //  { PCM_OP_CUST_POL_PREP_BILLINFO,           "op_gobal_pol_main" },
	      { 0,	(char *)0 }
};

#ifdef MSDOS
void *
fm_global_pol_config_func()
{
  return ((void *) (fm_global_pol_config));
}
#endif

