    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; ss
ss__0__INTTYPE EQU CYREG_PICU0_INTTYPE3
ss__0__MASK EQU 0x08
ss__0__PC EQU CYREG_PRT0_PC3
ss__0__PORT EQU 0
ss__0__SHIFT EQU 3
ss__AG EQU CYREG_PRT0_AG
ss__AMUX EQU CYREG_PRT0_AMUX
ss__BIE EQU CYREG_PRT0_BIE
ss__BIT_MASK EQU CYREG_PRT0_BIT_MASK
ss__BYP EQU CYREG_PRT0_BYP
ss__CTL EQU CYREG_PRT0_CTL
ss__DM0 EQU CYREG_PRT0_DM0
ss__DM1 EQU CYREG_PRT0_DM1
ss__DM2 EQU CYREG_PRT0_DM2
ss__DR EQU CYREG_PRT0_DR
ss__INP_DIS EQU CYREG_PRT0_INP_DIS
ss__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
ss__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
ss__LCD_EN EQU CYREG_PRT0_LCD_EN
ss__MASK EQU 0x08
ss__PORT EQU 0
ss__PRT EQU CYREG_PRT0_PRT
ss__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
ss__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
ss__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
ss__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
ss__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
ss__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
ss__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
ss__PS EQU CYREG_PRT0_PS
ss__SHIFT EQU 3
ss__SLW EQU CYREG_PRT0_SLW

; LCD_LCDPort
LCD_LCDPort__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_LCDPort__0__PORT EQU 2
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__INTTYPE EQU CYREG_PICU2_INTTYPE1
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_LCDPort__1__PORT EQU 2
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__INTTYPE EQU CYREG_PICU2_INTTYPE2
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_LCDPort__2__PORT EQU 2
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__INTTYPE EQU CYREG_PICU2_INTTYPE3
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_LCDPort__3__PORT EQU 2
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__INTTYPE EQU CYREG_PICU2_INTTYPE4
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_LCDPort__4__PORT EQU 2
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__INTTYPE EQU CYREG_PICU2_INTTYPE5
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_LCDPort__5__PORT EQU 2
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__INTTYPE EQU CYREG_PICU2_INTTYPE6
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_LCDPort__6__PORT EQU 2
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT2_AG
LCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_LCDPort__DR EQU CYREG_PRT2_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 2
LCD_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT2_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SLW EQU CYREG_PRT2_SLW

