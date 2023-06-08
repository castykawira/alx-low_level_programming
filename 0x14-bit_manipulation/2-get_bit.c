#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: Unsigned long int number
 * @index: the index, starting from 0 of the bit you want to get
 * Returns: the value of the bit at index, or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 8)
		return (-1);

	unsigned long int mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
