#include "main.h"
/**
* rev_string - Use pointer to change value in memory
* @s: Pointer to string location
*Return: Null/Void
*/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char rev[500];
	int count;

	while (*s)
	{
	i++;
	s++;
	}
	s--;
	for (; i > 0; i--)
	{
		rev[j] = *s;
		s--;
		j++;
	}
	s++;
	count = j;
	for (j = 0; j < count; j++)
		*(s + j) = rev[j];
}
