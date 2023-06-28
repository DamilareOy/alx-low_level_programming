#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int length = 0;
	int i;

	while (s[length] != '\0')
	counter++;
	for (i = 0; i < length; i++)
	{
		length--;
		rev = s[i];
		s[i] = s[length];
		s[length] = rev;
	}
}

