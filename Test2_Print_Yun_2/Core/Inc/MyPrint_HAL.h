/*
 * MyPrint_HAL.h
 *
 *  Created on: Jul 20, 2021
 *      Author: yan
 */

#ifndef INC_MYPRINT_HAL_H_
#define INC_MYPRINT_HAL_H_

#include "main.h"
#include "stdio.h"

#define	WORD_OK		"成功"
#define	WORD_FAIL	"失败"
#define	WORD_ERROR	"错误"
#define WORD_TEST   "测试"
#define	WORD_READY	"准备成功"
#define	WORD_START	"开始"
#define WORD_STOP   "停止"
#define WORD_PAUSE  "暂停"
#define WORD_DELETE "删除"
#define WORD_CREATE "新建"
#define	WORD_PROMPT	"提示"

#define    PRINT_UART_HANDLE   huart1
extern UART_HandleTypeDef PRINT_UART_HANDLE;

void DEBUG_PRINT(char* word, char* msg);

#endif /* INC_MYPRINT_HAL_H_ */
