/* SPDX-License-Identifier: GPL-2.0 */
/*  egistec Android Driver Sample Code for common functions
 *
 *  Copyright (C) 2019 egistec Corporation.
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
void uinput_egis_init(struct etspi_data *egistec);
void uinput_egis_destroy(struct etspi_data *egistec);
void sysfs_egis_init(struct etspi_data *egistec);
void sysfs_egis_destroy(struct etspi_data *egistec);
