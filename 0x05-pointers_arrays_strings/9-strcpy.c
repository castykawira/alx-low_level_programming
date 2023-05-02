#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: destination value
 * @src: source value
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k++] = '\0';
	return (dest);
}