; SPIM_BSPIM
SPIM_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB01_02_ACTL
SPIM_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB01_02_CTL
SPIM_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB01_02_CTL
SPIM_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB01_02_CTL
SPIM_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB01_02_CTL
SPIM_BSPIM_BitCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB01_02_MSK
SPIM_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB01_02_MSK
SPIM_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB01_02_MSK
SPIM_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB01_02_MSK
SPIM_BSPIM_BitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB01_ACTL
SPIM_BSPIM_BitCounter__CONTROL_REG EQU CYREG_B0_UDB01_CTL
SPIM_BSPIM_BitCounter__CONTROL_ST_REG EQU CYREG_B0_UDB01_ST_CTL
SPIM_BSPIM_BitCounter__COUNT_REG EQU CYREG_B0_UDB01_CTL
SPIM_BSPIM_BitCounter__COUNT_ST_REG EQU CYREG_B0_UDB01_ST_CTL
SPIM_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB01_MSK_ACTL
SPIM_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB01_MSK_ACTL
SPIM_BSPIM_BitCounter__PERIOD_REG EQU CYREG_B0_UDB01_MSK
SPIM_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB01_02_ACTL
SPIM_BSPIM_BitCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB01_02_ST
SPIM_BSPIM_BitCounter_ST__MASK_REG EQU CYREG_B0_UDB01_MSK
SPIM_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB01_MSK_ACTL
SPIM_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB01_MSK_ACTL
SPIM_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB01_ACTL
SPIM_BSPIM_BitCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB01_ST_CTL
SPIM_BSPIM_BitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB01_ST_CTL
SPIM_BSPIM_BitCounter_ST__STATUS_REG EQU CYREG_B0_UDB01_ST
SPIM_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
SPIM_BSPIM_RxStsReg__16BIT_STATUS_REG EQU CYREG_B0_UDB02_03_ST
SPIM_BSPIM_RxStsReg__4__MASK EQU 0x10
SPIM_BSPIM_RxStsReg__4__POS EQU 4
SPIM_BSPIM_RxStsReg__5__MASK EQU 0x20
SPIM_BSPIM_RxStsReg__5__POS EQU 5
SPIM_BSPIM_RxStsReg__6__MASK EQU 0x40
SPIM_BSPIM_RxStsReg__6__POS EQU 6
SPIM_BSPIM_RxStsReg__MASK EQU 0x70
SPIM_BSPIM_RxStsReg__MASK_REG EQU CYREG_B0_UDB02_MSK
SPIM_BSPIM_RxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
SPIM_BSPIM_RxStsReg__STATUS_REG EQU CYREG_B0_UDB02_ST
SPIM_BSPIM_sR8_Dp_u0__16BIT_A0_REG EQU CYREG_B0_UDB01_02_A0
SPIM_BSPIM_sR8_Dp_u0__16BIT_A1_REG EQU CYREG_B0_UDB01_02_A1
SPIM_BSPIM_sR8_Dp_u0__16BIT_D0_REG EQU CYREG_B0_UDB01_02_D0
SPIM_BSPIM_sR8_Dp_u0__16BIT_D1_REG EQU CYREG_B0_UDB01_02_D1
SPIM_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB01_02_ACTL
SPIM_BSPIM_sR8_Dp_u0__16BIT_F0_REG EQU CYREG_B0_UDB01_02_F0
SPIM_BSPIM_sR8_Dp_u0__16BIT_F1_REG EQU CYREG_B0_UDB01_02_F1
SPIM_BSPIM_sR8_Dp_u0__A0_A1_REG EQU CYREG_B0_UDB01_A0_A1
SPIM_BSPIM_sR8_Dp_u0__A0_REG EQU CYREG_B0_UDB01_A0
SPIM_BSPIM_sR8_Dp_u0__A1_REG EQU CYREG_B0_UDB01_A1
SPIM_BSPIM_sR8_Dp_u0__D0_D1_REG EQU CYREG_B0_UDB01_D0_D1
SPIM_BSPIM_sR8_Dp_u0__D0_REG EQU CYREG_B0_UDB01_D0
SPIM_BSPIM_sR8_Dp_u0__D1_REG EQU CYREG_B0_UDB01_D1
SPIM_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB01_ACTL
SPIM_BSPIM_sR8_Dp_u0__F0_F1_REG EQU CYREG_B0_UDB01_F0_F1
SPIM_BSPIM_sR8_Dp_u0__F0_REG EQU CYREG_B0_UDB01_F0
SPIM_BSPIM_sR8_Dp_u0__F1_REG EQU CYREG_B0_UDB01_F1
SPIM_BSPIM_sR8_Dp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB01_MSK_ACTL
SPIM_BSPIM_sR8_Dp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB01_MSK_ACTL
SPIM_BSPIM_TxStsReg__0__MASK EQU 0x01
SPIM_BSPIM_TxStsReg__0__POS EQU 0
SPIM_BSPIM_TxStsReg__1__MASK EQU 0x02
SPIM_BSPIM_TxStsReg__1__POS EQU 1
SPIM_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB03_04_ACTL
SPIM_BSPIM_TxStsReg__16BIT_STATUS_REG EQU CYREG_B0_UDB03_04_ST
SPIM_BSPIM_TxStsReg__2__MASK EQU 0x04
SPIM_BSPIM_TxStsReg__2__POS EQU 2
SPIM_BSPIM_TxStsReg__3__MASK EQU 0x08
SPIM_BSPIM_TxStsReg__3__POS EQU 3
SPIM_BSPIM_TxStsReg__4__MASK EQU 0x10
SPIM_BSPIM_TxStsReg__4__POS EQU 4
SPIM_BSPIM_TxStsReg__MASK EQU 0x1F
SPIM_BSPIM_TxStsReg__MASK_REG EQU CYREG_B0_UDB03_MSK
SPIM_BSPIM_TxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB03_ACTL
SPIM_BSPIM_TxStsReg__STATUS_REG EQU CYREG_B0_UDB03_ST

