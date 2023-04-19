#include <stdio.h>
#include "function_pointers.h"
/**
 * void print_name - a function that prints a name
 * @name: variable type char
 * @f: a function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
