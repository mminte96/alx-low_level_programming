#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function that searches for an integer
 * @array: an array of function
 * @size: another int
 * @cmp: second function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (m = 0; m <= size; m++)
	{
		if (cmp(array[m]))
		{
			return (m);
		}
	}
	return (-1);
}
