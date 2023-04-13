#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that returns a pointer to a 2 dimensional array of integers
 * @width: input value
 * @height: input value
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int *array[];

	if (width <= 0 || height <= 0)
		return (NULL);
	array[] = malloc(sizeof(int *) * height);
	if (array[] == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			for (; a >= 0; a--)
				free(array[a]);
			free(array[]);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			array[a][b] = 0;
	}
	return (array[]);
}
