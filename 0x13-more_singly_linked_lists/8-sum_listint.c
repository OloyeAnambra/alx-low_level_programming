#include "lists.h"

/**
 * sum_listint - a function that returns sum of all data(n) of a linked list
 * @head: a pointer to the head of the linked list
 *
 * Return: the sum of all data (Success)
 */

int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int sum = 0;

	while (p != NULL)
	{
	sum += p->n;
	p = p->next;
	}

	return (sum);
}
