#include "main.h"
/**
 *puts_half - update value.
 *@str: value to be evaluate.
 *Return: not.
 */
void puts_half(char *str)
{
	int len = 0;
	char *ch = str;
	int n;

	while (*ch != '\0')
	{
		ch++;
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for ( ; n < len ; n++)
	{
		putchar(*(str + n));
	}
	putchar('\n');
}
