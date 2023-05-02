#include "main.h"

/**
 * void puts2 - a function that prints every other character of a string
 * @str - input
 * Return: void
 */
void puts2(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; t += 2)
	{
		_putchar(str[t]);
	}

	_putchar('\n');
}
