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
 * \brief ZLG116 SPI �û������ļ�
 * \sa am_hwconf_zlg116_spi_dma.c
 *
 * \internal
 * \par Modification history
 * - 1.00 15-10-23  ari, first implementation.
 * \endinternal
 */

#include "ametal.h"
#include "am_zlg116.h"
#include "am_zlg_spi_dma.h"
#include "am_gpio.h"
#include "hw/amhw_zlg_spi.h"
#include "am_clk.h"
#include "zlg116_dma_chan.h"

/**
 * \addtogroup am_if_src_hwconf_zlg116_spi_dma
 * \copydoc am_hwconf_zlg116_spi_dma.c
 * @{
 */

/** \brief SPI1 ƽ̨��ʼ�� */
static void __zlg116_plfm_spi1_dma_init (void)
{
    am_gpio_pin_cfg(PIOB_3, PIOB_3_SPI1_SCK  | PIOB_3_AF_PP);
    am_gpio_pin_cfg(PIOB_4, PIOB_4_SPI1_MISO | PIOB_4_INPUT_FLOAT);
    am_gpio_pin_cfg(PIOB_5, PIOB_5_SPI1_MOSI | PIOB_5_AF_PP);

    am_clk_enable(CLK_SPI1);
}

/** \brief ���SPI1 ƽ̨��ʼ�� */
static void __zlg116_plfm_spi1_dma_deinit (void)
{

    /* �ͷ�����Ϊ����ģʽ */
    am_gpio_pin_cfg(PIOB_3, AM_GPIO_INPUT);
    am_gpio_pin_cfg(PIOB_4, AM_GPIO_INPUT);
    am_gpio_pin_cfg(PIOB_5, AM_GPIO_INPUT);

    am_clk_disable(CLK_SPI1);
}

/**
 * \brief SPI1 �豸��Ϣ
 */
const  struct am_zlg_spi_dma_devinfo  __g_spi1_dma_devinfo = {
    ZLG116_SPI1_BASE,               /**< \brief SPI1�Ĵ���ָ�� */
    CLK_SPI1,                       /**< \brief ʱ��ID�� */
    INUM_SPI1,                      /**< \brief SPI1�жϺ� */
    0,                              /**< \brief SPI1���ñ�ʶ */
    DMA_CHAN_SPI1_TX,
    DMA_CHAN_SPI1_RX,
    __zlg116_plfm_spi1_dma_init,    /**< \brief SPI1ƽ̨��ʼ������ */
    __zlg116_plfm_spi1_dma_deinit   /**< \brief SPI1ƽ̨���ʼ������ */
};

/** \brief SPI1 �豸ʵ�� */
static am_zlg_spi_dma_dev_t __g_spi1_dma_dev;

/** \brief SPI1 ʵ����ʼ�������SPI��׼������ */
am_spi_handle_t am_zlg116_spi1_dma_inst_init (void)
{
    return am_zlg_spi_dma_init(&__g_spi1_dma_dev, &__g_spi1_dma_devinfo);
}

/** \brief SPI1 ʵ�����ʼ�� */
void am_zlg116_spi1_dma_inst_deinit (am_spi_handle_t handle)
{
    am_zlg_spi_dma_deinit(handle);
}

/**
 * @}
 */

/* end of file */
