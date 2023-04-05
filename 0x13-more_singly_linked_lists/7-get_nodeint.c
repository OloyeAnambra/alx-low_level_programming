#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: a pointer to the head node of the linked list
 * @index: the index of the node, starting at 0
 *
 * Return: pointer to nth node (Success), NULL (Fail)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nt_node;
	unsigned int i = 0;

	nt_node = head;

	while (nt_node)
	{
		if (i == index)
			break;

		nt_node = nt_node->next;
		i++;
	}
	return (nt_node);
}
