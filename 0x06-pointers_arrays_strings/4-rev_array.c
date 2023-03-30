#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array name
 * @n: number of array elements
 * Return: Always (Success)
 */
void reverse_array(int *a, int n)
{
	int tab, nb;

	for (tab = 0; tab < n--; tab++)
	{
		nb = a[tab];
		a[tab] = a[n];
		a[n] = nb;
	}
}
