/*
 * unistd.h - Broadcom RTE-specific POSIX replacement library definitions
 *
 * Broadcom Proprietary and Confidential. Copyright (C) 2017,
 * All Rights Reserved.
 * 
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom.
 *
 * $Id: unistd.h 473326 2014-04-29 00:37:35Z $
 */

#if !defined(_UNISTD_H_)
#define _UNISTD_H_

extern int getopt(int argc, char **argv, char *ostr);
extern void initopt(void);
extern char *optarg;

#endif /* !defined(_UNISTD_H_) */
