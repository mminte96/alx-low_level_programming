#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: input value
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int m;
	int th;

	for (m = 0; m < 8; m++)
	{
		for (th = 0; th < 8; th++)
		{
			_putchar(a[m][th]);
		}
		_putchar('\n');
	}
}
