#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 *
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (w = 0; w < height; w++)
	{
		a[w] = (int *)malloc(sizeof(int) * width);
		if (a[w] == NULL)
		{
			for (h = 0; h < w; h++)
				free(a[h]);
			free(a);
			return (NULL);
		}
		for (h = 0; h < width; h++)
		{
			a[w][h] = 0;
		}
	}
	return (a);
}
