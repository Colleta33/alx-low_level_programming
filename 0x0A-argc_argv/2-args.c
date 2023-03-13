#include <stdio.h>
#include "main.h"

/**
 *main -  a program that prints all arguments it receives.
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: print arguments array
 */
int main(int argc, char **argv)
{
(void) argc;/*ignore argc*/
{
	while (argc--)
		printf("%s\n", *argv++);
}
return (0);
}
