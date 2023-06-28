#include "main.h"

/**
 *print_rev - Prints a string in reverse, followed by a newline.
 *@s: string to be printed
 */

void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (; length > 0; length--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
