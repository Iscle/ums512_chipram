/*
 * Copyright (C) 2019 Unigroup Spreadtrum & RDA Technologies Co., Ltd.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 * updated at 2019-02-11 15:07:05
 *
 */


#ifndef ANLG_PHY_G4_H
#define ANLG_PHY_G4_H

#define CTL_BASE_ANLG_PHY_G4 0x634C0000


#define REG_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_ANA_USB30_CTRL0      ( CTL_BASE_ANLG_PHY_G4 + 0x0000 )
#define REG_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_ANA_USB30_CTRL1      ( CTL_BASE_ANLG_PHY_G4 + 0x0004 )
#define REG_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_REG_SEL_CFG_0        ( CTL_BASE_ANLG_PHY_G4 + 0x0008 )
#define REG_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_ANA_USB30_CTRL0      ( CTL_BASE_ANLG_PHY_G4 + 0x000C )
#define REG_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_ANA_USB30_CTRL1      ( CTL_BASE_ANLG_PHY_G4 + 0x0010 )
#define REG_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_REG_SEL_CFG_0        ( CTL_BASE_ANLG_PHY_G4 + 0x0014 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TEST_PIN            ( CTL_BASE_ANLG_PHY_G4 + 0x0018 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_UTMI_CTL1           ( CTL_BASE_ANLG_PHY_G4 + 0x001C )
#define REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_BATTER_PLL          ( CTL_BASE_ANLG_PHY_G4 + 0x0020 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_UTMI_CTL2           ( CTL_BASE_ANLG_PHY_G4 + 0x0024 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TRIMMING            ( CTL_BASE_ANLG_PHY_G4 + 0x0028 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_PLL_CFG             ( CTL_BASE_ANLG_PHY_G4 + 0x002C )
#define REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_PHY_BIST_TEST       ( CTL_BASE_ANLG_PHY_G4 + 0x0030 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_ISO_SW              ( CTL_BASE_ANLG_PHY_G4 + 0x0034 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_0_REG_SEL_CFG_0             ( CTL_BASE_ANLG_PHY_G4 + 0x0038 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TEST_PIN            ( CTL_BASE_ANLG_PHY_G4 + 0x003C )
#define REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_UTMI_CTL1           ( CTL_BASE_ANLG_PHY_G4 + 0x0040 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_BATTER_PLL          ( CTL_BASE_ANLG_PHY_G4 + 0x0044 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_UTMI_CTL2           ( CTL_BASE_ANLG_PHY_G4 + 0x0048 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TRIMMING            ( CTL_BASE_ANLG_PHY_G4 + 0x004C )
#define REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_PLL_CFG             ( CTL_BASE_ANLG_PHY_G4 + 0x0050 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_PHY_BIST_TEST       ( CTL_BASE_ANLG_PHY_G4 + 0x0054 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_ISO_SW              ( CTL_BASE_ANLG_PHY_G4 + 0x0058 )
#define REG_ANLG_PHY_G4_ANALOG_USB20_1_REG_SEL_CFG_0             ( CTL_BASE_ANLG_PHY_G4 + 0x005C )

/* REG_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_ANA_USB30_CTRL0 */

#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_USB30_RESERVEDIN(x)    (((x) & 0xFFFF) << 16)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_USB30_RESERVEDOUT(x)   (((x) & 0xFFFF))

/* REG_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_ANA_USB30_CTRL1 */

#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_USB30_RESET_N          BIT(17)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_USB30_TRIM_TXRCTL(x)   (((x) & 0x1F) << 12)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_USB30_TRIM_RXRCTL(x)   (((x) & 0xF) << 8)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_USB30_TRIM_BG(x)       (((x) & 0xF) << 4)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_USB30_PS_PD_S          BIT(3)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_USB30_PS_PD_L          BIT(2)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_USB30_ISO_SW_EN        BIT(1)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_USB30_SW_SEL           BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB3_TYPEC_0_REG_SEL_CFG_0 */

