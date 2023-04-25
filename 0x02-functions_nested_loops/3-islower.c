#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