; miso
miso__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
miso__0__MASK EQU 0x01
miso__0__PC EQU CYREG_PRT0_PC0
miso__0__PORT EQU 0
miso__0__SHIFT EQU 0
miso__AG EQU CYREG_PRT0_AG
miso__AMUX EQU CYREG_PRT0_AMUX
miso__BIE EQU CYREG_PRT0_BIE
miso__BIT_MASK EQU CYREG_PRT0_BIT_MASK
miso__BYP EQU CYREG_PRT0_BYP
miso__CTL EQU CYREG_PRT0_CTL
miso__DM0 EQU CYREG_PRT0_DM0
miso__DM1 EQU CYREG_PRT0_DM1
miso__DM2 EQU CYREG_PRT0_DM2
miso__DR EQU CYREG_PRT0_DR
miso__INP_DIS EQU CYREG_PRT0_INP_DIS
miso__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
miso__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
miso__LCD_EN EQU CYREG_PRT0_LCD_EN
miso__MASK EQU 0x01
miso__PORT EQU 0
miso__PRT EQU CYREG_PRT0_PRT
miso__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
miso__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
miso__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
miso__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
miso__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
miso__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
miso__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
miso__PS EQU CYREG_PRT0_PS
miso__SHIFT EQU 0
miso__SLW EQU CYREG_PRT0_SLW

; mosi
mosi__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
mosi__0__MASK EQU 0x02
mosi__0__PC EQU CYREG_PRT0_PC1
mosi__0__PORT EQU 0
mosi__0__SHIFT EQU 1
mosi__AG EQU CYREG_PRT0_AG
mosi__AMUX EQU CYREG_PRT0_AMUX
mosi__BIE EQU CYREG_PRT0_BIE
mosi__BIT_MASK EQU CYREG_PRT0_BIT_MASK
mosi__BYP EQU CYREG_PRT0_BYP
mosi__CTL EQU CYREG_PRT0_CTL
mosi__DM0 EQU CYREG_PRT0_DM0
mosi__DM1 EQU CYREG_PRT0_DM1
mosi__DM2 EQU CYREG_PRT0_DM2
mosi__DR EQU CYREG_PRT0_DR
mosi__INP_DIS EQU CYREG_PRT0_INP_DIS
mosi__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
mosi__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
mosi__LCD_EN EQU CYREG_PRT0_LCD_EN
mosi__MASK EQU 0x02
mosi__PORT EQU 0
mosi__PRT EQU CYREG_PRT0_PRT
mosi__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
mosi__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
mosi__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
mosi__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
mosi__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
mosi__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
mosi__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
mosi__PS EQU CYREG_PRT0_PS
mosi__SHIFT EQU 1
mosi__SLW EQU CYREG_PRT0_SLW

; sclk
sclk__0__INTTYPE EQU CYREG_PICU0_INTTYPE2
sclk__0__MASK EQU 0x04
sclk__0__PC EQU CYREG_PRT0_PC2
sclk__0__PORT EQU 0
sclk__0__SHIFT EQU 2
sclk__AG EQU CYREG_PRT0_AG
sclk__AMUX EQU CYREG_PRT0_AMUX
sclk__BIE EQU CYREG_PRT0_BIE
sclk__BIT_MASK EQU CYREG_PRT0_BIT_MASK
sclk__BYP EQU CYREG_PRT0_BYP
sclk__CTL EQU CYREG_PRT0_CTL
sclk__DM0 EQU CYREG_PRT0_DM0
sclk__DM1 EQU CYREG_PRT0_DM1
sclk__DM2 EQU CYREG_PRT0_DM2
sclk__DR EQU CYREG_PRT0_DR
sclk__INP_DIS EQU CYREG_PRT0_INP_DIS
sclk__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
sclk__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
sclk__LCD_EN EQU CYREG_PRT0_LCD_EN
sclk__MASK EQU 0x04
sclk__PORT EQU 0
sclk__PRT EQU CYREG_PRT0_PRT
sclk__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
sclk__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
sclk__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
sclk__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
sclk__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
sclk__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
sclk__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
sclk__PS EQU CYREG_PRT0_PS
sclk__SHIFT EQU 2
sclk__SLW EQU CYREG_PRT0_SLW

; Clock
Clock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock__CFG2_SRC_SEL_MASK EQU 0x07
Clock__INDEX EQU 0x00
Clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock__PM_ACT_MSK EQU 0x01
Clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock__PM_STBY_MSK EQU 0x01

