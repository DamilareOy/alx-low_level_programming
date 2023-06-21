#include "main.h"

/**
 * _abs - Prints the absolute value of an integer
 *@n: integer to check
 *Return: the absolute value of integer
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	_putchar('\n');
}
