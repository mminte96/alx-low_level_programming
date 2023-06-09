#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * char *create_array - a function that creates an array of chars
 * @c: input value
 * @size: input value
 * Return: Always 0 (Success) NULL fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
