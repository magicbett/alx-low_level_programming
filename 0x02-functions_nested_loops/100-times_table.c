#include "main.h"
/**
* print_times_table - Prints the n times table
*
* @n: number times table (0 < n <= 15)
*
* Return: no return
*/
void print_times_table(int n)
{
	int a, b, mt;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				mt = a * b;
				_putchar(',');
				_putchar(' ');
				if (mt <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mt + '0');
				}
				else if (mt <= 99)
				{
					_putchar(' ');
					_putchar((mt / 10) + '0');
					_putchar((mt % 10) + '0');
				}
				else
				{
					_putchar(((mt / 100) % 10) + '0');
					_putchar(((mt / 10) % 10) + '0');
					_putchar((mt % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
