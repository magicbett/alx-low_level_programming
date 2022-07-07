#include "main.h"
/**
* print_most_numbers - print number 0-9
* Return: void
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 4 || i == 2)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
