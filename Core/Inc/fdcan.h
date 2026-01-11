/**
  ******************************************************************************
  * @file    fdcan.h
  * @brief   This file contains all the function prototypes for
  *          the fdcan.c file
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
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __FDCAN_H__
#define __FDCAN_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern FDCAN_HandleTypeDef hfdcan1;
extern FDCAN_HandleTypeDef hfdcan2;

/* USER CODE BEGIN Private defines */
#define CAN_QUEUE_SIZE 16

typedef struct
{
  FDCAN_RxHeaderTypeDef rxHeader;
  uint8_t data[8];
} CanMsg_t;

extern volatile uint8_t can_q_head;
extern volatile uint8_t can_q_tail;
CanMsg_t can_queue[CAN_QUEUE_SIZE];

#define CAN_Q_NEXT(i) (((i) + 1) % CAN_QUEUE_SIZE)
#define CAN_Q_FULL()  (CAN_Q_NEXT(can_q_head) == can_q_tail)
#define CAN_Q_EMPTY() (can_q_head == can_q_tail)
/* USER CODE END Private defines */

void MX_FDCAN1_Init(void);
void MX_FDCAN2_Init(void);

/* USER CODE BEGIN Prototypes */
void canForwardMessages(void);
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __FDCAN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
