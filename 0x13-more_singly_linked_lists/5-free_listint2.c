#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * @head: a double pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (!head)
		return;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
}
