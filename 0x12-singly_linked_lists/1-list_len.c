#include "lists.h"

/**
 * list_len - a function that prints all the elements of a linked list
 * @h: a pointer to the linked list
 *
 * Return: the number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
