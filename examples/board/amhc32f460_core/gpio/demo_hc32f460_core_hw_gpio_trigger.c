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
 * \brief GPIO �����ж����̣�ͨ�� HW ��ӿ�ʵ��
 *
 * - ʵ������
 *    ÿ�ΰ���ʱ���ڴ�ӡ "the gpio interrupt happen!"��
 *
 * \note
 *    1. ����۲촮�ڴ�ӡ�ĵ�����Ϣ����Ҫ�� PIOA_10 �������� PC ���ڵ� TXD��
 *       PIOA_9 �������� PC ���ڵ� RXD��
 *
 * \par Դ����
 * \snippet demo_zlg118_hw_gpio_trigger.c src_zlg118_hw_gpio_trigger
 *
 * \internal
 * \par Modification History
 * - 1.00 20-01-16  cds, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_zlg118_hw_gpio_trigger
 * \copydoc demo_zlg118_hw_gpio_trigger.c
 */

/** [src_zlg118_hw_gpio_trigger] */
#include "ametal.h"
#include "am_gpio.h"
#include "am_vdebug.h"
#include "am_hc32f460.h"
#include "hw/amhw_hc32f460_gpio.h"
#include "demo_hc32f460_core_entries.h"

/**
 * \brief �������
 */
void demo_hc32f460_core_hw_gpio_trigger_entry (void)
{

    AM_DBG_INFO("demo hc32f460_core hw gpio trigger!\r\n");

    demo_hc32f460_hw_gpio_trigger_entry((void*)HC32F460_GPIO, PIOC_13);
}
/** [src_zlg118_hw_gpio_trigger] */

/* end of file */
