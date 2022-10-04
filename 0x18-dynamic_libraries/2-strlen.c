#include "main.h"
/**
 * _strlen - Use pointer to change value in memory
 * @s: pointer to int s location
 * Return: Null/void
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
