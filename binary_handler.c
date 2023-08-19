#include "main.h"

/**
* binary_handler1 - Func binary handler
* @arg_l: Arg
* @buffer: Str
* @buf_size: unsigned Int
* Return: Int
*/
int binary_handler1(va_list arg_l, char *buffer, unsigned int buf_size)
{
	unsigned int sum = va_arg(arg_l, unsigned int);
	unsigned int tem = sum;
	int x, y;
	char binary[64];

	for (x = 0; tem > 0; x++)
	{
		binary[x] = (tem % 2) + '0';
		tem /= 2;
	}

	/* Handle the case of 0 */
	if (sum == 0)
		binary[x++] = '0';

	for (y = x - 1; y >= 0; y--)
	{
		if (buf_size == 1024)
		{
			_putchar(buffer, buf_size);
			buf_size = 0;
		}
		buffer[buf_size++] = binary[y];
	}

	return (x);
}
