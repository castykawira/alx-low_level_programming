#include "main.h"

/**
 * puts_half -a function that prints half of a string
 * @str: pointer to the string
 * Return: void
 */
void puts_half(char *str)
{
	int a, b;

	for (b = 0; str[b] != '\0'; b++)

	if (a % 2 == 0)
	{
		for (a = b / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}

	_putchar('\n');
}
