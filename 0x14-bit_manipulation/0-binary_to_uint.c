#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Function
 *
 * Description: converts a binary number to an unsigned int.
 *
 * @b: pointer of type unsigned int
 *
 * Return: returns converted number or 0 if fails.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, val = 0;

	if (b == NULL)
		return (0);
	for (; *(b + i); i++)
	{
		val = val << 1;
		if (*(b + i) == '1')
			val = val | 1;
		else if (*(b + i) != '0')
			return (0);
	}
	return (val);
}
