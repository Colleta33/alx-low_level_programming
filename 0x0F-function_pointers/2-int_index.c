#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - a function that searches for an integer.
 *@array: array
 *@size:number of elements in the array
 *@cmp:pointer to te function
 *Return: 0 (success)
 *if no element matches, return -1
 *if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size ; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

