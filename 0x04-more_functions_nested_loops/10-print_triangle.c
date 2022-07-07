#include "main.h"
/**
* print_triangle - triangle with #
* @size: Number of diagonal lines to be printed
* Return: void
*/
void print_triangle(int size)
{
	int row, column, k;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (k = row + column; k >= 1; k--)
			_putchar('#');
		_putchar('\n');
	}
}
