#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 *@b: pointer to string of char
 *
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			if (b[i] == '1')
				result = result | 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result);
}
