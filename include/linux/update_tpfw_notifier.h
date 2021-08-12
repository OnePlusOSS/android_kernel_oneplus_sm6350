/* SPDX-License-Identifier: GPL-2.0*/
/*  Oneplus Android Driver Sample Code for common functions
 *
 *  Copyright (C) 2019 Himax Corporation.
 *
 *  This software is licensed under the terms of the GNU General Public
 *  License version 2,  as published by the Free Software Foundation,  and
 *  may be copied,  distributed,  and modified under those terms.
 *
 *  This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 */

#include <linux/notifier.h>
#include <linux/export.h>

#define DRM_PANEL_CS_HIGH_BLANK         0x01
#define DRM_PANEL_CS_LOW_BLANK          0x02
#define DRM_PANEL_UPDATE_TPFW_BLANK     0x03

extern struct blocking_notifier_head tpfw_notifier_list;

extern int update_tpfw_register_client(struct notifier_block *nb);
extern int update_tpfw_unregister_client(struct notifier_block *nb);
extern int update_tpfw_notifier_call_chain(unsigned long val, void *v);

