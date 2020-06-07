/* * Copyright (c) 2013 The Linux Foundation. All rights reserved.* */
/*
 * Copyright (c) 2013 The Linux Foundation.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef __NSS_CLOCKS_H
#define __NSS_CLOCKS_H

#if (NSS_DT_SUPPORT != 1)
#include <asm/io.h>
#include <mach/msm_iomap.h>

#define REG(off)	(MSM_CLK_CTL_BASE + (off))
#define REG_GCC(off)	(MSM_APCS_GCC_BASE + (off))

/* Peripheral clock registers. */
#define PLL18_ACR				REG(0x1234)
#define PLL18_MODE				REG(0x31A0)
#define PLL18_L_VAL				REG(0x31A4)
#define PLL18_M_VAL				REG(0x31A8)
#define PLL18_N_VAL				REG(0x31AC)
#define PLL18_TEST_CTL				REG(0x31B0)
#define PLL18_CONFIG				REG(0x31B4)
#define PLL18_STATUS				REG(0x31B8)
#define PLL_LOCK_DET_STATUS			REG(0x3420)
#define PLL_LOCK_DET_MASK			REG(0x3424)
#define CE5_CORE_CLK_SRC_CTL 			REG(0x36C0)
#define CE5_CORE_CLK_SRC0_NS 			REG(0x36C4)
#define NSS_ACC_REG				REG(0x28EC)
#define NSS_RESET_SPARE				REG(0x3B60)
#define NSSFB0_CLK_SRC_CTL			REG(0x3B80)
#define NSSFB0_CLK_SRC0_NS			REG(0x3B84)
#define NSSFB0_CLK_SRC1_NS			REG(0x3B88)
#define NSSFB0_CLK_CTL				REG(0x3BA0)
#define NSSFAB_GLOBAL_BUS_NS			REG(0x3BC0)
#define NSSFB1_CLK_SRC_CTL			REG(0x3BE0)
#define NSSFB1_CLK_SRC0_NS			REG(0x3BE4)
#define NSSFB1_CLK_SRC1_NS			REG(0x3BE8)
#define NSSFB1_CLK_CTL				REG(0x3C00)
#define CLK_HALT_NSSFAB0_NSSFAB1_STATEA		REG(0x3C20)
#define UBI32_MPT0_CLK_CTL			REG(0x3C40)
#define UBI32_MPT1_CLK_CTL			REG(0x3C44)
#define CE5_HCLK_SRC_CTL			REG(0x3C60)
#define CE5_HCLK_SRC0_NS			REG(0x3C64)
#define CE5_HCLK_SRC1_NS			REG(0x3C68)
#define CE5_HCLK_CTL				REG(0x3C6C)
#define NSSFPB_CLK_CTL				REG(0x3C80)
#define NSSFPB_CLK_SRC_CTL			REG(0x3C84)
#define NSSFPB_CLK_SRC0_NS			REG(0x3C88)
#define NSSFPB_CLK_SRC1_NS			REG(0x3C8C)
#define GMAC_COREn_CLK_SRC_CTL(n)		REG(0x3CA0+32*(n))
#define GMAC_CORE1_CLK_SRC_CTL			REG(0x3CA0)
#define GMAC_COREn_CLK_SRC0_MD(n)		REG(0x3CA4+32*(n))
#define GMAC_CORE1_CLK_SRC0_MD			REG(0x3CA4)
#define GMAC_COREn_CLK_SRC1_MD(n)		REG(0x3CA8+32*(n))
#define GMAC_CORE1_CLK_SRC1_MD			REG(0x3CA8)
#define GMAC_COREn_CLK_SRC0_NS(n)		REG(0x3CAC+32*(n))
#define GMAC_CORE1_CLK_SRC0_NS			REG(0x3CAC)
#define GMAC_COREn_CLK_SRC1_NS(n)		REG(0x3CB0+32*(n))
#define GMAC_CORE1_CLK_SRC1_NS			REG(0x3CB0)
#define GMAC_COREn_CLK_CTL(n)			REG(0x3CB4+32*(n))
#define GMAC_CORE1_CLK_CTL			REG(0x3CB4)
#define GMAC_COREn_CLK_FS(n)			REG(0x3CB8+32*(n))
#define GMAC_CORE1_CLK_FS			REG(0x3CB8)
#define GMAC_COREn_RESET(n)			REG(0x3CBC+32*(n))
#define GMAC_CORE1_RESET			REG(0x3CBC)
#define UBI32_COREn_CLK_SRC_CTL(n)		REG(0x3D20+32*(n))
#define UBI32_CORE1_CLK_SRC_CTL			REG(0x3D20)
#define UBI32_COREn_CLK_SRC0_MD(n)		REG(0x3D24+32*(n))
#define UBI32_CORE1_CLK_SRC0_MD			REG(0x3D24)
#define UBI32_COREn_CLK_SRC1_MD(n)		REG(0x3D28+32*(n))
#define UBI32_CORE1_CLK_SRC1_MD			REG(0x3D28)
#define UBI32_COREn_CLK_SRC0_NS(n)		REG(0x3D2C+32*(n))
#define UBI32_CORE1_CLK_SRC0_NS			REG(0x3D2C)
#define UBI32_COREn_CLK_SRC1_NS(n)		REG(0x3D30+32*(n))
#define UBI32_CORE1_CLK_SRC1_NS			REG(0x3D30)
#define UBI32_COREn_CLK_CTL(n)			REG(0x3D34+32*(n))
#define UBI32_CORE1_CLK_CTL			REG(0x3D34)
#define UBI32_COREn_CLK_FS(n)			REG(0x3D38+32*(n))
#define UBI32_CORE1_CLK_FS			REG(0x3D38)
#define UBI32_COREn_RESET_CLAMP(n)		REG(0x3D3C+32*(n))
#define UBI32_CORE1_RESET_CLAMP			REG(0x3D3C)
#define NSS_250MHZ_CLK_SRC_CTL			REG(0x3D60)
#define NSS_250MHZ_CLK_SRC0_NS			REG(0x3D64)
#define NSS_250MHZ_CLK_SRC1_NS			REG(0x3D68)
#define NSS_250MHZ_CLK_SRC0_MD			REG(0x3D6C)
#define NSS_250MHZ_CLK_SRC1_MD			REG(0x3D70)
#define NSS_250MHZ_CLK_CTL			REG(0x3D74)
#define CE5_ACLK_SRC_CTL			REG(0x3D80)
#define CE5_ACLK_SRC0_NS			REG(0x3D84)
#define CE5_ACLK_SRC1_NS			REG(0x3D88)
#define CE5_ACLK_CTL				REG(0x3D8C)
#define PLL_ENA_NSS				REG(0x3DA0)
#define NSSTCM_CLK_SRC_CTL			REG(0x3DC0)
#define NSSTCM_CLK_SRC0_NS			REG(0x3DC4)
#define NSSTCM_CLK_SRC1_NS			REG(0x3DC8)
#define NSSTCM_CLK_FS				REG(0x3DCC)
#define NSSTCM_CLK_CTL				REG(0x3DD0)
#define CE5_CORE_0_RESET			REG(0x3E00)
#define CE5_CORE_1_RESET			REG(0x3E04)
#define CE5_CORE_2_RESET			REG(0x3E08)
#define CE5_CORE_3_RESET			REG(0x3E0C)
#define CE5_AHB_RESET				REG(0x3E10)
#define NSS_RESET				REG(0x3E20)
#define GMAC_AHB_RESET				REG(0x3E24)
#define MACSEC_CORE1_RESET			REG(0x3E28)
#define MACSEC_CORE2_RESET			REG(0x3E2C)
#define MACSEC_CORE3_RESET			REG(0x3E30)
#define NSS_TCM_RESET				REG(0x3E40)

enum nss_hal_pvt_pll_status {
	PLL_NOT_LOCKED,
	PLL_LOCKED
};

#endif
#endif /* __NSS_CLOCKS_H */
