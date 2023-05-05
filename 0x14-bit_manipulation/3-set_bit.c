#include "main.h"
/**
 *set_bit -  sets the value of a bit to 1 at a given index.
 *@n: binary numbers
 *@index: is the index, strating from 0
 *Return: 1 if it worked . or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* index out of range*/
	}
	*n |= (1UL << index);
	return (1);
}
