#include "main.h"
/**
 *strlen - prw line
 *@str: length
 *Return: print
 */
int strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
