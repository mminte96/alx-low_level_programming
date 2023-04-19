#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: an array of function
 * @size_t size: an element of function
 * @action: another function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
