#include "lists.h"
/**
 * add_nodeint - Functio used to add a new node at begining of the list
 *
 * @head: pointer to pointer of  listint_t
 * @n: constannt parametre
 *
 * Return: returns address to new element created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	/*allocate memory anch check if null*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	/*assign new values*/
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
