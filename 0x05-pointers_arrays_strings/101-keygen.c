#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Success.
 */
int main(void)
{
	int r = 0, c = 0;
	time_t t;
	int sum = 0;

	srand((unsigned) time(&t));
	while (c < 15)
	{
		r = rand() % 128;
		c++;
/*		printf("%c", r);*/
		sum += r;
	}
	printf("%c", sum);
	return (0);
}
