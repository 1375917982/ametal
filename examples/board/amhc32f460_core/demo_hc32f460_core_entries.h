/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief hc32f460 ?~{(4~}???????????????~{(4~}?~{!B~}
 * \sa demo_am118ble_all_entries.h
 *
 * \internal
 * \par Modification history
 * - 1.00 20-01-16  cds, first implementation
 * \endinternal
 */

/**
 * \brief ADC INT ???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_adc_int_entry (void);

/**
 * \brief ADC DMA ???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_adc_dma_entry (void);

/**
 * \brief ????????
 */
void demo_hc32f460_core_hw_multichan_adc_entry (void);

/**
 * \brief ADC ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_adc_entry (void);

/**
 * \brief ?~{($~}?~{!'~}??ADC ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_multichan_adc_entry (void);

/**
 * \brief ???~{(4~}?~{!B~}???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_buzzer_entry (void);

/**
 * \brief CLK ???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_clk_entry (void);

/**
 * \brief CRC ???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_hw_crc_entry (void);

/**
 * \brief CRC ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_crc_entry (void);

/**
 * \brief DAC ???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_dac_entry (void);

/**
 * \brief DAC ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_dac_entry (void);

/**
 * \brief DMA ?????????????????~{!'~}????????????????
 */
void demo_hc32f460_core_drv_dma_m2m_entry (void);

/**
 * \brief FLASH ???????~{!'~}????????????????
 */
void demo_hc32f460_core_drv_flash_entry (void);

/**
 * \brief GPIO ???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_gpio_entry (void);

/**
 * \brief GPIO ???????????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_gpio_trigger_entry (void);

/**
 * \brief GPIO ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_gpio_entry (void);

/**
 * \brief GPIO ???????????????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_gpio_trigger_entry (void);

/**
 * \brief I2C ???~{(2~}????(?????????????????? EEPROM)???~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_i2c_slave_int_entry (void);

/**
 * \brief I2C ?~{!B~}?~{(2~}?? LM75 ?????~{!B~}?????????????????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_i2c_lm75_entry (void);

/**
 * \brief ~{!c~}??~{(9~}????~{!A~}????????????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_key_input_event_entry (void);

/**
 * \brief LED ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_led_entry (void);

/**
 * \brief RTC ???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_rtc_sec_int_entry (void);

/**
 * \brief RTC ???????~{!'~}??~{!@(:!A~}?????????????????????????
 */
void demo_hc32f460_core_drv_rtc_entry (void);

/**
 * \brief SPI ?~{!B~}?~{(2~}???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_spi_master_entry (void);

/**
 * \brief SPI ?~{!B~}?~{(2~} DMA ???????????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_spi_master_dma_entry (void);

/**
 * \brief SPI ?~{!B~}?~{(2~}???????????????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_spi_master_int_entry (void);

/**
 * \brief ???~{!@~}???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_delay_entry (void);

/**
 * \brief SYSTICK ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_systick_timer_entry (void);

/**
 * \brief ADTIM?~{!'~}?~{!@~}?~{!B~}?~{(*~}?????????????~{!'~}??HW????????
 */
void demo_hc32f460_core_hw_adtim_swsync_entry(void);

/**
 * \brief ADTIM?~{!'~}?~{!@~}?~{!B~}???????~{(*~}?????????????~{!'~}??HW????????
 */
void demo_hc32f460_core_hw_adtim_port_sw_brake_entry (void);

/**
 * \brief ADTIM?~{!'~}?~{!@~}?~{!B~}VC???????????~{!'~}??HW????????
 */
void demo_hc32f460_core_hw_adtim_vc_brake_entry (void);

/**
 * \brief ?~{!'~}?~{!@~}?~{!B~} CAP ???????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_tim_cap_entry (void);

/**
 * \brief TIM0 ?~{!'~}?~{!@~}?~{!B~} CAP ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim0_cap_entry (void);

/**
 * \brief TIM1 ?~{!'~}?~{!@~}?~{!B~} CAP ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim1_cap_entry (void);

/**
 * \brief TIM2 ?~{!'~}?~{!@~}?~{!B~} CAP ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim2_cap_entry (void);

/**
 * \brief TIM3 ?~{!'~}?~{!@~}?~{!B~} CAP ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim3_cap_entry (void);

/**
 * \brief ADTIM4?~{!'~}?~{!@~}?~{!B~}cap???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim4_cap_entry(void);

/**
 * \brief ADTIM5?~{!'~}?~{!@~}?~{!B~}cap???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim5_cap_entry(void);

/**
 * \brief ADTIM6?~{!'~}?~{!@~}?~{!B~}cap???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim6_cap_entry(void);

/**
 * \brief TIM ????~{!@~}?????????~{!A~}????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_tim_cmp_toggle_entry (void);

/**
 * \brief ?~{!'~}?~{!@~}?~{!B~} PWM ???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_tim_pwm_entry (void);

/**
 * \brief ?~{!'~}?~{!@~}?~{!B~} ????????????PWM ???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_tim_pwm_dead_entry (void);


/**
 * \brief ?~{!'~}???~{!'~}?~{!@~}?~{!B~} ???????????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_tim_port_brake_entry (void);

/**
 * \brief ?~{!'~}???~{!'~}?~{!@~}?~{!B~} ???????????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_tim_vc_brake_entry (void);

/**
 * \brief TIM0 ?~{!'~}?~{!@~}?~{!B~} PWM ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim0_pwm_entry (void);

/**
 * \brief TIM1 ?~{!'~}?~{!@~}?~{!B~} PWM ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim1_pwm_entry (void);

/**
 * \brief TIM2 ?~{!'~}?~{!@~}?~{!B~} PWM ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim2_pwm_entry (void);

/**
 * \brief TIM3 ?~{!'~}?~{!@~}?~{!B~} PWM ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim3_pwm_entry (void);

/**
 * \brief ADTIM4?~{!'~}?~{!@~}?~{!B~}pwm???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim4_pwm_entry (void);

/**
 * \brief ADTIM5?~{!'~}?~{!@~}?~{!B~}pwm???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim5_pwm_entry (void);

/**
 * \brief ADTIM6?~{!'~}?~{!@~}?~{!B~}pwm???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim6_pwm_entry (void);

/**
 * \brief ?~{!'~}?~{!@~}?~{!B~} TIMING ???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_tim_timing_entry (void);

/**
 * \brief TIM????ADC???????????~{!'~}??HW????????
 */
void demo_hc32f460_core_hw_tim_trig_adc_sqr_entry (void);

/**
 * \brief TIM0 ?~{!'~}?~{!@~}?~{!B~} TIMING ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim0_timing_entry (void);

/**
 * \brief TIM1 ?~{!'~}?~{!@~}?~{!B~} TIMING ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim1_timing_entry (void);

/**
 * \brief TIM2 ?~{!'~}?~{!@~}?~{!B~} TIMING ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim2_timing_entry (void);

/**
 * \brief TIM3 ?~{!'~}?~{!@~}?~{!B~} TIMING ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim3_timing_entry (void);

/**
 * \brief ADTIM4?~{!'~}?~{!@~}?~{!B~}timing???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim4_timing_entry (void);

/**
 * \brief ADTIM5?~{!'~}?~{!@~}?~{!B~}timing???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim5_timing_entry (void);

/**
 * \brief ADTIM6?~{!'~}?~{!@~}?~{!B~}timing???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_tim6_timing_entry (void);

/**
 * \brief LPTIM0?~{!'~}?~{!@~}?~{!B~} TIMING ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_lptim0_timing_entry (void);

/**
 * \brief LPTIM1?~{!'~}?~{!@~}?~{!B~} TIMING ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_lptim1_timing_entry (void);

/**
 * \brief LPTIM1?~{!'~}?~{!@~}?~{!B~}??LPTIM2?~{!'~}?~{!@~}?~{!B~}TIMING???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_lptim_timing_gate_entry (void);

/**
 * \brief ADTIM????ADC???????????~{!'~}??HW????????
 */
void demo_hc32f460_core_hw_adtim_trig_adc_sqr_entry (void);

/**
 * \brief U_ID ???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_uid_entry (void);

/**
 * \brief UART ???????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_uart_int_entry (void);

/**
 * \brief UART ???????????????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_hw_uart_polling_entry (void);

/**
 * \brief UART DMA ???????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_uart_rx_dma_entry (void);

/**
 * \brief UART DMA ???????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_uart_tx_dma_entry (void);

/**
 * \brief UART ???????????????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_uart_polling_entry (void);

/**
 * \brief UART ?????????????????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_uart_ringbuf_entry (void);

/**
 * \brief LPUART ???????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_lpuart_int_entry (void);

/**
 * \brief LPUART ???????????????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_hw_lpuart_polling_entry (void);

/**
 * \brief LPUART DMA ???????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_lpuart_rx_dma_entry (void);

/**
 * \brief LPUART DMA ???????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_lpuart_tx_dma_entry (void);

/**
 * \brief LPUART ???????????????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_lpuart_polling_entry (void);

/**
 * \brief LPUART ?????????????????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_lpuart_ringbuf_entry (void);

/**
 * \brief ???????????~{!'~}???????????????????????~{!'~}????????????????
 */
void demo_hc32f460_drv_lpmode_wake_up_entry (void);

/**
 * \brief WWDG ???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_wdt_entry (void);

/**
 * \brief WWDG ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_std_wdt_entry (void);

/**
 * \brief MicroPort DS1302 ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_microport_ds1302_entry (void);

/**
 * \brief MicroPort EEPROM ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_microport_eeprom_entry (void);

/**
 * \brief MicroPort EEPROM ???????~{!'~}?? NVRAM ????????
 */
void demo_hc32f460_core_microport_eeprom_nvram_entry (void);

/**
 * \brief MicroPort FLASH ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_microport_flash_entry (void);

/**
 * \brief MicroPort FLASH ???????~{!'~}?? MTD ????????
 */
void demo_hc32f460_core_microport_flash_mtd_entry (void);

/**
 * \brief MicroPort FLASH ???????~{!'~}?? FTL ????????
 */
void demo_hc32f460_core_microport_flash_ftl_entry (void);

/**
 * \brief MicroPort RS485 ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_microport_rs485_entry (void);

/**
 * \brief MicroPort RTC ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_microport_rtc_entry (void);

/**
 * \brief MicroPort RX8025T ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_microport_rx8025t_entry (void);

/**
 * \brief MicroPort USB ???????~{!'~}??~{!@(:!A~}?????????
 */
void demo_hc32f460_core_microport_usb_entry (void);

/**
 * \brief MiniPort-VIEW ????
 */
void demo_hc32f460_core_miniport_digitron_entry (void);

/**
 * \brief MiniPort-595 + MiniPort-VIEW ????
 */
void demo_hc32f460_core_miniport_hc595_digitron_entry (void);

/**
 * \brief MiniPort-595 + MiniPort-KEY ????
 */
void demo_hc32f460_core_miniport_hc595_digitron_key_entry (void);

/**
 * \brief MiniPort-595 + MiniPort-VIEW + LM75 ????
 */
void demo_hc32f460_core_miniport_hc595_digitron_temp_entry (void);

/**
 * \brief MiniPort-595 + MiniPort-LED ????
 */
void demo_hc32f460_core_miniport_hc595_led_entry (void);

/**
 * \brief MiniPort-KEY
 */
void demo_hc32f460_core_miniport_key_entry (void);

/**
 * \brief MiniPort-KEY + MiniPort-DIGITORN????????
 */
void demo_hc32f460_core_miniport_key_digitron_entry (void);

/**
 * \brief MiniPort-LED ????
 */
void demo_hc32f460_core_miniport_led_entry (void);

/**
 * \brief MiniPort-ZLG72128????????
 */
void demo_hc32f460_core_miniport_zlg72128_entry (void);

/**
 * \brief gpio ????
 */
void demo_std_gpio_entry (int input_pin, int output_pin);

/**
 * \brief ??CPU?~{!'~}????
 */
void demo_hc32f460_core_dr_fm175xx_cpu_card (void);
/**
 * \brief A?~{($~}?~{!'~}???~{!'~}?~{($~}?????~{!'~}??????
 */
void demo_hc32f460_core_dr_fm175xx_picca_read_id(void);

/**
 * \brief A?~{($~}?~{!'~}???????~{!'~}????
 */
void demo_hc32f460_core_dr_fm175xx_picca_halt (void);

/**
 * \brief A?~{($~}?~{!'~}???~{(&~}????
 */
void demo_hc32f460_core_dr_fm175xx_picca_read_block (void);

/**
 * \brief A?~{($~}?~{!'~}????~{!A!B~}????
 */
void demo_hc32f460_core_dr_fm175xx_picca_val_operate(void);

/**
 * \brief A?~{($~}?~{!'~}???~{(&~}????
 */
void demo_hc32f460_core_dr_fm175xx_picca_write_block(void);

/**
 * \brief B?~{($~}?~{!'~}???~{!'~}??????
 */
void demo_hc32f460_core_dr_fm175xx_piccb_read_id(void);
/**
 * \brief FM175XX LCPD???? A?~{($~}?~{!'~}???~{!'~}?~{($~}?????~{!'~}??????
 */
void demo_hc32f460_core_dr_fm175xx_picca_lpcd_read_id(void);

/**
 * \brief ?~{(4~}??KinetisFlashTool?????~{(2~}??bootloader ????
 */
void demo_hc32f460_core_kft_bootloader_entry (void);

/**
 * \brief ?~{(4~}??KinetisFlashTool?????~{(2~}??bootloader??????????????
 */
void demo_hc32f460_core_kft_application_entry (void);

/**

 * \brief ????bootloader??????????????????
 */

void demo_hc32f460_core_double_application_entry (void);

/**

 * \brief ????bootloader??????????????????
 */

void demo_hc32f460_core_single_application_entry (void);

/**
 * \brief ?~{(4~}???????~{(2~}????????bootloader????
 */
void demo_hc32f460_core_single_bootloader_uart_entry (void);

/**
 * \brief ?~{(4~}???????~{(2~}????????bootloader????
 */
void demo_hc32f460_core_double_bootloader_uart_entry(void);

/**
 * \brief VC???????????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_vc_int_entry (void);

/**
 * \brief LVD???????????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_lvd_system_reset_entry (void);

/**
 * \brief LVD ???????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_lvd_int_entry (void);

/**
 * \brief OPA?????~{(2~}?????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_opa_one_entry (void);

/**
 * \brief OPA DAC?????~{(2~}?????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_opa_dac_entry (void);

/**
 * \brief AES ???????????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_aes_ency_decy_entry (void);

/**
 * \brief TRNG ???~{(2~}???~{(2~}?~{(2~}???????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_trng_generate_entry (void);

/**
 * \brief LCD???????????~{!'~}?? HW ??????????
 */
void demo_hc32f460_core_hw_lcd_entry (void);
void demo_hc32f460_core_std_tim01_timing_entry(void);
void demo_hc32f460_core_std_tim02_timing_entry(void);
void demo_hc32f460_core_std_timea1_timing_entry (void);
void demo_hc32f460_core_std_timea2_timing_entry (void);
void demo_hc32f460_core_std_timea3_timing_entry (void);
void demo_hc32f460_core_std_timea4_timing_entry (void);
void demo_hc32f460_core_std_timea5_timing_entry (void);
void demo_hc32f460_core_std_timea6_timing_entry (void);
void demo_hc32f460_core_std_tim41_timing_entry (void);
void demo_hc32f460_core_std_tim42_timing_entry (void);
void demo_hc32f460_core_std_tim43_timing_entry (void);
void demo_hc32f460_core_std_tim61_timing_entry (void);
void demo_hc32f460_core_std_tim62_timing_entry (void);
void demo_hc32f460_core_std_tim63_timing_entry (void);
void demo_hc32f460_core_std_timea1_pwm_entry(void);
void demo_hc32f460_core_std_timea2_pwm_entry(void);
void demo_hc32f460_core_std_timea3_pwm_entry(void);
void demo_hc32f460_core_std_timea4_pwm_entry(void);
void demo_hc32f460_core_std_timea5_pwm_entry(void);
void demo_hc32f460_core_std_timea6_pwm_entry(void);
void demo_hc32f460_core_std_tim41_pwm_entry(void);
void demo_hc32f460_core_std_tim42_pwm_entry(void);
void demo_hc32f460_core_std_tim43_pwm_entry(void);
void demo_hc32f460_core_std_adtim61_pwm_entry(void);
void demo_hc32f460_core_std_adtim62_pwm_entry(void);
void demo_hc32f460_core_std_adtim63_pwm_entry(void);
void demo_hc32f460_core_std_timea1_cap_entry(void);
void demo_hc32f460_core_std_timea2_cap_entry(void);
void demo_hc32f460_core_std_timea3_cap_entry(void);
void demo_hc32f460_core_std_timea4_cap_entry(void);
void demo_hc32f460_core_std_timea5_cap_entry(void);
void demo_hc32f460_core_std_timea6_cap_entry(void);
void demo_hc32f460_core_std_adtim61_cap_entry(void);
void demo_hc32f460_core_std_adtim62_cap_entry(void);
void demo_hc32f460_core_std_adtim63_cap_entry(void);
void demo_hc32f460_core_std_i2c_master_sync_entry (void);
void demo_hc32f460_core_std_i2c_master_async_entry (void);
void demo_hc32f460_hw_i2c_slave_poll_entry (void     *p_hw_i2c_addr,
                                            uint32_t clk_id,
                                            int      slave_speed,
                                            int      slave_addr);
void demo_hc32f460_hw_i2c_master_poll_entry (void *p_hw_i2c_addr,
			                                uint32_t clk_id,
                                            int      master_speed,
                                            int      master_addr);
void demo_hc32f460_core_hw_i2c_master_poll_entry (void);
void demo_hc32f460_core_hw_i2c_slave_poll_entry (void);
void demo_hc32f460_core_std_rtc_entry (void);
