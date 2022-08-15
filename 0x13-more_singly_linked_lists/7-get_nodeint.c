#include "lists.h"
/**
 * get_nodeint_at_index - Function
 *
 * Description: gets the nth node of a listint_t linked list.
 *
 * @head: pointer of type listint_t
 * @index: unsigned int, the index of node
 *
 * Return: returns the nth item or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
