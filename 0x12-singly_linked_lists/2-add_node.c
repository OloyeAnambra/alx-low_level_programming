#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a linked list
 * @head: a double pointer to the linked list
 * @str: new string to add in the new node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	return NULL;
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return NULL;
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
