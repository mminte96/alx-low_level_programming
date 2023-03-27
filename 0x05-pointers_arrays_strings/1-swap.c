#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: will be swaped
 * @b: be swaped
 * Return: Always (Success)
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
