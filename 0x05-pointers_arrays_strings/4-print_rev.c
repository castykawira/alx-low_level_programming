#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		_putchar(*(s - 1));
		s--;
		len--;
	}

	_putchar('\n');
}
