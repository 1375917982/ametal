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
 * \brief HC32F460 �жϺŶ���
 *
 * \internal
 * \par Modification history
 * - 1.00 20-01-13  cds, first implementation
 * \endinternal
 */

#ifndef __ZLG217_INUM_H
#define __ZLG217_INUM_H

#ifdef __cplusplus
extern "C" {
#endif

#include "ametal.h"

/**
 * \addtogroup zlg217_if_inum
 * \copydoc zlg217_inum.h
 * @{
 */

/**
 * \name ZLG217 CPU �жϺ�
 * @{
 */

#define INUM_PORT_EIRQ0      128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ1      128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ2      128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ3      128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ4      128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ5      128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ6      128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ7      128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ8      128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ9      128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ10     128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ11     128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ12     128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ13     128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ14     128    /**< \brief �ⲿ�ж� */
#define INUM_PORT_EIRQ15     128    /**< \brief �ⲿ�ж� */
#define INUM_DMA1            129    /**< \brief DMA1�ж� */
#define INUM_DMA2            129    /**< \brief DMA2�ж� */
#define INUM_EFM             129    /**< \brief EFM�ж� */
#define INUM_USBFS_SOF       129    /**< \brief INUM_SOF�ж� */
#define INUM_QSPI            129    /**< \brief INUM_QSPI�ж� */
#define INUM_DCU             129    /**< \brief INUM_DCU�ж� */
#define INUM_TIMER0_1        130    /**< \brief TIMER0_1�ж� */
#define INUM_TIMER0_2        130    /**< \brief TIMER0_2�ж� */
#define INUM_RTC             130    /**< \brief RTC�ж� */
#define INUM_XTAL32          130    /**< \brief XTAL32�ж� */
#define INUM_XTAL            130    /**< \brief XTAL�ж� */
#define INUM_WKTM            130    /**< \brief WKTM�ж� */
#define INUM_SWDT            130    /**< \brief SWDT�ж� */
#define INUM_TIMER6_1        131    /**< \brief TIMER6_1�ж� */
#define INUM_TIMER6_2        131    /**< \brief TIMER6_2�ж� */
#define INUM_TIMER6_3        132    /**< \brief TIMER6_3�ж� */
#define INUM_TIMERA_1        136    /**< \brief TIMERA_1�ж� */
#define INUM_TIMERA_2        136    /**< \brief TIMERA_2�ж� */
#define INUM_TIMERA_3        136    /**< \brief TIMERA_3�ж� */
#define INUM_TIMERA_4        136    /**< \brief TIMERA_4�ж� */
#define INUM_TIMERA_5        136    /**< \brief TIMERA_5�ж� */
#define INUM_TIMERA_6        136    /**< \brief TIMERA_6�ж� */
#define INUM_USBFS_GLB       136    /**< \brief USBFS_GLB�ж� */
#define INUM_USART1          136    /**< \brief USART1�ж� */
#define INUM_USART2          136    /**< \brief USART2�ж� */
#define INUM_USART3          137    /**< \brief USART3�ж� */
#define INUM_USART4          137    /**< \brief USART4�ж� */
#define INUM_SPI1            137    /**< \brief SPI1�ж� */
#define INUM_SPI2            137    /**< \brief SPI2�ж� */
#define INUM_SPI3            137    /**< \brief SPI3�ж� */
#define INUM_SPI4            137    /**< \brief SPI4�ж� */
#define INUM_AOS_STRG        137    /**< \brief AOS_STRG�ж� */
#define INUM_TIMER4_1        138    /**< \brief TIMER4_1�ж� */
#define INUM_TIMER4_2        138    /**< \brief TIMER4_2�ж� */
#define INUM_TIMER4_3        139    /**< \brief TIMER4_3�ж� */
#define INUM_TIMER4_1EVT     139    /**< \brief TIMER4_1EVT�ж� */
#define INUM_TIMER4_2EVT     139    /**< \brief TIMER4_2EVT�ж� */
#define INUM_TIMER4_3EVT     140    /**< \brief TIMER4_2EVT�ж� */
#define INUM_TIMER4_EMB      140    /**< \brief TIMER4_EMB�ж� */
#define INUM_EVENT_PORT1     0      /**< \brief EVENT_PORT1�ж� */
#define INUM_EVENT_PORT2     1      /**< \brief EVENT_PORT2�ж� */
#define INUM_EVENT_PORT3     2      /**< \brief EVENT_PORT3�ж� */
#define INUM_EVENT_PORT4     3      /**< \brief EVENT_PORT4�ж� */
#define INUM_I2S1            140    /**< \brief I2S1�ж� */
#define INUM_I2S2            140    /**< \brief I2S2�ж� */
#define INUM_I2S3            140    /**< \brief I2S3�ж� */
#define INUM_I2S4            140    /**< \brief I2S4�ж� */
#define INUM_ACMP1           4      /**< \brief ACMP1�ж� */
#define INUM_ACMP2           5      /**< \brief ACMP2�ж� */
#define INUM_ACMP3           6      /**< \brief ACMP3�ж� */
#define INUM_USART1_WUPI     7      /**< \brief USART1_WUPI�ж� */
#define INUM_PVD             141    /**< \brief PVD�ж� */
#define INUM_OTS             8      /**< \brief OTS�ж� */
#define INUM_FCM             141    /**< \brief FCM�ж� */
#define INUM_WDT             141    /**< \brief WDT�ж� */
#define INUM_I2C1            141    /**< \brief I2C1�ж� */
#define INUM_I2C2            141    /**< \brief I2C2�ж� */
#define INUM_I2C3            141    /**< \brief I2C3�ж� */
#define INUM_ADC1            142    /**< \brief ADC1�ж� */
#define INUM_ADC2            142    /**< \brief ADC2�ж� */
#define INUM_TRNG            142    /**< \brief TRNG�ж� */
#define INUM_SDIOC1          143    /**< \brief SDIOC1�ж� */
#define INUM_SDIOC2          143    /**< \brief SDIOC2�ж� */
#define INUM_CAN             143    /**< \brief CAN�ж� */


/** @} */

/**
 * \brief ���ж���Ϊ��(INUM_USB - INUM_WWDT + 1),
 *
 */
#define INUM_INTERNAL_COUNT     (144)

/**
 * \brief ����жϺ�Ϊ�� INUM_USB
 */
#define INUM_INTERNAL_MAX        INUM_CAN

/** \brief ��С�жϺ�: INUM_WWDT */
#define INUM_INTERNAL_MIN        0

/**
 * \cond
 * �жϺŶ��壬Ϊ core_cm4.h�ļ�����
 */
typedef enum {

    /* ----------------------  Cortex-M4���쳣��  ------------------- */

    /** \brief 2  ���������ж�, ���ܱ�ֹͣ����ռ */
    NonMaskableInt_IRQn      = -14,

    /** \brief 3  Ӳ�������ж� */
    HardFault_IRQn           = -13,

    /** \brief 4  �ڴ�����ж� */
    MemManage                = -12,

    /** \brief 5  ���ߴ����ж� */
    BusFault                 = -11,

    /** \brief 6  �û������ж� */
    UsageFault               = -10,

    /** \brief 11  ϵͳ�������ͨ��SVCָ�� */
    SVCall_IRQn              =  -5,

    /** \brief 14  ϵͳ�Ĺ������� */
    PendSV_IRQn              =  -2,

    /** \brief 15  ϵͳ�δ�ʱ�� */
    SysTick_IRQn             =  -1,

    /******  ZLG217 Specific Interrupt Numbers *******************************************************/
//    WWDG_IRQn                 = 0,         /**< \brief ���ڶ�ʱ���ж� */
//    PVD_IRQn                  =1,         /**< \brief ��Դ��ѹ����ж� */
//    TAMPER_IRQn               =2,         /**< \brief �������ж� */
//    RTC_IRQn                  =3,         /**< \brief ʵʱʱ�ӣ�RTC��ȫ���ж� */
//    FLASH_IRQn                =4,         /**< \brief ����ȫ���ж� */
//    RCC_IRQn                  =5,         /**< \brief ��λ��ʱ�ӿ��ƣ�RCC���ж� */
//    EXTI0_IRQn                =6,         /**< \brief EXTI��0�ж� */
//    EXTI1_IRQn                =7,         /**< \brief EXTI��1�ж� */
//    EXTI2_IRQn                =8,         /**< \brief EXTI��2�ж� */
//    EXTI3_IRQn                =9,         /**< \brief EXTI��3�ж� */
//    EXTI4_IRQn                =10,        /**< \brief EXTI��4�ж� */
//    DMA1_1_IRQn               =11,        /**< \brief DMA1ͨ��1ȫ���ж� */
//    DMA1_2_IRQn               =12,        /**< \brief DMA1ͨ��2ȫ���ж� */
//    DMA1_3_IRQn               =13,        /**< \brief DMA1ͨ��3ȫ���ж� */
//    DMA1_4_IRQn               =14,        /**< \brief DMA1ͨ��4ȫ���ж� */
//    DMA1_5_IRQn               =15,        /**< \brief DMA1ͨ��5ȫ���ж� */
//    DMA1_6_IRQn               =16,        /**< \brief DMA1ͨ��6ȫ���ж� */
//    DMA1_7_IRQn               =17,        /**< \brief DMA1ͨ��7ȫ���ж� */
//    ADC1_2_IRQn               =18,        /**< \brief ADC1��ADC2��ȫ���ж� */
//    USB_IRQn                  =19,        /**< \brief USB�ж� */
//    Reserved0                 =20,        /**< \brief RESERVED */
//    CAN_RX1_IRQn              =21,        /**< \brief CAN����1�ж� */
//    Reserved1                 =22,        /**< \brief RESERVED */
//    EXTI9_5_IRQn              =23,        /**< \brief EXTI��[9��5]�ж� */
//    TIM1_BRK_IRQn             =24,        /**< \brief TIM1�Ͽ��ж� */
//    TIM1_UP_IRQn              =25,        /**< \brief TIM1�����ж� */
//    TIM1_TRG_COM_IRQn         =26,        /**< \brief TIM1������ͨ���ж� */
//    TIM1_CC_IRQn              =27,        /**< \brief TIM1����Ƚ��ж� */
//    TIM2_IRQn                 =28,        /**< \brief TIM2ȫ���ж� */
//    TIM3_IRQn                 =29,        /**< \brief TIM3ȫ���ж� */
//    TIM4_IRQn                 =30,        /**< \brief TIM14ȫ���ж� */
//    I2C1_EV_IRQn              =31,        /**< \brief I2C1�¼��ж� */
//    Reserved2                 =32,        /**< \brief RESERVED */
//    I2C2_EV_IRQn              =33,        /**< \brief I2C1�¼��ж� */
//    Reserved3                 =34,        /**< \brief RESERVED */
//    SPI1_IRQn                 =35,        /**< \brief SPI1ȫ���ж� */
//    SPI2_IRQn                 =36,        /**< \brief SPI2ȫ���ж� */
//    UART1_IRQn                =37,        /**< \brief UART1ȫ���ж� */
//    UART2_IRQn                =38,        /**< \brief UART2ȫ���ж� */
//    UART3_IRQn                =39,        /**< \brief UART3ȫ���ж� */
//    EXTI15_10_IRQn            =40,        /**< \brief EXTI��[15��10]�ж� */
//    RTCAlarm_IRQn             =41,        /**< \brief ����EXTI17��RTC�����ж� */
//    USB_WK_IRQn               =42,        /**< \brief ����EXTI18�Ĵ�USB���������ж� */
//    Reserved4                 =43,        /**< \brief RESERVED */
//    Reserved5                 =44,        /**< \brief RESERVED */
//    AES_IRQn                  =45,        /**< \brief AESȫ���ж� */
} IRQn_Type;

/**
 * \endcond
 */

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif /* __ZLG217_INUM_H */

/* end of file */
