#include "main.h"
/**
*print_last_digit - Begin here
*@n: Integer number
*Return: Value 0
*/
int print_last_digit(int n)

{
	int x = n % 10;

	if (x < 0)
	{
		_putchar(-x + '0');
		return (-x);
	}
	else
	{
		_putchar(x + '0');
		return (x);
	}
}
