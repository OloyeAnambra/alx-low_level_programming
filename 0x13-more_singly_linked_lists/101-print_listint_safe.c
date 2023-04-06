#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *low, *high;
	size_t count;

	low = head;
	high = head;
	count = 0;

	while (low != NULL && high != NULL && high->next != NULL)
	{
	printf("[%p] %d\n", (void *)low, low->n);
	low = low->next;
	high = high->next->next;

	count++;

	if (low == high)
		{
		printf("[%p] %d\n", (void *)low, low->n);
		printf("-> [%p] %d\n", (void *)high->next, high->next->n);
		count++;
		break;
		}
	}

	if (low == NULL || high == NULL || high->next == NULL)
	{
	while (head != NULL)
		{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
		}
	}

	return (count);
}

