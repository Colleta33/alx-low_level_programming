#include "main.h"
#include <stdio.h>

/**
 *get_endianness - Entry point
 *
 *Return: 0 (success)
 *
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
