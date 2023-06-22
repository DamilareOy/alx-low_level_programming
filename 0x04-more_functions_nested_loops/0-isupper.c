#include "main.h"

/**
 *_isupper - Checks for uppercase character
 *@c: any letter of the alphabet
 *
 *Return: 1 if uppercase and 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
