#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Pointer to concatenated string, NULL on fail
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int len_s1, len_s2;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = 0;
	while (s1[len_s1] != '\0')
		len_s1++;

	len_s2 = 0;
	while (s2[len_s2] != '\0')
		len_s2++;

	conc = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (conc == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		conc[i] = s2[j];
		i++;
		j++;
	}
	conc[i] = '\0';
	return (conc);
}
