#include "main.h"
/**
* print_number - Print large number character at a time
* @n: Number to pring
* Return: Void
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
