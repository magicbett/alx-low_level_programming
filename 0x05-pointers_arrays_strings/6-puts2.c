#include "main.h"
/**
* puts2 - Use pointer to change value in memory
* @str: Pointer to string location
*Return: Null/Void
*/

void puts2(char *str)
{
	int len = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	len--;
	for (z = 0 ; z <= len ; z++)
	{
		if (z % 2 == 0)
		{
			putchar(str[z]);
		}
	}
	putchar('\n');
}
