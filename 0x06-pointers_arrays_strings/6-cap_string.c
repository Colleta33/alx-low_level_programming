#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to be capitalized.
 *
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' '||
				str[index - 1] == '\t'||
