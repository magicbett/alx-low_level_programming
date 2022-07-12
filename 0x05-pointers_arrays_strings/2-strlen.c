#include "main.h"
/**
* _strlen - Use pointer to change value in memory
* @s: Pointer to int s location
*Return: Null/Void
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
