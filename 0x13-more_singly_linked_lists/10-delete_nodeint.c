#include "lists.h"
/**
 * delete_nodeint_at_index - Function
 *
 * Description: deletes the node at index index of a listint_t linked list.
 *
 * @head: pointer to pointer of type listint_t
 * @index: unsigned int, index to remove
 *
 * Return: returns 1 for success and -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *prev = *head;

	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);

	if (index != 0)
	{
		for (count = 0; (count < (index - 1)) && (prev != NULL); count++)
		{
			prev = prev->next;
		}
	}
	temp = prev->next;
	if (index != 0)
	{
		prev->next = temp->next;
		free(temp);
	}
	else
	{
		free(prev);
		*head = temp;
	}

	return (1);
}
