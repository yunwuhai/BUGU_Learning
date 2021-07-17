/*
 * led.h
 *
 *  Created on: Jul 17, 2021
 *      Author: Lenovo
 */

#ifndef INC_LED_H_
#define INC_LED_H_
#define RED_ON()      HAL_GPIO_WritePin(GPIOC, LED_RED_Pin, GPIO_PIN_SET)
#define RED_OFF()     HAL_GPIO_WritePin(GPIOC, LED_RED_Pin, GPIO_PIN_RESET)
#define BLUE_ON()     HAL_GPIO_WritePin(GPIOE, LED_BLUE_Pin, GPIO_PIN_SET)
#define BLUE_OFF()    HAL_GPIO_WritePin(GPIOE, LED_BLUE_Pin, GPIO_PIN_RESET)
#define GREEN_ON()    HAL_GPIO_WritePin(GPIOE, LED_GREEN_Pin, GPIO_PIN_SET)
#define GREEN_OFF()   HAL_GPIO_WritePin(GPIOE, LED_GREEN_Pin, GPIO_PIN_RESET)
#define SW_RED()      HAL_GPIO_ReadPin(GPIOC,SW_RED_Pin)
#define SW_BLUE()     HAL_GPIO_ReadPin(GPIOC,SW_BLUE_Pin)
#define SW_GREEN()    HAL_GPIO_ReadPin(GPIOC,SW_GREEN_Pin)


#endif /* INC_LED_H_ */
