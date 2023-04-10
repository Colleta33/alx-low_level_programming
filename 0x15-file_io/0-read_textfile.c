#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *read_textfile -  reads a text file and prints
 *@filename: A string that specifies the name file
 *@letters: An integer
 *Return: actual number of letters
 *if the file can not open or read return 0
 *if filename is NULL return 0
 *if write fails or does not write the expected amount of bytes,return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	size_t filename;
	{
		if (filename == NULL)
		return (0);
	}
	ssize_t bytes_read = 0;
	char *buffer = (char *) malloc(size0f(char *) * (letters + 1));

	FILE *file = fopen(filename, "r");

	if (!file)
	{
		return (0);
	}
	bytes_read = fread(buffer, sizeof(char), letters, file);

	if (bytes_read == -1)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	if (write(STDOUT_FILENO, buffer, bytes_read) == -1)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);
	return (bytes_read);
}
