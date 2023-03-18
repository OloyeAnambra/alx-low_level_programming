#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int i, k;
	int *a;

	if (min > max)
		return (NULL);
	k = max - min + 1;
	a = malloc(sizeof(int) * k);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < k; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
