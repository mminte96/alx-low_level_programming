#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input by user
 * Return: Always (Success)
 */
void puts_half(char *str)
{
	int a;
	int b;
	int caract;

	caract = 0;
	for (a = 0; str[a] != '\0'; a++)
		caract++;
	b = (caract / 2);
	if ((caract % 2) == 1)
		b = ((caract + 1) / 2);
	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
