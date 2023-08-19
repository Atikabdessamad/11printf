#include "main.h"
/**
* buffer_handler1 - concatinating func
* @buffer: Str
* @c: char
* @buffer_size: unsigned Intgere
* Return: buffer size
*/
unsigned int buffer_handler1(char *buffer, char c, unsigned int buffer_size)
{
	if (buffer_size == 1024)
	{
		_putchar(buffer, buffer_size);
		buffer_size = 0;
	}
	buffer[buffer_size] = c;
	buffer_size++;
	return (buffer_size);
}
