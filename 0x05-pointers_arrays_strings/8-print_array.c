#include "main.h"
/**
* print_array - Use pointer to change value in memory
* @a: Array of integers
* @n: Number of elements in an array
*Return: Null/Void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
