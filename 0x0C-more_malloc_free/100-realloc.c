#include "main.h"
/**
 * *_realloc -  reallocates a memory block using malloc and free
 * @ptr: Pointer to reallocate memory
 * @old_size: existing allocated size
 * @new_size: new size to allocate
 * Return: pointer to newly allocated memory or null
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (NULL);
	copy = malloc(new_size * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			copy[i] = ((char *)ptr)[i];
			i++;
		}
		return (copy);
	}
	while (i < new_size)
	{
		copy[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (copy);
}
