#include "main.h"

/**
* char_handler - handle char
* @ar: arg
* @buffer: Str ptr
* @buffer_size: unsigned int
* Return: return 1
*/
int char_handler(va_list ar, char *buffer, unsigned int buffer_size)
{
	char x;

	x = va_arg(ar, int);
	buffer_handler1(buffer, x, buffer_size);

	return (1);
}
