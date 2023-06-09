#include "main.h"

/**
 * flip_bits - Returns the number of bits that need to be flipped
 * to transform one number into another
 * @n: The first unsigned long integer
 * @m: The second unsigned long integer
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	for (int i = 0; i < 64; i++)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
