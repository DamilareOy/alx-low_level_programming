#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase, followed by a
 * newline
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int alph;

	for (i = 0; i <= 9; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
	}
	_putchar('\n');
}
