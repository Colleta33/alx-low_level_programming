#include "main.h"
#include <string.h>

/**
 *create_file -  a function that creates a file.
 *@filename: a pointer to the name of the file to be created
 *@text_content: a pointer string to write a file
 *
 * Return: 1 on success -1 file can not be created
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t num_written;

	if (filename == NULL)
	{
		return (-1);
	}
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		ssize_t len = strlen(text_content != NULL);
		ssize_t num_written = write(fd, text_content);

		if (num_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

