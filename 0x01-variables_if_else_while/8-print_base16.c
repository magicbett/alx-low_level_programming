#include <stdio.h>
/**
*main - Begin Here
*print 0-9 using putchar
*Return: Value 0 (true)
**/
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
