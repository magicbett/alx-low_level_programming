#include "main.h"
/**
 * _strstr - function that loocates substring
 * @haystack: Pointer to string location
 * @needle: substring to filter
 * Return: Pointer to memory haystack or Null if no hit
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
