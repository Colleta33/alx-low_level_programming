#include "main.h"
#include <stdio.h>

/**
 *append_text_to_file - appends text at the end of a file.
 *@filename: pointer to the file name
 *@text_content: pointer to the string to write the file
 *Return: 1 on succeess and -1 on failure
 *if the file already exists, truncate it
 *if filename is NULL return -1
 *if text_content is NULL create an empty file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (access(filename, W_OK) == 0 ? 1 : -1);
	}

	FILE *fp = fopen(filename, "a");

	if (fp == NULL)
	{
		return (-1);
	}

	fprintf (fp, "%s", text_content);
	fclose(fp);

	return (1);
}
