#include "main.h"
/**
 * is_prime_number -  returns 1 if is a prime number, othewise return 0
 * @n: input value
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 && n != 2)
	{
		return (0);
	}
	if (n == 1 && n < 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