; DMA_RX
DMA_RX__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
DMA_RX__DRQ_NUMBER EQU 0
DMA_RX__NUMBEROF_TDS EQU 0
DMA_RX__PRIORITY EQU 2
DMA_RX__TERMIN_EN EQU 0
DMA_RX__TERMIN_SEL EQU 0
DMA_RX__TERMOUT0_EN EQU 0
DMA_RX__TERMOUT0_SEL EQU 0
DMA_RX__TERMOUT1_EN EQU 0
DMA_RX__TERMOUT1_SEL EQU 0

; DMA_TX
DMA_TX__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
DMA_TX__DRQ_NUMBER EQU 1
DMA_TX__NUMBEROF_TDS EQU 0
DMA_TX__PRIORITY EQU 2
DMA_TX__TERMIN_EN EQU 0
DMA_TX__TERMIN_SEL EQU 0
DMA_TX__TERMOUT0_EN EQU 0
DMA_TX__TERMOUT0_SEL EQU 0
DMA_TX__TERMOUT1_EN EQU 0
DMA_TX__TERMOUT1_SEL EQU 0

; USBUART_arb_int
USBUART_arb_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_arb_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_arb_int__INTC_MASK EQU 0x400000
USBUART_arb_int__INTC_NUMBER EQU 22
USBUART_arb_int__INTC_PRIOR_NUM EQU 7
USBUART_arb_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_22
USBUART_arb_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_arb_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_bus_reset
USBUART_bus_reset__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_bus_reset__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_bus_reset__INTC_MASK EQU 0x800000
USBUART_bus_reset__INTC_NUMBER EQU 23
USBUART_bus_reset__INTC_PRIOR_NUM EQU 7
USBUART_bus_reset__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_23
USBUART_bus_reset__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_bus_reset__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_Dm
USBUART_Dm__0__INTTYPE EQU CYREG_PICU15_INTTYPE7
USBUART_Dm__0__MASK EQU 0x80
USBUART_Dm__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC1
USBUART_Dm__0__PORT EQU 15
USBUART_Dm__0__SHIFT EQU 7
USBUART_Dm__AG EQU CYREG_PRT15_AG
USBUART_Dm__AMUX EQU CYREG_PRT15_AMUX
USBUART_Dm__BIE EQU CYREG_PRT15_BIE
USBUART_Dm__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBUART_Dm__BYP EQU CYREG_PRT15_BYP
USBUART_Dm__CTL EQU CYREG_PRT15_CTL
USBUART_Dm__DM0 EQU CYREG_PRT15_DM0
USBUART_Dm__DM1 EQU CYREG_PRT15_DM1
USBUART_Dm__DM2 EQU CYREG_PRT15_DM2
USBUART_Dm__DR EQU CYREG_PRT15_DR
USBUART_Dm__INP_DIS EQU CYREG_PRT15_INP_DIS
USBUART_Dm__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
USBUART_Dm__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBUART_Dm__LCD_EN EQU CYREG_PRT15_LCD_EN
USBUART_Dm__MASK EQU 0x80
USBUART_Dm__PORT EQU 15
USBUART_Dm__PRT EQU CYREG_PRT15_PRT
USBUART_Dm__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBUART_Dm__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBUART_Dm__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBUART_Dm__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBUART_Dm__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBUART_Dm__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBUART_Dm__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBUART_Dm__PS EQU CYREG_PRT15_PS
USBUART_Dm__SHIFT EQU 7
USBUART_Dm__SLW EQU CYREG_PRT15_SLW

