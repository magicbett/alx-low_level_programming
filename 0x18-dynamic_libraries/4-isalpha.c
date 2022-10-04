#include "main.h"

/**
*_isalpha - Begin Here
*@c: Character ASCII code
*return 1 if lower or upper case and 0 otherwise
*Return: Value 0 (true)
*/
int _isalpha(int c)
{
	if ((c <= 'Z' && c >= 'A') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
