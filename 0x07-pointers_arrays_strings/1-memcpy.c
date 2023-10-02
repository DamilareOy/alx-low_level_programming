#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where it is stored
 *@src: memory to copy from
 *@n: number of bytes to be copied
 *
 *Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
