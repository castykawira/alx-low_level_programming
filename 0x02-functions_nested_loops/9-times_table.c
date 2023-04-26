#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int a, b, prod;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			prod = a * b;

			if (b == 0)
			{
				_putchar('0');
			}
			else if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
