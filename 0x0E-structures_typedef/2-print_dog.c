#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: pointer
 * Return: nil
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil";
	}
	printf("%s\n", d->name);
	printf("%f\n", d->age);
	printf("%s\n", d->owner);
}
