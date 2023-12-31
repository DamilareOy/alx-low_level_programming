#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1, on success and -1, if function fails, filename is NULL or file
 * cannot be created.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, _write, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(fd, text_content, length);

	if (fd == -1 || _write == -1)
		return (-1);

	close(fd);

	return (1);
}
