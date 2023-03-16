#include <stdio.h>
/**
 * main - Writing program that prints the size of various types on the computer it is compiled
 * Return: 0(Success)
 */
int main(void)
{
	char a;
	int b;
	long d;
	long long e;
	float c;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(c));
return (0);
}
