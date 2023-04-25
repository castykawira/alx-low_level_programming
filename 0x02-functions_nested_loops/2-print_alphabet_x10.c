#include "main.h"

/**
 * print_alphabet_x10(void) - prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int t;
	char pa;

	for (t = 0; t < 10; t++)
	{
		for (pa = 'a'; pa <= 'z'; pa++)
			_putchar(pa);
		_putchar('\n');
	}
}
