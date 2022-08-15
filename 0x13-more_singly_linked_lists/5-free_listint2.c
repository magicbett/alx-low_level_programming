#include "lists.h"
/**
 * free_listint2 - Function
 *
 * Description: frees a listint_t list
 *
 * @head: pointer to pointer of type listint_t
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	if ((*head)->next != NULL)
		temp = (*head)->next;
	else
	{
		free(*head);
		*head = NULL;
	}
	if (*head)
	{
		free_listint2(&temp);
		free(*head);
	}
	*head = NULL;

}
