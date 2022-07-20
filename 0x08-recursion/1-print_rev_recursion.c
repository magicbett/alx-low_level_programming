#include <stdio.h>
/**
 * _print_rev_recursion - Prints string followed by new line
 * @s: Pointer to String
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
