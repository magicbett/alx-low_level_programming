#include "main.h"
/**
* print_line - print number 0-9
* @n: Number of lines to be printed
* Return: void
*/
void print_line(int n)
{
	int i;

	for (i = 0; n > 0 && i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
