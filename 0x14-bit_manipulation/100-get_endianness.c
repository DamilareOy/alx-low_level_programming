#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0, if big endian or 1, if little endian
 */
int get_endianness(void)
{
	unsigned int numb = 1;
	char *byte = (char *) &numb;

	return (*byte);
}

