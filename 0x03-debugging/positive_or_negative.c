#include "main.h"
/**
 * positive_or_negative - test code to debug it
 * @i: will be checked
 * Return: Always (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is zero", i);
}
