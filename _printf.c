
#include "main.h"
/**
* _printf - Printf function
* @format: Ptr char
* Return: return y
*/
int _printf(const char *format, ...)
{
	unsigned int x = 0, y = 0, z = 0;
	va_list arg;
	int (*handler)(va_list, char *, unsigned int);
	char *buffer;

	va_start(arg, format);
	 buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[x] == '%' && !format[x + 1]))
		return (-1);
	if (!format[x])
		return (0);
	for (x = 0; format && format[x]; x++)
	{
		if (format[x] == '%')
		{
			if (format[x + 1] == '\0')
			{
				_putchar(buffer, z), free(buffer), va_end(arg);
				return (-1);
			}
			else
			{	handler = get_handler(format, x + 1);
				if (handler == NULL)
				{
					if (format[x + 1] == ' ' && !format[x + 2])
						return (-1);
					buffer_handler(buffer, format[x], z), y++, x--;
				}
				else
					y += handler(arg, buffer, z), x += flags(format, x + 1);
			} x++;
		}
		else
			buffer_handler(buffer, format[x], z), y++;
		for (z = y; z > 1024; z -= 1024)
			;
	}
	_putchar(buffer, z);
	 free(buffer), va_end(arg);
	return (y);
}
