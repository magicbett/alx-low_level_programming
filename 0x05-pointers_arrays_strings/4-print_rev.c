#include "main.h"
/**
* print_rev - Use pointer to change value in memory
* @s: Pointer to string location
*Return: Null/Void
*/
void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
	i++;
	s++;
	}
	s--;
	for (; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
