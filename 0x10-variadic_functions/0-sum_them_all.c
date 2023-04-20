#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: input value
 * @...: variable will be returned
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sumres = 0, m;
	va_list th;

	va_start(th, n);

	for (m = 0; m < n; m++)
	{
		sumres += va_arg(th, int);
	}
	va_end(th);
	return (sumres);
}
