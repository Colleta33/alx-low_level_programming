#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the size of the machine
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	int num = 1;

	char* ptr = (char*)&num;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
