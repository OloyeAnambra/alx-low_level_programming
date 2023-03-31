#include "lists.h"

/**
 * free_list - a function that frees a linked list
 * @head: the linked list to be freed
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
	list_t *current_node = head;
	head = head->next;
	free(current_node->str);
	free(current_node);
	}
}
