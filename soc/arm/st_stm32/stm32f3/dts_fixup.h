/* SPDX-License-Identifier: Apache-2.0 */

/* SoC level DTS fixup file */

#define DT_FLASH_DEV_NAME		DT_LABEL(DT_INST(0, st_stm32f3_flash_controller))

#define DT_RTC_0_NAME			DT_LABEL(DT_INST(0, st_stm32_rtc))

#define DT_ADC_1_NAME			DT_ST_STM32_ADC_50000000_LABEL

#define DT_CAN_1_BASE_ADDRESS		DT_ST_STM32_CAN_40006400_BASE_ADDRESS
#define DT_CAN_1_BUS_SPEED		DT_ST_STM32_CAN_40006400_BUS_SPEED
#define DT_CAN_1_NAME			DT_ST_STM32_CAN_40006400_LABEL
#define DT_CAN_1_IRQ_TX			DT_ST_STM32_CAN_40006400_IRQ_TX
#define DT_CAN_1_IRQ_RX0		DT_ST_STM32_CAN_40006400_IRQ_RX0
#define DT_CAN_1_IRQ_RX1		DT_ST_STM32_CAN_40006400_IRQ_RX1
#define DT_CAN_1_IRQ_SCE		DT_ST_STM32_CAN_40006400_IRQ_SCE
#define DT_CAN_1_IRQ_PRIORITY		DT_ST_STM32_CAN_40006400_IRQ_0_PRIORITY
#define DT_CAN_1_SJW			DT_ST_STM32_CAN_40006400_SJW
#define DT_CAN_1_PROP_SEG		DT_ST_STM32_CAN_40006400_PROP_SEG
#define DT_CAN_1_PHASE_SEG1		DT_ST_STM32_CAN_40006400_PHASE_SEG1
#define DT_CAN_1_PHASE_SEG2		DT_ST_STM32_CAN_40006400_PHASE_SEG2
#define DT_CAN_1_CLOCK_BUS		DT_ST_STM32_CAN_40006400_CLOCK_BUS
#define DT_CAN_1_CLOCK_BITS		DT_ST_STM32_CAN_40006400_CLOCK_BITS

/* End of SoC Level DTS fixup file */