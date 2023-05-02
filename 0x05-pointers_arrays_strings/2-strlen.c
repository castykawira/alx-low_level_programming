#include "main.h"

/**
 * strlen - a function that returns the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
