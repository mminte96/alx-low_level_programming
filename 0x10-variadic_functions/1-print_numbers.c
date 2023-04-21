#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: the variable who will printed
 * Return: Always (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int rune;
	va_list num;

	va_start(num, n);

	for (rune = 0; rune < n; rune++)
	{
		printf("%d", va_arg(num, int));

		if (rune != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
