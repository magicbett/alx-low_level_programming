#include <stdio.h>
/**
*main - Begin Here
*print 0-9 using putchar
*Return: Value 0 (true)
**/
int main(void)
{
	int num1 = ((char)'0');
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num1);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