; USBUART_Dp
USBUART_Dp__0__INTTYPE EQU CYREG_PICU15_INTTYPE6
USBUART_Dp__0__MASK EQU 0x40
USBUART_Dp__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC0
USBUART_Dp__0__PORT EQU 15
USBUART_Dp__0__SHIFT EQU 6
USBUART_Dp__AG EQU CYREG_PRT15_AG
USBUART_Dp__AMUX EQU CYREG_PRT15_AMUX
USBUART_Dp__BIE EQU CYREG_PRT15_BIE
USBUART_Dp__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBUART_Dp__BYP EQU CYREG_PRT15_BYP
USBUART_Dp__CTL EQU CYREG_PRT15_CTL
USBUART_Dp__DM0 EQU CYREG_PRT15_DM0
USBUART_Dp__DM1 EQU CYREG_PRT15_DM1
USBUART_Dp__DM2 EQU CYREG_PRT15_DM2
USBUART_Dp__DR EQU CYREG_PRT15_DR
USBUART_Dp__INP_DIS EQU CYREG_PRT15_INP_DIS
USBUART_Dp__INTSTAT EQU CYREG_PICU15_INTSTAT
USBUART_Dp__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
USBUART_Dp__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBUART_Dp__LCD_EN EQU CYREG_PRT15_LCD_EN
USBUART_Dp__MASK EQU 0x40
USBUART_Dp__PORT EQU 15
USBUART_Dp__PRT EQU CYREG_PRT15_PRT
USBUART_Dp__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBUART_Dp__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBUART_Dp__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBUART_Dp__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBUART_Dp__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBUART_Dp__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBUART_Dp__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBUART_Dp__PS EQU CYREG_PRT15_PS
USBUART_Dp__SHIFT EQU 6
USBUART_Dp__SLW EQU CYREG_PRT15_SLW
USBUART_Dp__SNAP EQU CYREG_PICU_15_SNAP_15

