#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints the number
 * @argc: input value
 * @argv: input value
 * Return: Always (Success)
 */
int main(int argc __attribute__((unused)), char argv[])
{
	printf("%s\n", *argc);
	return (0);
}
