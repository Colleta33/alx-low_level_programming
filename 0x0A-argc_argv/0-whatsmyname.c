#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints its name
 * @argc: count the number of agruments
 * @argv: an array to pointer
 *
 * Return: always 0 (succes)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
