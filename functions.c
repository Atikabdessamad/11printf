#include "main.h"

/**
* binary_handler - Function binary handler
* @arg_list: Argument list of type va_list
* @buffer: String
* @buf_size: unsigned Integer
* Return: Integer
*/
int binary_handler(va_list arg_list, char *buffer, unsigned int buf_size)
{
	unsigned int sum = va_arg(arg_list, unsigned int);
	unsigned int tem = sum;
	int x, y;
	char bin[64];

	for (x = 0; tem > 0; x++)
	{
		bin[x] = (tem % 2) + '0';
		tem /= 2;
	}

	/* Handle the case of 0 */
	if (sum == 0)
		bin[x++] = '0';

	for (y = x - 1; y >= 0; y--)
	{
		if (buf_size == 1024)
		{
			_putchar(buffer, buf_size);
			buf_size = 0;
		}
		buffer[buf_size++] = bin[y];
	}

	return (x);
}
