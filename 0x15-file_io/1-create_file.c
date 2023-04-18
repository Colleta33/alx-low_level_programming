#include "main.h"

/**
 *create_file - a function that creates a file.
 *@filename: apointer to  the file to be created
 *@text_content: a pointer to the text in the file
 *Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{ /* check if filename is NULL */
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	/* open file with write-only, create if not exists, truncate if exists */
	/* set permissions to rw------- */

	if (fd == -1)
	{ /* check if file could not be opened or created*/
		return (-1);
	}

	if (text_content != NULL)
	{ /* if text_content is not NULL */
		int i = 0;

		while (text_content[i] != '\0')
		{ /* loop through each character until NULL termination
		*/
			i++;
		}

		if (write(fd, text_content, i) == -1)
		{ /* write text_content to file */
			return (-1);
		}
	}

	close(fd); /* close file */
	return (1);
}
