#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index in a decimal number
 * @n: Unsigned long int number
 * @index: The index of the bit to retrieve, starting from 0
 *
 * Return: the value of the bit at index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= 64)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
