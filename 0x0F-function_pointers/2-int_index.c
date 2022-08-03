#include "function_pointers.h"
/**
 * int_index - Function
 *
 * Description: searches for an integer
 *
 * @array: pointer parameter of type int
 * @size: parameter of type int, number of elements in array
 * @cmp: pointer function, that returns int and takes in int
 *
 * Return: returns -1 for no element match and when size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	while (size-- > 0)
	{
		i++;
		if (cmp(*array) != 0)
		{
			return (i - 1);
		}
		array++;
	}
	return (-1);
}
