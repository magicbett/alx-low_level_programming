#include "main.h"
#include <math.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: 2D array
 * @size: size x size of the square matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int forwardD = 0;
	int backwardD = 0;
	int matrix_size = size * size;

	for (i = 0; i < matrix_size; i += size + 1)
	{
		forwardD += a[i];
	}

	for (i = size - 1; i < matrix_size - 1; i += size - 1)
	{
		backwardD += a[i];
	}

	printf("%d, %d\n", forwardD, backwardD);
}
