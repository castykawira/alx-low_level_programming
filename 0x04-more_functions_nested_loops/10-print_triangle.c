#include "main.h"

/**
 * print_triangle - prints a triangle of a given size
 * @size: The size of the squares triangle
 * Return: void
 */
void print_triangle(int size)
{
	int j, k, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			l = size - j - 1;
			for (k = 0; k < size; k++)
			{
				if (k < l)
					_putchar(' ');
				else
					 _putchar('#');
			}
			_putchar('\n');
		}
	}
}
