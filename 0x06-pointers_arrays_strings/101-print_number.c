#include "main.h"
/**
 * print_number - Converts Integer to string
 * @n: Input integer
 * Return: void
 */
void print_number(int n)
{
	int i;
	int len;
	int j;
	int mux;
	int out;

	len = 0;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	i = n;
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (i / 10 != 0)
		{
			len++;
			i /= 10;
		}
		mux = 1;
		for (j = 1; j <= len; j++)
			mux *= 10;
		for (j = 0; j <= len; j++)
		{
			out = n / mux;
			_putchar(out + '0');
			n -= (mux * out);
			mux /= 10;
		}
	}
}
