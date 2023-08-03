#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: number to check
 * @index: index of the bit
 *
 * Return: value of the bit or -1, if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

