#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *t, *t2;

	t = head;
	while (t != NULL)
	{
		t2 = t->next;
		free(t);
		t = t2;
	}
}
