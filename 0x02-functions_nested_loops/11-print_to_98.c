#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the nunber to print
 */
void print_to_98(int n)
{
	int rec, rel;

	if (n <= 98)
	{
		for (rec = n; rec <= 98; rec++)
		{
			if (rec != 98)
			{
				printf("%d, ", rec);
				else if (rec == 98)
				{
					printf("%d\n", rec);
				}
			}
		}
		else if (rel >= 98)
		{
			for (rel = n; rel >= 98; rel--)
			{
				if (rel != 98)
				{
					printf("%d, ", rel);
					else if (rel == 98)
					{
						printf("%d\n", rel);
					}
				}
			}
		}
	}
}
