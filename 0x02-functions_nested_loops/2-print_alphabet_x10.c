#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int t;
	char lc;

	for (t = 0; t < 10; t++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}

