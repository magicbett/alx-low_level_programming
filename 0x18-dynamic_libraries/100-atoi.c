#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int len = 0, size = 0, oi = 0, sign = 1, m = 1, i;

	while (*(s + len))
	{
		if (size > 0 && (*(s + len) < '0' || *(s + len) > '9'))
			break;

		if (*(s + len) == '-')
			sign *= -1;

		if ((*(s + len) >= '0') && (*(s + len) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		len++;
	}

	for (i = len - size; i < len; i++)
	{
		oi += ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * sign);
}
