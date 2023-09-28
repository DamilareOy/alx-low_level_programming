#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase, followed by a new line.
 *
 */
void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
