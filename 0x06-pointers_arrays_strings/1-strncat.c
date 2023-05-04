#include "main.h"

/**
 * Concatenates two strings, using at most n bytes from src
 *  @dest: A pointer to the destination string
 *  @src: A pointer to the source string
 *  @n: The maximum number of bytes to use from src
 *  Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
	{
		 dest_len++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
