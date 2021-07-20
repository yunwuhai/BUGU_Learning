/*
 * MyPrint_HAL.c
 *
 *  Created on: Jul 20, 2021
 *      Author: yan
 */
#include "MyPrint_HAL.h"
#include "stdarg.h"

#ifdef __GNUC__

int __io_putchar(int ch)
{
	HAL_UART_Transmit(&PRINT_UART_HANDLE, (uint8_t*)&ch, 1, HAL_MAX_DELAY);
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

