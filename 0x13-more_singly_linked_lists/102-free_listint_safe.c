#include "lists.h"

/**
 * free_listint_safe - Frees a linked list of integers with safety.
 *
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current_node = NULL;

	while (*h != NULL)
	{
	size++;
	if (*h <= (*h)->next)
		{
		current_node = *h;
		*h = NULL;
		free(current_node);
		break;
		}
	else
		{
		current_node = (*h)->next;
		(*h)->next = NULL;
		free(*h);
		*h = current_node;
		}
	}

	return (size);
}

