#include "main.h"
/**
* char_len1 - calculate char lenght
* @cha: char or str
* Return: lenght of st
*/
int char_len1(char *cha)
{
	int x = 0;

	while (*(cha + x))
		x++;
	return (x);
}
