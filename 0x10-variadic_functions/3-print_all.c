#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: is a list of types of arguments passed to the function
 * @...: the variable who will be printed
 * Return: Always (Success)
 */
void print_all(const char * const format, ...)
{
	char *space = "", *stdr;
	int i = 0;
	va_list all;

	va_start(all, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", space, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", space, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", space, va_arg(all, double));
					break;
				case 's':
					stdr = va_arg(all, char *);
					if (stdr == NULL)
						printf("(nill)");
					printf("%s%s", space, stdr);
					break;
				default:
					i++;
					continue;
			}
			space = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(all);
}
