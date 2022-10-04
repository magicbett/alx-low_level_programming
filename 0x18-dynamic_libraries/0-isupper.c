#include "main.h"
#include <stdio.h>
/**
* _isupper - Check if character is upper case or lower
* @c: Character in ASCII
* Return: value 0 if false and 1 if true
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
