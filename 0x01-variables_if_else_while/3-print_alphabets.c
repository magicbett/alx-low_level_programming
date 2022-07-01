#include <stdio.h>
/**
*main - Begin Here
*print a-z and A-Z using putchar
*Return: Value 0 (true)
**/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
