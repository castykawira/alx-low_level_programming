#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long integer containing the bits
 * @index: the index, starting from 0 of the bit you want to set
 * Return: The value of the bit at the specified index,
 * or -1 if an error occurred
 */
int set_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
