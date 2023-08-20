#include "main.h"

/**
* get_handler1 - Get the apprropriate handler for onversion specifier
* @spp: Format specifier char
* @idx: Int
* Return: Func ptr to the appropriate handler
*/
int (*get_handler1(const char *spp, int idx))(va_list, char *, unsigned int)
{
	optn co[] = {
		{"c", char_handler},
		{"s", str_handler},
		{"d", int_handler},
		{"i", int_handler},
		{"b", binary_handler1},
		{"%", per_handler1},
		{NULL, NULL}
	};
	int x = 0, y = 0, x_idx;

	x_idx = idx;
	while (co[x].flg && spp)
	{
		if (spp[idx] == co[x].flg[y])
		{
			if (co[x].flg[y + 1] != 0)
			{
				idx++;
				y++;
			}
			else
				break;
		}
		else
		{
			y = 0;
			x++;
			idx = x_idx;
		}
	}
	return (co[x].ptr);
}
