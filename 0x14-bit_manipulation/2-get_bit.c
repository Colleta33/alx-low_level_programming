#include "main.h"
#include <stdio.h>

/**
 *get_bit -  returns the value of a bit at a given index.
 *@n: number of bits
 *@index: is the index, starting from 0 of the bit
 *Return: value of a bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	{

	mask = mask << index;

	if ((n & mask) == mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	}
}
