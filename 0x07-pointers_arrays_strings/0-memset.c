#include "main.h"
/**
 * _memset - fills n bytes of the memory pointed by s with the byte b
 * @s: Pointer to array location
 * @b: Constant byte to replace sotred date
 * @n: number of bytes to be replaced
 * Return: Pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
