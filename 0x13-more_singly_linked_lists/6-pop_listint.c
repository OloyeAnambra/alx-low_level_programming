#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: a double pointer to the head of the linked list
 *
 * Return: the head node's data 0, (Empty and successful)
 */

int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int i = 0;

	if (!(head == NULL && *head == NULL))
	{
		current_node = *head;
		i = current_node->n;
		*head = current_node->next;
		free(current_node);
	}
	return (i);
}
