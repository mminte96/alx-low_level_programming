#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assing a random number to the variable n each time
 * Return: Always (Success)
 */
int main(void)
{
	int n, lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;

	if (lastdig > 5)
	{
		printf("last digit of %dis %d and is greater than 5\n", n, lastdig);
	}
	else if (lastdig == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastdig);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastdig);
	}
	return (0);
}
