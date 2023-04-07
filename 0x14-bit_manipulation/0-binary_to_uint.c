#include "main.h"
#include <stddef.h>
/**
 *binary_to_uint -  converts a binary number to an unsigned int
 *@b: pointer to a string
 *
 *Return: converted number, or 0
 *if there is one or more chars
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num <<= 1;
		num += (*b - '0');
		b++;
	}

	return (num);
}
