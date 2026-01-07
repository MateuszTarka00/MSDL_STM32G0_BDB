/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g0xx_hal.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define IN9_Pin GPIO_PIN_13
#define IN9_GPIO_Port GPIOC
#define IN10_Pin GPIO_PIN_14
#define IN10_GPIO_Port GPIOC
#define IN8_Pin GPIO_PIN_3
#define IN8_GPIO_Port GPIOA
#define IN1_Pin GPIO_PIN_4
#define IN1_GPIO_Port GPIOA
#define IN3_Pin GPIO_PIN_5
#define IN3_GPIO_Port GPIOA
#define IN2_Pin GPIO_PIN_6
#define IN2_GPIO_Port GPIOA
#define IN4_Pin GPIO_PIN_7
#define IN4_GPIO_Port GPIOA
#define OUT12_Pin GPIO_PIN_12
#define OUT12_GPIO_Port GPIOB
#define IN15_Pin GPIO_PIN_13
#define IN15_GPIO_Port GPIOB
#define OUT16_Pin GPIO_PIN_15
#define OUT16_GPIO_Port GPIOB
#define OUT15_Pin GPIO_PIN_8
#define OUT15_GPIO_Port GPIOA
#define IN6_Pin GPIO_PIN_9
#define IN6_GPIO_Port GPIOA
#define IN5_Pin GPIO_PIN_10
#define IN5_GPIO_Port GPIOA
#define CAN_FAULT_Pin GPIO_PIN_15
#define CAN_FAULT_GPIO_Port GPIOA
#define CAN_OK_Pin GPIO_PIN_3
#define CAN_OK_GPIO_Port GPIOB
#define IN7_Pin GPIO_PIN_4
#define IN7_GPIO_Port GPIOB
#define OUT13_Pin GPIO_PIN_5
#define OUT13_GPIO_Port GPIOB
#define OUT14_Pin GPIO_PIN_8
#define OUT14_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
extern osThreadId_t canOpenManagerTHandle;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
