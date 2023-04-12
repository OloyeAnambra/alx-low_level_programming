#include "main.h"

/**
 * set_bit - set the value of a bit at a given index to 1
 * @n: pointer to an unsigned long int
 * @index: index of the bit to set
 *
 * Return: 1 if successful, -1 if index is out of range
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	*n = (*n | mask);

	return (1);
}
