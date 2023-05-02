#include "main.h"

/**
 * rev_string -a function that reverses a string
 * @s: input string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *rev = s;
	char temp;

	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (rev < s)
	{
		temp = *rev;
		*rev = *s;
		*s = temp;

		rev++;
		s--;
	}
}
