#include <stddef.h>
#include "main.h"
#include <stdlib.h>

/**
 *read_textfile -  reads a text file and prints it to the POSIX standard output
 *@filename: filename to read
 *@letters: letters in the file
 *Return: actual number of letters
 *if the file can not open or read return 0
 *if filename is NULL return 0
 *if write fails or does not write the expected amount of bytes,return 0 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	int fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	char*buffer = malloc(sizeof(char)*letters);
	if (buffer == NULL)
	{
		close (fd);
		return (0);
	}
	ssize-t; num_read = read(fd, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free (buffer);
	close(fd);
	return (num_written);
}
