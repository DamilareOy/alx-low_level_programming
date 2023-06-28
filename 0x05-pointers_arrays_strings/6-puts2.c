#include "main.h"
/**
 * puts2 - Print every other character of a string, starting with the first one
 * @str: string
 * 
 */
void puts2(char *str)
{
	int length = 0;
	int m = 0;
	char *v = str;
	int i;

	while (*v != '\0')
	{
		v++;
		length++;
	}
	m = length - 1;
	for (i = 0 ; i <= m ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
