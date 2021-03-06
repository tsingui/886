/*
 * Broadcom 802.11 Networking Device Driver Configuration file for 43602
 *
 * Broadcom Proprietary and Confidential. Copyright (C) 2017,
 * All Rights Reserved.
 * 
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom.
 *
 * $Id: wltunable_rte_43602a1.h $:
 *
 * wl driver tunables for RTE dev
 */


#define	D11CONF		0
#define	D11CONF2	0x00020000	/* D11 Core Rev 49 */
#define	D11CONF3	0
#define ACCONF		(1<<18)		/* AC-Phy rev 18 */
#define ACCONF2		0

#define NTXD		512
#define NRXD		256
#ifndef NRXBUFPOST
#define NRXBUFPOST	64
#endif
#define WLC_DATAHIWAT	32		/* NIC: 50 */
#define WLC_AMPDUDATAHIWAT	50	/* NIC: 128 */
#define RXBND		24
#define WLC_MAX_UCODE_BSS	4	/* Max BSS supported */
#define WLC_MAXBSSCFG	8
#define WLC_MAXDPT	1
#define WLC_MAXTDLS	5
#ifdef MINPKTPOOL
#define MAXSCB		64
#else
#define MAXSCB		32 /* (WLC_MAXBSSCFG + WLC_MAXDPT + WLC_MAXTDLS), NIC:128 */
#endif
#define AIDMAPSZ	32

#ifndef AMPDU_RX_BA_DEF_WSIZE
#define AMPDU_RX_BA_DEF_WSIZE	64 /* Default value to be overridden for dongle */
#endif

#define PKTCBND			RXBND
#define PKTCBND_AC3X3		RXBND
#define NTXD_LARGE_AC3X3	NTXD
#define NRXD_LARGE_AC3X3	NRXD
#define RXBND_LARGE_AC3X3	RXBND
#define NRXBUFPOST_LARGE_AC3X3	NRXBUFPOST

#define NTXD_LFRAG		1024

/* IE MGMT tunables */
#define MAXIEREGS		8
#define MAXVSIEBUILDCBS		96
#define MAXIEPARSECBS		96
#define MAXVSIEPARSECBS		64

/* Module and cubby tunables */
#define MAXBSSCFGCUBBIES	32	/* max number of cubbies in bsscfg container */
#define WLC_MAXMODULES		76	/* max #  wlc_module_register() calls */
