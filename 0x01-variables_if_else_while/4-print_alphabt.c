#include <stdio.h>
/**
*main - Begin Here
*print a-z using putchar except q and w
*Return: Value 0 (true)
**/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			;
		}
		else
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
