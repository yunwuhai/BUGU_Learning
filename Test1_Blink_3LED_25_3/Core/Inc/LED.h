/*
 * LED.h
 *
 *  Created on: Jul 17, 2021
 *      Author: 23383
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#define RED_ON()		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,1);
#define RED_OFF()		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,0);
#define BLUE_ON()		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_5,1);
#define BLUE_OFF()		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_5,0);
#define GREEN_ON()		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_3,1);
#define GREEN_OFF()	    HAL_GPIO_WritePin(GPIOE,GPIO_PIN_3,0);

#endif /* INC_LED_H_ */
