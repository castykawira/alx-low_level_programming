#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm
 * @str: The input string to be hashed
 *
 * Return: The calculated hash value as an unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
		hash = ((hash << 5) + hash) + count; /* hash * 33 + count */

	return (hash);
}