#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB3_TYPEC_0_USB30_RESET_N  BIT(1)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB3_TYPEC_0_USB30_SW_SEL   BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_ANA_USB30_CTRL0 */

#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_USB30_RESERVEDIN(x)    (((x) & 0xFFFF) << 16)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_USB30_RESERVEDOUT(x)   (((x) & 0xFFFF))

/* REG_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_ANA_USB30_CTRL1 */

#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_USB30_RESET_N          BIT(17)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_USB30_TRIM_TXRCTL(x)   (((x) & 0x1F) << 12)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_USB30_TRIM_RXRCTL(x)   (((x) & 0xF) << 8)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_USB30_TRIM_BG(x)       (((x) & 0xF) << 4)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_USB30_PS_PD_S          BIT(3)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_USB30_PS_PD_L          BIT(2)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_USB30_ISO_SW_EN        BIT(1)
#define BIT_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_USB30_SW_SEL           BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB3_TYPEC_1_REG_SEL_CFG_0 */

#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB3_TYPEC_1_USB30_RESET_N  BIT(1)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB3_TYPEC_1_USB30_SW_SEL   BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TEST_PIN */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TESTCLK               BIT(24)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TESTDATAIN(x)         (((x) & 0xFF) << 16)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TESTADDR(x)           (((x) & 0xF) << 12)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TESTDATAOUTSEL        BIT(11)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TESTDATAOUT(x)        (((x) & 0xF) << 7)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_BIST_MODE(x)          (((x) & 0x1F) << 2)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_T2RCOMP               BIT(1)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_LPBK_END              BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_UTMI_CTL1 */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_DATABUS16_8           BIT(28)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_SUSPENDM              BIT(27)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_PORN                  BIT(26)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_RESET                 BIT(25)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_RXERROR               BIT(24)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_BYPASS_DRV_DP         BIT(23)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_BYPASS_DRV_DM         BIT(22)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_BYPASS_FS             BIT(21)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_BYPASS_IN_DP          BIT(20)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_BYPASS_IN_DM          BIT(19)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_BYPASS_OUT_DP         BIT(18)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_BYPASS_OUT_DM         BIT(17)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_VBUSVLDEXT            BIT(16)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_RESERVED(x)           (((x) & 0xFFFF))

/* REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_BATTER_PLL */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_PS_PD_S               BIT(4)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_PS_PD_L               BIT(3)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_REXTENABLE            BIT(2)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_DMPULLUP              BIT(1)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_SAMPLER_SEL           BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_UTMI_CTL2 */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_DPPULLDOWN            BIT(4)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_DMPULLDOWN            BIT(3)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TXBITSTUFFENABLE      BIT(2)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TXBITSTUFFENABLEH     BIT(1)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_SLEEPM                BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TRIMMING */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TUNEHSAMP(x)          (((x) & 0x3) << 29)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TFREGRES(x)           (((x) & 0x3F) << 23)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TFHSRES(x)            (((x) & 0x1F) << 18)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TUNERISE(x)           (((x) & 0x3) << 16)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TUNEOTG(x)            (((x) & 0x7) << 13)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TUNEDSC(x)            (((x) & 0x3) << 11)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TUNESQ(x)             (((x) & 0xF) << 7)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TUNEEQ(x)             (((x) & 0x7) << 4)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_TUNEPLLS(x)           (((x) & 0xF))

/* REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_PLL_CFG */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_PLL_PFD_DEADZONE(x)   (((x) & 0x3) << 8)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_PLL_PFD_DELAY(x)      (((x) & 0x3) << 6)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_PLL_CP_IOFFSET_EN     BIT(5)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_PLL_CP_IOFFSET(x)     (((x) & 0xF) << 1)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_PLL_REF_DOUBLER_EN    BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_PHY_BIST_TEST */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_BISTRAM_EN            BIT(1)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_BIST_MODE_EN          BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_0_USB20_ISO_SW */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_0_USB20_ISO_SW_EN             BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_0_REG_SEL_CFG_0 */

