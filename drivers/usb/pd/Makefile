# SPDX-License-Identifier: GPL-2.0-only
#
# Makefile for USB Power Delivery drivers
#
ifneq ($(filter ebba%, $(OEM_TARGET_PRODUCT)),)
ccflags-y += -DOPLUS_FEATURE_CHG_BASIC
obj-$(CONFIG_USB_PD_POLICY)	+= oplus_policy_engine.o
else
obj-$(CONFIG_USB_PD_POLICY)	+= policy_engine.o
endif
obj-$(CONFIG_QPNP_USB_PDPHY)	+= qpnp-pdphy.o
