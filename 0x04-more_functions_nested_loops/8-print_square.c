#include "main.h"
/**
* print_square - print square
* @size: Number of diagonal lines to be printed
* Return: void
*/
void print_square(int size)
{
	int i;

	int j;

	for (i = 0; size > 0 && i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
