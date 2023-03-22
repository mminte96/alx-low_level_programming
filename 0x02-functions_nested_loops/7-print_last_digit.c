#include "main.h"
/**
 * print_last_digit - print the las digit of number
 * @n: will be checked
 * Return: Always (Success)
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	n = -n;

	m = n % 10;
	if (m < 0)
	m = -m;
	_putchar(m + '0');

	return (m);
}
