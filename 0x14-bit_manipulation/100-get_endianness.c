#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness.
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	int num = 1;

	char *endian_ptr = (char *)&num;

	return (*endian_ptr == 1);
}
