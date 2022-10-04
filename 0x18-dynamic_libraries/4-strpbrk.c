#include "main.h"
/**
 * _strpbrk - function that gets the length of a prefix substring
 * @s: Pointer to string location
 * @accept: bytes to filter
 * Return: Pointer to memory s or Null if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i])
	{
	j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
