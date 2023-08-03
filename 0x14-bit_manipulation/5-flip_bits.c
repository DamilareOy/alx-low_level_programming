#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int bit_value;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		bit_value = exclusive >> i;
		if (bit_value & 1)
			count++;
	}

	return (count);
}

