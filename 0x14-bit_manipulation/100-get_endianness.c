#include "main.h"

/**
 * get_endianness - checks the endianess of a system
 * Return: 0 for big endianess, 1 for little endianess
 */
int get_endianness(void)
{
	unsigned int numb = 1;
	char *pntr = (char *) &numb;

	return (*pntr);
}


