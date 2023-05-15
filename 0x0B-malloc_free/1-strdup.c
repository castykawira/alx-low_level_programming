#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a given string
 * @str: The string to be duplicated
 * Return: pointer to duplicated string, NULL if insufficient
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;


	duplicate = malloc(sizeof(char) * (i + 1));


	if (duplicate == NULL)
		return (NULL);


	for (j = 0; str[j]; j++)
		duplicate[j] = str[j];

	return (duplicate);
}
