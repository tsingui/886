/*
 * LCNPHY ANAcore control module interface (to other PHY modules).
 *
 * Broadcom Proprietary and Confidential. Copyright (C) 2017,
 * All Rights Reserved.
 * 
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom.
 *
 * $Id$
 */

#ifndef _phy_lcn_ana_h_
#define _phy_lcn_ana_h_

#include <phy_api.h>
#include <phy_lcn.h>
#include <phy_ana.h>

/* forward declaration */
typedef struct phy_lcn_ana_info phy_lcn_ana_info_t;

/* register/unregister LCNPHY specific implementations to/from common */
phy_lcn_ana_info_t *phy_lcn_ana_register_impl(phy_info_t *pi,
	phy_lcn_info_t *lcni, phy_ana_info_t *ani);
void phy_lcn_ana_unregister_impl(phy_lcn_ana_info_t *info);

#endif /* _phy_lcn_ana_h_ */
