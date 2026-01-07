/*
 * DigitalInputs.c
 *
 *  Created on: 17 paź 2025
 *      Author: mateo
 */


#include "DigitalInputs.h"


DigitalInput digitalInput[16] =
{
		{IN1_GPIO_Port, IN1_Pin},
		{IN2_GPIO_Port, IN2_Pin},
		{IN3_GPIO_Port, IN3_Pin},
		{IN4_GPIO_Port, IN4_Pin},
		{IN5_GPIO_Port, IN5_Pin},
		{IN6_GPIO_Port, IN6_Pin},
		{IN7_GPIO_Port, IN7_Pin},
		{IN8_GPIO_Port, IN8_Pin},
		{IN9_GPIO_Port, IN9_Pin},
		{IN10_GPIO_Port, IN10_Pin},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
};
