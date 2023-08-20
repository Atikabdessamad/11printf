#include "main.h"

/**
* int_handler - Funct int handler
* @arg_l: Arg
* @buffer: Str
* @buf_size: unsigned Int
* Return: Int
*/
int int_handler(va_list arg_l, char *buffer, unsigned int buf_size)
{
	int y, x;
	char divi;
	unsigned int ng, sum, divi_sum = 1, intg;
	int res = va_arg(arg_l, int);

	y = res;
	ng = 0;
	if (y < 0)
	{
		intg = -1 * res;
		buf_size = buffer_handler1(buffer, '-', buf_size);
		ng = 1;
	}
	else
	{
		intg = res;
	}

	sum = intg;
	while (sum > 9)
	{
		divi_sum *= 10;
		sum /= 10;
	}

	for (x = 0; divi_sum > 0; x++)
	{
		divi = ((intg / divi_sum) % 10) + '0';
		buf_size = buffer_handler1(buffer, divi, buf_size);
		divi_sum /= 10;
	}

	return (x + ng);
}
