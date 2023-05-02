#include "main.h"

/**
 * strlen - returns the length of a string
 * @s: pointer to the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int lng = 0;

	while (*s != '\0')
	{
		lng++;
		s++;
	}

	return (lng);
}
