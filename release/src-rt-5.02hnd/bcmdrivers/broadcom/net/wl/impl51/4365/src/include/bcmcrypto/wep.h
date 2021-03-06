/*
 * wep.h
 * Prototypes for WEP functions.
 *
 * Broadcom Proprietary and Confidential. Copyright (C) 2017,
 * All Rights Reserved.
 * 
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom.
 *
 * $Id: wep.h 451682 2014-01-27 20:30:17Z $
 */

#ifndef _WEP_H_
#define _WEP_H_

#include <typedefs.h>

/* WEP-encrypt a buffer */
/* assumes a contiguous buffer, with IV prepended, and with enough space at
 * the end for the ICV
 */
extern void wep_encrypt(uint buf_len, uint8 *buf, uint sec_len, uint8 *sec_data);

/* wep-decrypt a buffer */
/* Assumes a contigious buffer, with IV prepended, and return TRUE on ICV pass
 * else FAIL
 */
extern bool wep_decrypt(uint buf_len, uint8 *buf, uint sec_len, uint8 *sec_data);

#endif /* _WEP_H_ */
