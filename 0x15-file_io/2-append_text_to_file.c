#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1, if the function fails or filename is NULL or
 *         If the file does not exist or the user lacks write permissions,
 *         Otherwise, 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, byteswritten, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fildes = open(filename, O_WRONLY | O_APPEND);
	byteswritten = write(fildes, text_content, len);

	if (fildes == -1 || byteswritten == -1)
		return (-1);

	close(fildes);

	return (1);
}

