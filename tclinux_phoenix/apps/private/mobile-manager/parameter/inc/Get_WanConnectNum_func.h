/*
** $Id: //BBN_Linux/DEV/main/tclinux_phoenix/apps/private/phone_app/parameter/inc/Get_WanConnectNum_func.h#1 $
*/
/************************************************************************
 *
 *	Copyright (C) 2003 Trendchip Technologies, Corp.
 *	All Rights Reserved.
 *
 * Trendchip Confidential; Need to Know only.
 * Protected as an unpublished work.
 *
 * The computer program listings, specifications and documentation
 * herein are the property of Trendchip Technologies, Co. and shall
 * not be reproduced, copied, disclosed, or used in whole or in part
 * for any reason without the prior express written permission of
 * Trendchip Technologeis, Co.
 *
 *************************************************************************/

#ifndef _GET_WANCONNECTNUM_FUNC_C_
#define _GET_WANCONNECTNUM_FUNC_C_

#include "parameter_comm_func.h"

#define PARA_NUM	"NUM"
#define PARA_DESCRIPTION	"Description"

json_t* Get_WanConnectNum(json_t* req_root, json_t* req_para);

#endif
