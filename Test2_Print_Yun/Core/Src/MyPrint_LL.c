/*************************************************************************************
 * @Description  : 
 * @Version      : 
 * @Author       : YunWuHai
 * @Date         : 2021-07-17 10:50:19
 * @LastEditors  : YunWuHai
 * @LastEditTime : 2021-07-17 10:58:50
 * @FilePath     : \MyPrint\MyPrint_LL.c
 * @Copyright (C) 2021 YunWuHai. All rights reserved.
 *************************************************************************************/
#include "MyPrint_LL.h"
#include "stdarg.h"

#ifdef __GNUC__

int __io_putchar(int ch)
{
	while(!LL_USART_IsActiveFlag_TC(PRINT_UART_HANDLE));	// 等待发送标志位置位
	LL_USART_TransmitData8(PRINT_UART_HANDLE, (uint8_t)ch);	// 发送八位数据
	return ch;												// 单字节发送fputc和__io_putchar必须返回的内容
}

int _write(int file, char *ptr, int len)
{
	for(int i = 0; i < len; i++)
	{
		__io_putchar(*(ptr + i));
	}
	return len;
}

#endif

void DEBUG_PRINT(char* word, char* msg)					// Debug显示，用于自定义显示数据
{
	printf("%s:%s\n", word, msg);
}
