#include "main.h"
/**
 * per_handler1 - Funct for char %
 * @args: arg
 * @a: Str
 * @b: Int
 * Return: int
 */
int per_handler1(va_list args __attribute__((unused)), char *a, unsigned int b)
{
	buffer_handler1(a, '%', b);
	return (1);
}
