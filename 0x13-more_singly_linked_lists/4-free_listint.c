#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: the linked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
