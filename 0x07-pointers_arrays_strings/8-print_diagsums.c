#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: input value
 * @size: size of input
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int m;
	int th;
	int sum0 = 0;
	int sum1 = 0;

	for (m = 0; m <= (size * size); m = m + size + 1)
	{
		sum0 = sum0 + a[m];
	}
	for (th = size - 1; th <= (size * size) - size; th = th + size - 1)
	{
		sum1 = sum1 + a[th];
	}
	printf("%d, %d\n", sum0, sum1);
}
