#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary numbers
 *
 * Return: the converted number or 0; should B = NULL or there are nonbin chars
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' &&  b[i] != '1')
			return (0);
		result = 2 * result + (b[i] - '0');
	}

	return (result);
}
