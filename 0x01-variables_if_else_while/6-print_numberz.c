#include <stdio.h>
/**
*main - Begin Here
*print 0-9 using putchar
*Return: Value 0 (true)
**/
int main(void)
{
	int num = ((char)'0');
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
