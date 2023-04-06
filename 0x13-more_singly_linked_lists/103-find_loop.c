#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: a pointer to the head of the linked list
 *
 * Return: address of the node where the loop starts (Success), NULL (Fail)
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *h, *p;

	h = p = head;
	while (h && p && p->next)
	{
		h = h->next;
		p = p->next->next;
		if (h == p)
		{
			h = head;
			break;
		}
	}
	if (!h || !p || !p->next)
		return (NULL);

	while (h != p)
	{
		h = h->next;
		p = p->next;
	}
	return (p);
}
