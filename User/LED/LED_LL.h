/*************************************************************************************
 * @Description  : LL¿âµãµÆ
 * @Version      : 
 * @Author       : YunWuHai
 * @Date         : 2021-07-17 13:26:53
 * @LastEditors  : YunWuHai
 * @LastEditTime : 2021-07-17 14:32:10
 * @FilePath     : \User\LED\LED_LL.h
 * @Copyright (C) 2021 YunWuHai. All rights reserved.
 *************************************************************************************/
#ifndef _LED_LL_H_
#define _LED_LL_H_

#include "main.h"

#define RED_ON()        LL_GPIO_ResetOutputPin(RED_LED_GPIO_Port, RED_LED_Pin)
#define RED_OFF()       LL_GPIO_SetOutputPin(RED_LED_GPIO_Port, RED_LED_Pin)
#define RED_TOGGLE()    LL_GPIO_TogglePin(RED_LED_GPIO_Port, RED_LED_Pin)
#define GREEN_ON()      LL_GPIO_ResetOutputPin(GREEN_LED_GPIO_Port, GREEN_LED_Pin)
#define GREEN_OFF()     LL_GPIO_SetOutputPin(GREEN_LED_GPIO_Port, GREEN_LED_Pin)
#define GREEN_TOGGLE()  LL_GPIO_TogglePin(GREEN_LED_GPIO_Port, GREEN_LED_Pin)
#define BLUE_ON()       LL_GPIO_ResetOutputPin(BLUE_LED_GPIO_Port, BLUE_LED_Pin)
#define BLUE_OFF()      LL_GPIO_SetOutputPin(BLUE_LED_GPIO_Port, BLUE_LED_Pin)
#define BLUE_TOGGLE()   LL_GPIO_TogglePin(BLUE_LED_GPIO_Port, BLUE_LED_Pin)

#endif