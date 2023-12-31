#include "main.h"

/**
 *_strncat - function that concatenates two strings
 *@dest: string to be appended to
 *@src: string to append
 *@n: totsl bytes in string src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n && *(src + j) != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
