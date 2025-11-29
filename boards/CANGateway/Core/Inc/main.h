/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32g4xx_hal.h"

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
#define PCB_LED_Pin GPIO_PIN_13
#define PCB_LED_GPIO_Port GPIOC
#define WHEEL_SPEED1_Pin GPIO_PIN_0
#define WHEEL_SPEED1_GPIO_Port GPIOA
#define WHEEL_SPEED1_EXTI_IRQn EXTI0_IRQn
#define Sensor2_Pin GPIO_PIN_1
#define Sensor2_GPIO_Port GPIOA
#define Sensor3_Pin GPIO_PIN_2
#define Sensor3_GPIO_Port GPIOA
#define Sensor4_Pin GPIO_PIN_3
#define Sensor4_GPIO_Port GPIOA
#define WHEEL_SPEED2_Pin GPIO_PIN_4
#define WHEEL_SPEED2_GPIO_Port GPIOA
#define WHEEL_SPEED2_EXTI_IRQn EXTI4_IRQn
#define Sensor6_Pin GPIO_PIN_5
#define Sensor6_GPIO_Port GPIOA
#define Sensor7_Pin GPIO_PIN_6
#define Sensor7_GPIO_Port GPIOA
#define Sensor8_Pin GPIO_PIN_7
#define Sensor8_GPIO_Port GPIOA
#define Sensor9_Pin GPIO_PIN_0
#define Sensor9_GPIO_Port GPIOB
#define Sensor10_Pin GPIO_PIN_1
#define Sensor10_GPIO_Port GPIOB
#define Sensor11_Pin GPIO_PIN_2
#define Sensor11_GPIO_Port GPIOB
#define Sensor12_Pin GPIO_PIN_11
#define Sensor12_GPIO_Port GPIOB
#define NMOS1_Pin GPIO_PIN_12
#define NMOS1_GPIO_Port GPIOB
#define NMOS2_Pin GPIO_PIN_14
#define NMOS2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
