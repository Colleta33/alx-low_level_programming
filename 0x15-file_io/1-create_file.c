#include "main.h"

/**
 *create_file - function that creates a file.
 *@filename: text to be read
 *@text_content: string of the letters
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (filename == NULL)
	{
		return (-1);
	}
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		size_t len = strlen(text_content);
		ssize_t ret = write(fd, text_content, len);

		if (ret == -1 || (size_t) ret != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
