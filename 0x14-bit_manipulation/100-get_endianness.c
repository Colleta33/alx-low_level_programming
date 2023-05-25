#include "main.h"
#include <stdio.h>

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
