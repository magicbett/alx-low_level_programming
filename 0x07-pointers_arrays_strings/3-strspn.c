#include "main.h"

/**
* _strspn - return length of string that match values consistently
* @s: string to search
* @accept: target match
* Return: number of bytes consecutively matched
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, sect;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		sect = 1;

		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			{
			sect = 0;

			break;
		}
		}
		if (sect == 1)
			break;
	}
	return (x);
}

