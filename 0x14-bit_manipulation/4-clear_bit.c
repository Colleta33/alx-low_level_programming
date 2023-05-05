#include "main.h"
/**
 *clear_bit -  sets the value of a bit to 0 at a given index.
 *@n: a pointer to binary nmber
 *@index: the index starting from 0
 *Return: 1 if it worked or -1 if and erro occrred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &= mask;
	return (1);
}

