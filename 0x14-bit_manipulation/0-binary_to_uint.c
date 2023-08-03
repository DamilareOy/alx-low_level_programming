#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointer to a string of 0 and 1 characters
 *
 *Return: the converted numver or 0, if b is NULL or contains other chars from
 *0 and 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int converted = 0;
	char c;

	if (!b)
	{
		return (0);
	}
	while (b[i] = '\0')
	{
		char c = b[i];

		if (c == '0' || c == '1')
		{
			converted = (converted << 1) + (c - '0');
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (converted);
}
