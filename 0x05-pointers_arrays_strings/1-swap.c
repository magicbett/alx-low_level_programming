#include "main.h"
/**
* swap_int - Use pointer to change value in memory
* @a: Pointer to int a location
* @b: Pointer to int b location
*Return: Null/Void
*/
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;
	*a = y;
	*b = x;
}
