#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm
 * @str: The input string to be hashed
 *
 * Return: The calculated hash value as an unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int result;

	hash = 5381;
	while ((result = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
