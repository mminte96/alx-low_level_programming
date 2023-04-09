#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints its name
 * @argc: input value
 * @argv: input value
 * Return: Always (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
