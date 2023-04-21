#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: the variable who will returned
 * Return: Always (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *stdr;
	unsigned int rune;

	va_start(str, n);

	for (rune = 0; rune < n; rune++)
	{
		stdr = va_arg(str, char *);
		if (stdr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", stdr);
		}
		if (rune != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
