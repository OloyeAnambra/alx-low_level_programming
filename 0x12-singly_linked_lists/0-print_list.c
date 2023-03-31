#include "lists.h"

/**
 * print_list - a function that prints all the elements of a linked list
 * @h: a pointer to the linked list
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str != NULL)
	{
		printf("%u\n %s\n",h->len, h->str);
	}
	else
	{
		printf("[0] (nil)\n");
	}
	h = h->next;
	count++;
	}
	return (count);
}
