#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int c, d;

	for (c = 0; c < 9; c++)
	{
		for (d = c + 1; d <= 9; d++)
		{
			putchar(c + '0');
			putchar(d + '0');
			if (c != 8 || d != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
