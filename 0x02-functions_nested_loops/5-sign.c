include "main.h"
/**
*print_sign - Begin Here
*@n: integer value
*return 1 if lower case and 0 otherwise
*Return: Value 0 (true)
*/
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
