#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - print a linked list only one time
 * @head: head of LL
 * Return: counter of nodes & prints an error if the linked list is a circle
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast, *marker;
	unsigned int counter = 0, flag = 0;

	if (head == NULL)
		return (0);
	marker = slow = head;
	fast = head->next;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		counter++;

		if (flag == 0 && fast != NULL && fast->next != NULL && slow != NULL)
		{
			if (fast == slow)
			{
				flag = 1;
				slow = marker;
			}
			fast = fast->next->next;
		}
		if (flag == 1 && slow == head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		slow = slow->next;
	}
	return (counter);
}
