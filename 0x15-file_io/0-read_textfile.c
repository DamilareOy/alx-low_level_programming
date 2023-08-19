#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file and prints it to the STDOUT.
 * @filename: text file to read
 * @letters: number of letters to be read
 * Return: bytesread (actual number of bytes read and printed)
 *        or 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t bytesread;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	bytesread = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (bytesread);
}

