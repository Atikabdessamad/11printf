#include "main.h"

/**
*_putchar - Function printing char
*@buffersize: Size of buffer
*@buffer: Str
*Return: int
*/

int _putchar(char *buffer, int buffersize)
{
	return (write(1, buffer, buffersize));
}
