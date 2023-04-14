#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * void *malloc_checked - a function that allocates memory using
 * @b: input value
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointe;

	pointe = malloc(b);

	if (pointe == NULL)
	{
		exit(98);
	}
	return (pointe);
}
