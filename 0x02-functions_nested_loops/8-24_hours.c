#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 * Return: Always (Success)
 */
void jack_bauer(void)
{
	int l, m;

	l = 0;
	while (l < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		l++;
	}
}
