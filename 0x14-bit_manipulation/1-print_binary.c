#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: number of binary
 *
 *Return: always 0 (success)
 *
 */
void print_binary(unsigned long int n)
{
	unsigned int num_bits = 0;

	while (n)
	{
		unsigned long int temp = n;
		temp >>= 1;
		num_bits++;
	}

	while (num_bits)
	{
		unsigned int i = num_bits;
	       	i--;
	}
	if ((n >> (num_bits - 1)) & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
