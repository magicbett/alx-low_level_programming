#include "main.h"
#include "string.h"

/**
 * _strncpy -> a funcion to append some characters
 * @dest: first param
 * @src: second param
 * @n: 3rd param
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
