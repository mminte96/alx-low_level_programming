#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"
/**
 * init_dog -  a function that initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: element of struct
 * @age: second element
 * @owner: the element of owner
 * Return: Always (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		*d = malloc(sizeof(struct dog));
	}
	d.name = name;
	d.age = age;
	d.owner = owner;
}
