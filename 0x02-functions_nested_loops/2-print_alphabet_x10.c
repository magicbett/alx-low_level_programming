#include "main.h"
/**
*print_alphabet_x10 - Begin Here
*print a-z and A-Z using putchar
*Return: Value 0 (true)
**/
void print_alphabet_x10(void)

{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	_putchar('\n');
	}
}
