#include "main.h"
/**
 *flip_bits - returns the number of bits
 *@n:biary number
 *@m:flipped binary number
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff != 0)
	{
		count++;
		diff &= (diff - 1);
	}
	return (count);
}
