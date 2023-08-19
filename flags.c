#include "main.h"

/**
* flags1 - Function for flags
* @ss: Str
* @idx: Integer
* Return: Integer
*/
int flags1(const char *ss, int idx)
{
	op p[] = {
		{"c", char_handler},
		{"s", str_handler},
		{"d", int_handler},
		{"i", int_handler},
		{"b", binary_handler1},
		{"%", per_handler1},
		{NULL, NULL}
	};
	int x = 0, cm = 0, x_idx;

	x_idx = idx;
	while (p[x].f)
	{
		if (ss[idx] == p[x].f[cm])
		{
			if (p[x].f[cm + 1] != '\0')
			{
				idx++;
				cm++;
			}
			else
				break;
		}
		else
		{
			cm = 0;
			x++;
			idx = x_idx;
		}
	}
	return (cm);
}
