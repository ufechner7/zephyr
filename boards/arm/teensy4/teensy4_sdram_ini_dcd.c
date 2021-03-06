/*
 * Copyright 2020 NXP
 * Copyright 2020 Bernhard Kraemer
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#include "teensy4_sdram_ini_dcd.h"

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.xip_board"
#endif

#if defined(XIP_BOOT_HEADER_ENABLE) && (XIP_BOOT_HEADER_ENABLE == 1)
#if defined(XIP_BOOT_HEADER_DCD_ENABLE) && (XIP_BOOT_HEADER_DCD_ENABLE == 1)
#if defined(__CC_ARM) || defined(__ARMCC_VERSION) || defined(__GNUC__)
__attribute__((section(".boot_hdr.dcd_data")))
#elif defined(__ICCARM__)
#pragma location = ".boot_hdr.dcd_data"
#endif

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: DCDx V2.0
processor: MIMXRT1062xxxxA
package_id: MIMXRT1062DVL6A
mcu_data: ksdk2_0
processor_version: 0.0.0
board: MIMXRT1060-EVK
output_format: c_array
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* COMMENTS BELOW ARE USED AS SETTINGS FOR DCD DATA */
const uint8_t dcd_data[] = {
	/* HEADER */
	/* Tag */
	0xD2,
	/* Image Length */
	0x04, 0x10,
	/* Version */
	0x41,

	/* COMMANDS */

	/* group: 'Imported Commands' */
	/* #1.1-113, command header bytes for merged 'Write - value' command */
	0xCC, 0x03, 0x8C, 0x04,
	/* #1.1, command: write_value, address: CCM_CCGR0, value: 0xFFFFFFFF, size: 4 */
	0x40, 0x0F, 0xC0, 0x68, 0xFF, 0xFF, 0xFF, 0xFF,
	/* #1.2, command: write_value, address: CCM_CCGR1, value: 0xFFFFFFFF, size: 4 */
	0x40, 0x0F, 0xC0, 0x6C, 0xFF, 0xFF, 0xFF, 0xFF,
	/* #1.3, command: write_value, address: CCM_CCGR2, value: 0xFFFFFFFF, size: 4 */
	0x40, 0x0F, 0xC0, 0x70, 0xFF, 0xFF, 0xFF, 0xFF,
	/* #1.4, command: write_value, address: CCM_CCGR3, value: 0xFFFFFFFF, size: 4 */
	0x40, 0x0F, 0xC0, 0x74, 0xFF, 0xFF, 0xFF, 0xFF,
	/* #1.5, command: write_value, address: CCM_CCGR4, value: 0xFFFFFFFF, size: 4 */
	0x40, 0x0F, 0xC0, 0x78, 0xFF, 0xFF, 0xFF, 0xFF,
	/* #1.6, command: write_value, address: CCM_CCGR5, value: 0xFFFFFFFF, size: 4 */
	0x40, 0x0F, 0xC0, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF,
	/* #1.7, command: write_value, address: CCM_CCGR6, value: 0xFFFFFFFF, size: 4 */
	0x40, 0x0F, 0xC0, 0x80, 0xFF, 0xFF, 0xFF, 0xFF,
	/* #1.8, command: write_value, address: CCM_ANALOG_PLL_SYS, value: 0x2001, size: 4 */
	0x40, 0x0D, 0x80, 0x30, 0x00, 0x00, 0x20, 0x01,
	/* #1.9, command: write_value, address: CCM_ANALOG_PFD_528, value: 0x1D0000, size: 4 */
	0x40, 0x0D, 0x81, 0x00, 0x00, 0x1D, 0x00, 0x00,
	/* #1.10, command: write_value, address: CCM_CBCDR, value: 0x10D40, size: 4 */
	0x40, 0x0F, 0xC0, 0x14, 0x00, 0x01, 0x0D, 0x40,
	/* #1.91, command: write_value, address: SEMC_MCR, value: 0x10000004, size: 4 */
	0x40, 0x2F, 0x00, 0x00, 0x10, 0x00, 0x00, 0x04,
	/* #1.92, command: write_value, address: SEMC_BMCR0, value: 0x30524, size: 4 */
	0x40, 0x2F, 0x00, 0x08, 0x00, 0x03, 0x05, 0x24,
	/* #1.93, command: write_value, address: SEMC_BMCR1, value: 0x6030524, size: 4 */
	0x40, 0x2F, 0x00, 0x0C, 0x06, 0x03, 0x05, 0x24,
	/* #1.94, command: write_value, address: SEMC_BR0, value: 0x8000001B, size: 4 */
	0x40, 0x2F, 0x00, 0x10, 0x80, 0x00, 0x00, 0x1B,
	/* #1.95, command: write_value, address: SEMC_BR1, value: 0x8200001B, size: 4 */
	0x40, 0x2F, 0x00, 0x14, 0x82, 0x00, 0x00, 0x1B,
	/* #1.96, command: write_value, address: SEMC_BR2, value: 0x8400001B, size: 4 */
	0x40, 0x2F, 0x00, 0x18, 0x84, 0x00, 0x00, 0x1B,
	/* #1.97, command: write_value, address: SEMC_BR3, value: 0x8600001B, size: 4 */
	0x40, 0x2F, 0x00, 0x1C, 0x86, 0x00, 0x00, 0x1B,
	/* #1.98, command: write_value, address: SEMC_BR4, value: 0x90000021, size: 4 */
	0x40, 0x2F, 0x00, 0x20, 0x90, 0x00, 0x00, 0x21,
	/* #1.99, command: write_value, address: SEMC_BR5, value: 0xA0000019, size: 4 */
	0x40, 0x2F, 0x00, 0x24, 0xA0, 0x00, 0x00, 0x19,
	/* #1.100, command: write_value, address: SEMC_BR6, value: 0xA8000017, size: 4 */
	0x40, 0x2F, 0x00, 0x28, 0xA8, 0x00, 0x00, 0x17,
	/* #1.101, command: write_value, address: SEMC_BR7, value: 0xA900001B, size: 4 */
	0x40, 0x2F, 0x00, 0x2C, 0xA9, 0x00, 0x00, 0x1B,
	/* #1.102, command: write_value, address: SEMC_BR8, value: 0x21, size: 4 */
	0x40, 0x2F, 0x00, 0x30, 0x00, 0x00, 0x00, 0x21,
	/* #1.103, command: write_value, address: SEMC_IOCR, value: 0x79A8, size: 4 */
	0x40, 0x2F, 0x00, 0x04, 0x00, 0x00, 0x79, 0xA8,
	/* #1.104, command: write_value, address: SEMC_SDRAMCR0, value: 0xF31, size: 4 */
	0x40, 0x2F, 0x00, 0x40, 0x00, 0x00, 0x0F, 0x31,
	/* #1.105, command: write_value, address: SEMC_SDRAMCR1, value: 0x652922, size: 4 */
	0x40, 0x2F, 0x00, 0x44, 0x00, 0x65, 0x29, 0x22,
	/* #1.106, command: write_value, address: SEMC_SDRAMCR2, value: 0x10920, size: 4 */
	0x40, 0x2F, 0x00, 0x48, 0x00, 0x01, 0x09, 0x20,
	/* #1.107, command: write_value, address: SEMC_SDRAMCR3, value: 0x50210A08, size: 4 */
	0x40, 0x2F, 0x00, 0x4C, 0x50, 0x21, 0x0A, 0x08,
	/* #1.108, command: write_value, address: SEMC_DBICR0, value: 0x21, size: 4 */
	0x40, 0x2F, 0x00, 0x80, 0x00, 0x00, 0x00, 0x21,
	/* #1.109, command: write_value, address: SEMC_DBICR1, value: 0x888888, size: 4 */
	0x40, 0x2F, 0x00, 0x84, 0x00, 0x88, 0x88, 0x88,
	/* #1.110, command: write_value, address: SEMC_IPCR1, value: 0x02, size: 4 */
	0x40, 0x2F, 0x00, 0x94, 0x00, 0x00, 0x00, 0x02,
	/* #1.111, command: write_value, address: SEMC_IPCR2, value: 0x00, size: 4 */
	0x40, 0x2F, 0x00, 0x98, 0x00, 0x00, 0x00, 0x00,
	/* #1.112, command: write_value, address: SEMC_IPCR0, value: 0x80000000, size: 4 */
	0x40, 0x2F, 0x00, 0x90, 0x80, 0x00, 0x00, 0x00,
	/* #1.113, command: write_value, address: SEMC_IPCMD, value: 0xA55A000F, size: 4 */
	0x40, 0x2F, 0x00, 0x9C, 0xA5, 0x5A, 0x00, 0x0F,
	/* #2, command: check_any_bit_set, address: SEMC_INTR, value: 0x01, size: 4 */
	0xCF, 0x00, 0x0C, 0x1C, 0x40, 0x2F, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x01,
	/* #3.1-2, command header bytes for merged 'Write - value' command */
	0xCC, 0x00, 0x14, 0x04,
	/* #3.1, command: write_value, address: SEMC_IPCR0, value: 0x80000000, size: 4 */
	0x40, 0x2F, 0x00, 0x90, 0x80, 0x00, 0x00, 0x00,
	/* #3.2, command: write_value, address: SEMC_IPCMD, value: 0xA55A000C, size: 4 */
	0x40, 0x2F, 0x00, 0x9C, 0xA5, 0x5A, 0x00, 0x0C,
	/* #4, command: check_any_bit_set, address: SEMC_INTR, value: 0x01, size: 4 */
	0xCF, 0x00, 0x0C, 0x1C, 0x40, 0x2F, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x01,
	/* #5.1-2, command header bytes for merged 'Write - value' command */
	0xCC, 0x00, 0x14, 0x04,
	/* #5.1, command: write_value, address: SEMC_IPCR0, value: 0x80000000, size: 4 */
	0x40, 0x2F, 0x00, 0x90, 0x80, 0x00, 0x00, 0x00,
	/* #5.2, command: write_value, address: SEMC_IPCMD, value: 0xA55A000C, size: 4 */
	0x40, 0x2F, 0x00, 0x9C, 0xA5, 0x5A, 0x00, 0x0C,
	/* #6, command: check_any_bit_set, address: SEMC_INTR, value: 0x01, size: 4 */
	0xCF, 0x00, 0x0C, 0x1C, 0x40, 0x2F, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x01,
	/* #7.1-3, command header bytes for merged 'Write - value' command */
	0xCC, 0x00, 0x1C, 0x04,
	/* #7.1, command: write_value, address: SEMC_IPTXDAT, value: 0x33, size: 4 */
	0x40, 0x2F, 0x00, 0xA0, 0x00, 0x00, 0x00, 0x33,
	/* #7.2, command: write_value, address: SEMC_IPCR0, value: 0x80000000, size: 4 */
	0x40, 0x2F, 0x00, 0x90, 0x80, 0x00, 0x00, 0x00,
	/* #7.3, command: write_value, address: SEMC_IPCMD, value: 0xA55A000A, size: 4 */
	0x40, 0x2F, 0x00, 0x9C, 0xA5, 0x5A, 0x00, 0x0A,
	/* #8, command: check_any_bit_set, address: SEMC_INTR, value: 0x01, size: 4 */
	0xCF, 0x00, 0x0C, 0x1C, 0x40, 0x2F, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x01,
	/* #9, command: write_value, address: SEMC_SDRAMCR3, value: 0x50210A09, size: 4 */
	0xCC, 0x00, 0x0C, 0x04, 0x40, 0x2F, 0x00, 0x4C, 0x50, 0x21, 0x0A, 0x09
	};
/* BE CAREFUL MODIFYING THIS SETTINGS - IT IS YAML SETTINGS FOR TOOLS */

#else
const uint8_t dcd_data[] = {0x00};
#endif /* XIP_BOOT_HEADER_DCD_ENABLE */
#endif /* XIP_BOOT_HEADER_ENABLE */
