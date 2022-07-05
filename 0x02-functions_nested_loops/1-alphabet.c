#include "main.h"
/**
*print_alphabet - Begin Here
*print a-z and A-Z using putchar
*Return: Value 0 (true)
**/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
