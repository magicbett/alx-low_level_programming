#include <stdio.h>
/**
*main - Begin Here
*print z-a using putchar
*Return: Value 0 (true)
**/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
