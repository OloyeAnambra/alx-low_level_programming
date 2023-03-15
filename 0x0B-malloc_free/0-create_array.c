#include <stdlib.h>
#include "main.h"
/**
 *create_array - function that creates an array of characters
 * @size: the size of the character array
 * @k: characters in the array
 * Return: pointer (Success), NULL (Fail or Size = 0)
 */
char *create_array(unsigned int size, char k)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = k;
	}

	return (p);
}
