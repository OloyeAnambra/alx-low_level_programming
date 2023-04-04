#include "lists.h"

/**
 * listint_len - a function that returns the elements of listint_t list
 * @h: a pointer to the linked list
 *
 * Return: the number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
