#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL, *current_node;

	new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		current_node = *head;

		while (current_node->next)
			current_node = current_node->next;

		current_node->next = new_node;
		new_node->next = NULL;
	}

	return (new_node);
}
