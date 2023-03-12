#include <stdio.h>
#include "main.h"

/**
 *main - a program that prints the number of arguments
 *@argc: number of arguments
 *@argv: array to pointer
 *
 *Return: 0 (success)
 */
int main(int argc, char **argv)
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
