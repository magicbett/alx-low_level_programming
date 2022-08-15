#include "lists.h"

/**
 * listint_len - Function to be used to display no.of elements in the list.
 * @h: singly linked list
 * Return: returns no. of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int x;

	x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;

	}
	return (x);
}
