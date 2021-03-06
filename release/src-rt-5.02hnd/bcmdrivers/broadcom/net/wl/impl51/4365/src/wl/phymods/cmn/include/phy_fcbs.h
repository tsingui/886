/*
 * FCBS module interface (to other PHY modules).
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

#ifndef _phy_fcbs_h_
#define _phy_fcbs_h_

#include <phy_api.h>

/* forward declaration */
typedef struct phy_fcbs_info phy_fcbs_info_t;

/* attach/detach */
phy_fcbs_info_t *phy_fcbs_attach(phy_info_t *pi);
void phy_fcbs_detach(phy_fcbs_info_t *cmn_info);

/* up/down */
int phy_fcbs_init(phy_fcbs_info_t *cmn_info);

#endif /* _phy_fcbs_h_ */
