#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *binary_to_uint -  converts a binary number to an unsigned int
 *@b: binary string
 *
 *Return: converted number, or 0
 *if there is one or more chars
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	result = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (size_t i = 0; i < strlen(b); i++)
	{
		if (b[i] == '0')
		{
			result = result << 1;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
