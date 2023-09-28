#include <stdio.h>

/**
 * main -Prints the lowercase alphabet, followed by a newline
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
