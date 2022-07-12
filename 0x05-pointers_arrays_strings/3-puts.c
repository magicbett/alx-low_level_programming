#include "main.h"
/**
* _puts - Use pointer to change value in memory
* @str: Pointer to string location
*Return: Null/Void
*/
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
