#include "main.h"
/**
 * _memcpy -  Copies n bytes from src to dest
 * @dest: Pointer to destination location
 * @src: Pointer to source location
 * @n: number of bytes to be copied
 * Return: Pointer to memory dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
