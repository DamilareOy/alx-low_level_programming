#include "main.h"

/**
 *swap_int - swap two integers
 *
 *@a: integer to swap with b
 *@b: iteger to swap with a
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
