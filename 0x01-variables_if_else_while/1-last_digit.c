#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -b print the last digit
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	int lstdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdig = n % 10;

	if (lstdig > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lstdig);
	}
	else if (lstdig == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lstdig);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lstdig);
	}
	return (0);

