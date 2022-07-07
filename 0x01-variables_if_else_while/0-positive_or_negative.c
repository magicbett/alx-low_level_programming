#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Start here
*Random generated numbers and check if positive, zero or negative.
*Return: value 0 (Accept)
**/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
