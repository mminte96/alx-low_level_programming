#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: name of array
 * @n: array elements
 * Return: Always (Success)
 */
void print_array(int *a, int n)
{
	int v;

	for (v = 0; v < (n - 1); v++)
	{
		printf("%d, ", a[v]);
	}
	if (v == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
