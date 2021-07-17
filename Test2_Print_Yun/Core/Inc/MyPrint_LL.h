/*************************************************************************************
 * @Description  : 
 * @Version      : 
 * @Author       : YunWuHai
 * @Date         : 2021-07-17 10:50:33
 * @LastEditors  : YunWuHai
 * @LastEditTime : 2021-07-17 10:55:18
 * @FilePath     : \MyPrint\MyPrint_LL.h
 * @Copyright (C) 2021 YunWuHai. All rights reserved.
 *************************************************************************************/
#ifndef _MYPRINT_LL_H_
#define _MYPRINT_LL_H_

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

#define    PRINT_UART_HANDLE   USART1

void DEBUG_PRINT(char* word, char* msg);

#endif
