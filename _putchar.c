#include "main.h"

/**
*_putchar - Function printing char
*@buffersize: Size
*@buffer: str
*Return: int
*/

int _putchar(char *buffer, int buffersize)
{
	return (write(1, buffer, buffersize));
}
