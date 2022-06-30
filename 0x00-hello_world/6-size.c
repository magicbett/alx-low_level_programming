#include <stdio.h>
/**
*main - Display memory size of variables
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char ch;
	int in;
	long lng;
	long long lolng;
	float flt;

	printf("Size of a char: %lu byte(s)\n", sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", sizeof(in));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lng));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lolng));
	printf("Size of a float: %lu byte(s)\n", sizeof(flt));
	return (0);
}
