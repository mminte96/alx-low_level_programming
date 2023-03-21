#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @r: will be checked
 * Return: Always (Success)
 */
int _abs(int r)
{

	if (r < 0)
	{
		return (-r);
		_putchar('\n');
	}
	else if (r >= 0)
	{
		return (r);
	}
	_putchar('\n');
}
