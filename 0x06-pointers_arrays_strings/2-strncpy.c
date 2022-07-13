#include "main.h"
/**
 * _strncpy - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: Number of char to copy
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (n > 0 && src[i])
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}
