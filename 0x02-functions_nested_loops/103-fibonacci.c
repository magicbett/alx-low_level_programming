#include <stdio.h>
/**
* main - first 50 fibonacci numbers
* multiplies of 3 or 5 and sum of the multiples
*
* Return: Always 0.
*/
int main(void)
{
	long int fib = 0;

	long int n1 = 0;

	long int n2 = 1;

	long int sum = 0;

	long int total = 0;

	while (sum <= 4000000)
	{
		fib = n1 + n2;
		total += fib;
		if (fib % 2 == 0)
			sum += fib;
		n1 = n2;
		n2 = fib;
	}
	printf("%ld\n", sum);
	return (0);
}
