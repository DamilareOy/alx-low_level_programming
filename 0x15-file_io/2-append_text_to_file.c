#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: String to add to the end of the file.
 *
 * Return: 1, on success and -1, If the function fails, filename is NULL or
 * file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _write, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	_write = write(fd, text_content, length);

	if (fd == -1 || _write == -1)
		return (-1);

	close(fd);

	return (1);
}