; USBUART_dp_int
USBUART_dp_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_dp_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_dp_int__INTC_MASK EQU 0x1000
USBUART_dp_int__INTC_NUMBER EQU 12
USBUART_dp_int__INTC_PRIOR_NUM EQU 7
USBUART_dp_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_12
USBUART_dp_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_dp_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_ep_0
USBUART_ep_0__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_ep_0__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_ep_0__INTC_MASK EQU 0x1000000
USBUART_ep_0__INTC_NUMBER EQU 24
USBUART_ep_0__INTC_PRIOR_NUM EQU 7
USBUART_ep_0__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_24
USBUART_ep_0__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_ep_0__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_ep_1
USBUART_ep_1__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_ep_1__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_ep_1__INTC_MASK EQU 0x01
USBUART_ep_1__INTC_NUMBER EQU 0
USBUART_ep_1__INTC_PRIOR_NUM EQU 7
USBUART_ep_1__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
USBUART_ep_1__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_ep_1__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_ep_2
USBUART_ep_2__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_ep_2__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_ep_2__INTC_MASK EQU 0x02
USBUART_ep_2__INTC_NUMBER EQU 1
USBUART_ep_2__INTC_PRIOR_NUM EQU 7
USBUART_ep_2__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
USBUART_ep_2__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_ep_2__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_ep_3
USBUART_ep_3__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_ep_3__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_ep_3__INTC_MASK EQU 0x04
USBUART_ep_3__INTC_NUMBER EQU 2
USBUART_ep_3__INTC_PRIOR_NUM EQU 7
USBUART_ep_3__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_2
USBUART_ep_3__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_ep_3__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_sof_int
USBUART_sof_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_sof_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_sof_int__INTC_MASK EQU 0x200000
USBUART_sof_int__INTC_NUMBER EQU 21
USBUART_sof_int__INTC_PRIOR_NUM EQU 7
USBUART_sof_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_21
USBUART_sof_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_sof_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_USB
USBUART_USB__ARB_CFG EQU CYREG_USB_ARB_CFG
USBUART_USB__ARB_EP1_CFG EQU CYREG_USB_ARB_EP1_CFG
USBUART_USB__ARB_EP1_INT_EN EQU CYREG_USB_ARB_EP1_INT_EN
USBUART_USB__ARB_EP1_SR EQU CYREG_USB_ARB_EP1_SR
USBUART_USB__ARB_EP2_CFG EQU CYREG_USB_ARB_EP2_CFG
USBUART_USB__ARB_EP2_INT_EN EQU CYREG_USB_ARB_EP2_INT_EN
USBUART_USB__ARB_EP2_SR EQU CYREG_USB_ARB_EP2_SR
USBUART_USB__ARB_EP3_CFG EQU CYREG_USB_ARB_EP3_CFG
USBUART_USB__ARB_EP3_INT_EN EQU CYREG_USB_ARB_EP3_INT_EN
USBUART_USB__ARB_EP3_SR EQU CYREG_USB_ARB_EP3_SR
USBUART_USB__ARB_EP4_CFG EQU CYREG_USB_ARB_EP4_CFG
USBUART_USB__ARB_EP4_INT_EN EQU CYREG_USB_ARB_EP4_INT_EN
USBUART_USB__ARB_EP4_SR EQU CYREG_USB_ARB_EP4_SR
USBUART_USB__ARB_EP5_CFG EQU CYREG_USB_ARB_EP5_CFG
USBUART_USB__ARB_EP5_INT_EN EQU CYREG_USB_ARB_EP5_INT_EN
USBUART_USB__ARB_EP5_SR EQU CYREG_USB_ARB_EP5_SR
USBUART_USB__ARB_EP6_CFG EQU CYREG_USB_ARB_EP6_CFG
USBUART_USB__ARB_EP6_INT_EN EQU CYREG_USB_ARB_EP6_INT_EN
USBUART_USB__ARB_EP6_SR EQU CYREG_USB_ARB_EP6_SR
USBUART_USB__ARB_EP7_CFG EQU CYREG_USB_ARB_EP7_CFG
USBUART_USB__ARB_EP7_INT_EN EQU CYREG_USB_ARB_EP7_INT_EN
USBUART_USB__ARB_EP7_SR EQU CYREG_USB_ARB_EP7_SR
USBUART_USB__ARB_EP8_CFG EQU CYREG_USB_ARB_EP8_CFG
USBUART_USB__ARB_EP8_INT_EN EQU CYREG_USB_ARB_EP8_INT_EN
USBUART_USB__ARB_EP8_SR EQU CYREG_USB_ARB_EP8_SR
USBUART_USB__ARB_INT_EN EQU CYREG_USB_ARB_INT_EN
USBUART_USB__ARB_INT_SR EQU CYREG_USB_ARB_INT_SR
USBUART_USB__ARB_RW1_DR EQU CYREG_USB_ARB_RW1_DR
USBUART_USB__ARB_RW1_RA EQU CYREG_USB_ARB_RW1_RA
USBUART_USB__ARB_RW1_RA_MSB EQU CYREG_USB_ARB_RW1_RA_MSB
USBUART_USB__ARB_RW1_WA EQU CYREG_USB_ARB_RW1_WA
USBUART_USB__ARB_RW1_WA_MSB EQU CYREG_USB_ARB_RW1_WA_MSB
USBUART_USB__ARB_RW2_DR EQU CYREG_USB_ARB_RW2_DR
USBUART_USB__ARB_RW2_RA EQU CYREG_USB_ARB_RW2_RA
USBUART_USB__ARB_RW2_RA_MSB EQU CYREG_USB_ARB_RW2_RA_MSB
USBUART_USB__ARB_RW2_WA EQU CYREG_USB_ARB_RW2_WA
USBUART_USB__ARB_RW2_WA_MSB EQU CYREG_USB_ARB_RW2_WA_MSB
USBUART_USB__ARB_RW3_DR EQU CYREG_USB_ARB_RW3_DR
USBUART_USB__ARB_RW3_RA EQU CYREG_USB_ARB_RW3_RA
USBUART_USB__ARB_RW3_RA_MSB EQU CYREG_USB_ARB_RW3_RA_MSB
USBUART_USB__ARB_RW3_WA EQU CYREG_USB_ARB_RW3_WA
USBUART_USB__ARB_RW3_WA_MSB EQU CYREG_USB_ARB_RW3_WA_MSB
USBUART_USB__ARB_RW4_DR EQU CYREG_USB_ARB_RW4_DR
USBUART_USB__ARB_RW4_RA EQU CYREG_USB_ARB_RW4_RA
USBUART_USB__ARB_RW4_RA_MSB EQU CYREG_USB_ARB_RW4_RA_MSB
USBUART_USB__ARB_RW4_WA EQU CYREG_USB_ARB_RW4_WA
USBUART_USB__ARB_RW4_WA_MSB EQU CYREG_USB_ARB_RW4_WA_MSB
USBUART_USB__ARB_RW5_DR EQU CYREG_USB_ARB_RW5_DR
USBUART_USB__ARB_RW5_RA EQU CYREG_USB_ARB_RW5_RA
USBUART_USB__ARB_RW5_RA_MSB EQU CYREG_USB_ARB_RW5_RA_MSB
USBUART_USB__ARB_RW5_WA EQU CYREG_USB_ARB_RW5_WA
USBUART_USB__ARB_RW5_WA_MSB EQU CYREG_USB_ARB_RW5_WA_MSB
USBUART_USB__ARB_RW6_DR EQU CYREG_USB_ARB_RW6_DR
USBUART_USB__ARB_RW6_RA EQU CYREG_USB_ARB_RW6_RA
USBUART_USB__ARB_RW6_RA_MSB EQU CYREG_USB_ARB_RW6_RA_MSB
USBUART_USB__ARB_RW6_WA EQU CYREG_USB_ARB_RW6_WA
USBUART_USB__ARB_RW6_WA_MSB EQU CYREG_USB_ARB_RW6_WA_MSB
USBUART_USB__ARB_RW7_DR EQU CYREG_USB_ARB_RW7_DR
USBUART_USB__ARB_RW7_RA EQU CYREG_USB_ARB_RW7_RA
USBUART_USB__ARB_RW7_RA_MSB EQU CYREG_USB_ARB_RW7_RA_MSB
USBUART_USB__ARB_RW7_WA EQU CYREG_USB_ARB_RW7_WA
USBUART_USB__ARB_RW7_WA_MSB EQU CYREG_USB_ARB_RW7_WA_MSB
USBUART_USB__ARB_RW8_DR EQU CYREG_USB_ARB_RW8_DR
USBUART_USB__ARB_RW8_RA EQU CYREG_USB_ARB_RW8_RA
USBUART_USB__ARB_RW8_RA_MSB EQU CYREG_USB_ARB_RW8_RA_MSB
USBUART_USB__ARB_RW8_WA EQU CYREG_USB_ARB_RW8_WA
USBUART_USB__ARB_RW8_WA_MSB EQU CYREG_USB_ARB_RW8_WA_MSB
USBUART_USB__BUF_SIZE EQU CYREG_USB_BUF_SIZE
USBUART_USB__BUS_RST_CNT EQU CYREG_USB_BUS_RST_CNT
USBUART_USB__CR0 EQU CYREG_USB_CR0
USBUART_USB__CR1 EQU CYREG_USB_CR1
USBUART_USB__CWA EQU CYREG_USB_CWA
USBUART_USB__CWA_MSB EQU CYREG_USB_CWA_MSB
USBUART_USB__DMA_THRES EQU CYREG_USB_DMA_THRES
USBUART_USB__DMA_THRES_MSB EQU CYREG_USB_DMA_THRES_MSB
USBUART_USB__DYN_RECONFIG EQU CYREG_USB_DYN_RECONFIG
USBUART_USB__EP_ACTIVE EQU CYREG_USB_EP_ACTIVE
USBUART_USB__EP_TYPE EQU CYREG_USB_EP_TYPE
USBUART_USB__EP0_CNT EQU CYREG_USB_EP0_CNT
USBUART_USB__EP0_CR EQU CYREG_USB_EP0_CR
USBUART_USB__EP0_DR0 EQU CYREG_USB_EP0_DR0
USBUART_USB__EP0_DR1 EQU CYREG_USB_EP0_DR1
USBUART_USB__EP0_DR2 EQU CYREG_USB_EP0_DR2
USBUART_USB__EP0_DR3 EQU CYREG_USB_EP0_DR3
USBUART_USB__EP0_DR4 EQU CYREG_USB_EP0_DR4
USBUART_USB__EP0_DR5 EQU CYREG_USB_EP0_DR5
USBUART_USB__EP0_DR6 EQU CYREG_USB_EP0_DR6
USBUART_USB__EP0_DR7 EQU CYREG_USB_EP0_DR7
USBUART_USB__MEM_DATA EQU CYREG_USB_MEM_DATA_MBASE
USBUART_USB__PM_ACT_CFG EQU CYREG_PM_ACT_CFG5
USBUART_USB__PM_ACT_MSK EQU 0x01
USBUART_USB__PM_STBY_CFG EQU CYREG_PM_STBY_CFG5
USBUART_USB__PM_STBY_MSK EQU 0x01
USBUART_USB__SIE_EP_INT_EN EQU CYREG_USB_SIE_EP_INT_EN
USBUART_USB__SIE_EP_INT_SR EQU CYREG_USB_SIE_EP_INT_SR
USBUART_USB__SIE_EP1_CNT0 EQU CYREG_USB_SIE_EP1_CNT0
USBUART_USB__SIE_EP1_CNT1 EQU CYREG_USB_SIE_EP1_CNT1
USBUART_USB__SIE_EP1_CR0 EQU CYREG_USB_SIE_EP1_CR0
USBUART_USB__SIE_EP2_CNT0 EQU CYREG_USB_SIE_EP2_CNT0
USBUART_USB__SIE_EP2_CNT1 EQU CYREG_USB_SIE_EP2_CNT1
USBUART_USB__SIE_EP2_CR0 EQU CYREG_USB_SIE_EP2_CR0
USBUART_USB__SIE_EP3_CNT0 EQU CYREG_USB_SIE_EP3_CNT0
USBUART_USB__SIE_EP3_CNT1 EQU CYREG_USB_SIE_EP3_CNT1
USBUART_USB__SIE_EP3_CR0 EQU CYREG_USB_SIE_EP3_CR0
USBUART_USB__SIE_EP4_CNT0 EQU CYREG_USB_SIE_EP4_CNT0
USBUART_USB__SIE_EP4_CNT1 EQU CYREG_USB_SIE_EP4_CNT1
USBUART_USB__SIE_EP4_CR0 EQU CYREG_USB_SIE_EP4_CR0
USBUART_USB__SIE_EP5_CNT0 EQU CYREG_USB_SIE_EP5_CNT0
USBUART_USB__SIE_EP5_CNT1 EQU CYREG_USB_SIE_EP5_CNT1
USBUART_USB__SIE_EP5_CR0 EQU CYREG_USB_SIE_EP5_CR0
USBUART_USB__SIE_EP6_CNT0 EQU CYREG_USB_SIE_EP6_CNT0
USBUART_USB__SIE_EP6_CNT1 EQU CYREG_USB_SIE_EP6_CNT1
USBUART_USB__SIE_EP6_CR0 EQU CYREG_USB_SIE_EP6_CR0
USBUART_USB__SIE_EP7_CNT0 EQU CYREG_USB_SIE_EP7_CNT0
USBUART_USB__SIE_EP7_CNT1 EQU CYREG_USB_SIE_EP7_CNT1
USBUART_USB__SIE_EP7_CR0 EQU CYREG_USB_SIE_EP7_CR0
USBUART_USB__SIE_EP8_CNT0 EQU CYREG_USB_SIE_EP8_CNT0
USBUART_USB__SIE_EP8_CNT1 EQU CYREG_USB_SIE_EP8_CNT1
USBUART_USB__SIE_EP8_CR0 EQU CYREG_USB_SIE_EP8_CR0
USBUART_USB__SOF0 EQU CYREG_USB_SOF0
USBUART_USB__SOF1 EQU CYREG_USB_SOF1
USBUART_USB__USB_CLK_EN EQU CYREG_USB_USB_CLK_EN
USBUART_USB__USBIO_CR0 EQU CYREG_USB_USBIO_CR0
USBUART_USB__USBIO_CR1 EQU CYREG_USB_USBIO_CR1

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 64000000
BCLK__BUS_CLK__KHZ EQU 64000
BCLK__BUS_CLK__MHZ EQU 64
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 18
CYDEV_CHIP_DIE_PSOC4A EQU 10
CYDEV_CHIP_DIE_PSOC5LP EQU 17
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 10
CYDEV_CHIP_MEMBER_4C EQU 15
CYDEV_CHIP_MEMBER_4D EQU 6
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 11
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 9
CYDEV_CHIP_MEMBER_4I EQU 14
CYDEV_CHIP_MEMBER_4J EQU 7
CYDEV_CHIP_MEMBER_4K EQU 8
CYDEV_CHIP_MEMBER_4L EQU 13
CYDEV_CHIP_MEMBER_4M EQU 12
CYDEV_CHIP_MEMBER_4N EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 17
CYDEV_CHIP_MEMBER_5B EQU 16
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 0
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 0
CYDEV_CONFIGURATION_DMA EQU 1
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_DMA
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP EQU 1
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000003
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END