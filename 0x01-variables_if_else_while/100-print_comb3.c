#include <stdio.h>
/**
*main - Begin Here
*Return: Value 0 (true)
**/
int main(void)
{
	int num1, num2;

	for (num1 = 0 + '0' ; num1 < 10 + '0'; num1++)
	{
		for (num2 = num1 + 1; num2 < 10 + '0'; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 >= (8 + '0') && num2 >= (8 + '0'))
			{
				;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