#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_0_USB20_SUSPENDM      BIT(8)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_0_USB20_PORN          BIT(7)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_0_USB20_RESET         BIT(6)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_0_USB20_BYPASS_FS     BIT(5)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_0_USB20_BYPASS_IN_DM  BIT(4)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_0_USB20_SAMPLER_SEL   BIT(3)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_0_USB20_DPPULLDOWN    BIT(2)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_0_USB20_DMPULLDOWN    BIT(1)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_0_USB20_SLEEPM        BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TEST_PIN */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TESTCLK               BIT(24)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TESTDATAIN(x)         (((x) & 0xFF) << 16)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TESTADDR(x)           (((x) & 0xF) << 12)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TESTDATAOUTSEL        BIT(11)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TESTDATAOUT(x)        (((x) & 0xF) << 7)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_BIST_MODE(x)          (((x) & 0x1F) << 2)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_T2RCOMP               BIT(1)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_LPBK_END              BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_UTMI_CTL1 */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_DATABUS16_8           BIT(28)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_SUSPENDM              BIT(27)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_PORN                  BIT(26)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_RESET                 BIT(25)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_RXERROR               BIT(24)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_BYPASS_DRV_DP         BIT(23)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_BYPASS_DRV_DM         BIT(22)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_BYPASS_FS             BIT(21)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_BYPASS_IN_DP          BIT(20)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_BYPASS_IN_DM          BIT(19)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_BYPASS_OUT_DP         BIT(18)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_BYPASS_OUT_DM         BIT(17)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_VBUSVLDEXT            BIT(16)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_RESERVED(x)           (((x) & 0xFFFF))

/* REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_BATTER_PLL */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_PS_PD_S               BIT(4)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_PS_PD_L               BIT(3)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_REXTENABLE            BIT(2)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_DMPULLUP              BIT(1)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_SAMPLER_SEL           BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_UTMI_CTL2 */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_DPPULLDOWN            BIT(4)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_DMPULLDOWN            BIT(3)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TXBITSTUFFENABLE      BIT(2)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TXBITSTUFFENABLEH     BIT(1)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_SLEEPM                BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TRIMMING */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TUNEHSAMP(x)          (((x) & 0x3) << 29)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TFREGRES(x)           (((x) & 0x3F) << 23)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TFHSRES(x)            (((x) & 0x1F) << 18)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TUNERISE(x)           (((x) & 0x3) << 16)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TUNEOTG(x)            (((x) & 0x7) << 13)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TUNEDSC(x)            (((x) & 0x3) << 11)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TUNESQ(x)             (((x) & 0xF) << 7)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TUNEEQ(x)             (((x) & 0x7) << 4)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_TUNEPLLS(x)           (((x) & 0xF))

/* REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_PLL_CFG */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_PLL_PFD_DEADZONE(x)   (((x) & 0x3) << 8)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_PLL_PFD_DELAY(x)      (((x) & 0x3) << 6)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_PLL_CP_IOFFSET_EN     BIT(5)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_PLL_CP_IOFFSET(x)     (((x) & 0xF) << 1)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_PLL_REF_DOUBLER_EN    BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_PHY_BIST_TEST */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_BISTRAM_EN            BIT(1)
#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_BIST_MODE_EN          BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_1_USB20_ISO_SW */

#define BIT_ANLG_PHY_G4_ANALOG_USB20_1_USB20_ISO_SW_EN             BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_USB20_1_REG_SEL_CFG_0 */

#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_1_USB20_SUSPENDM      BIT(8)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_1_USB20_PORN          BIT(7)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_1_USB20_RESET         BIT(6)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_1_USB20_BYPASS_FS     BIT(5)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_1_USB20_BYPASS_IN_DM  BIT(4)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_1_USB20_SAMPLER_SEL   BIT(3)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_1_USB20_DPPULLDOWN    BIT(2)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_1_USB20_DMPULLDOWN    BIT(1)
#define BIT_ANLG_PHY_G4_DBG_SEL_ANALOG_USB20_1_USB20_SLEEPM        BIT(0)


#endif /* ANLG_PHY_G4_H */

