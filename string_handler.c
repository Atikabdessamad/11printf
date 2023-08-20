#include "main.h"
/**
* str_handler - func for str
* @arg: argument
* @buffer: Str
* @buffer_size: Int positive
* Return: Int
*/
int str_handler(va_list arg, char *buffer, unsigned int buffer_size)
{
	char *v;
	unsigned int x = 0;
	char nul_v[] = "(null)";

	v = va_arg(arg, char *);
	if (v == 0)
	{
		while (nul_v[x])
		{
			buffer_size = buffer_handler1(buffer, nul_v[x], buffer_size);
			x++;
		}
		return (6);
	}
	while (*(v + x))
	{
		buffer_size = buffer_handler1(buffer, v[x], buffer_size);
		x++;
	}
	return (x);
}
