#include "main.h"

/**
 *_strncpy - function that copies a string
 *@dest: string to be copied into
 *@src: string to copy
 *@n: number of characters in string src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && *(src + j) != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
