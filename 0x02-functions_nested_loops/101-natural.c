#include <stdio.h>
/**
* main - Prints natural numbers below 1024 that are
* multiplies of 3 or 5 and sum of the multiples
*
* Return: Always 0.
*/
int main(void)
{
	int i, sum;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
