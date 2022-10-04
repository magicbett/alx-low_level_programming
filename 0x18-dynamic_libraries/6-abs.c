#include "main.h"

/**
*_abs - Begin Here
*@n: integer value
*Computes absolute value and returns the value
*Return: Value absolute value of n
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
