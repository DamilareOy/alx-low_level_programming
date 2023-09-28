#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @m: string ro change
 *
 * Return: m
 */
char *string_toupper(char *m)
{
	int i = 0;

	while (m[i] != '\0')
	{
		if (m[i] >= 'a' && m[i] <= 'z')
			m[i] = m[i] - 'a' + 'A';
		i++;
	}
	return (m);
}

