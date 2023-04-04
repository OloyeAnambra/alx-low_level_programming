#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: a pointer to the linked list
 *
 * Return: the number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
	printf("%i\n", h->n);
	h = h->next;
	cnt++;
	}

	return (cnt);
}
