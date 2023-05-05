#include "main.h"
#include <stdio.h>

/**
 *print_binary - prints the binary representation of a number
 *@n: inary number
 *
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int shift = sizeof(unsigned long int) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	while ((n & (mask << shift)) == 0 && shift > 0)
	{
		shift--;
	}
	while (shift >= 0)
	{
		if ((n & (mask << shift)) != 0)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		shift--;
	}
}
