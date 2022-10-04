#include "main.h"
/**
 *_strcpy - update value.
 *@dest: Array to be evaluate.
 *@src: String to be evaluate.
 *Return: null
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (*(src + len))
	{
		len++;
	}
	for ( ; i < len ; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + len) = '\0';
	return (dest);
}
