#include "main.h"
/**
 * _isalpha - a fuction that check for alphabetic character
 * @c: will be checked
 * Return: 1 if c is a letter, lowercase or uppercase
 * And 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	_putchar('\n');
}
