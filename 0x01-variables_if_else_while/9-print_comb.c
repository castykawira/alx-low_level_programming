#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				for (d = c + 1; d <= 9; d++)
				{
					putchar(a | 48);
					putchar(',');
					putchar(b | 48);
					putchar(',');
					putchar(c | 48);
					putchar(',');
					putchar(d | 48);
					putchar('\n');
				}
			}
		}
	}

	return (0);
}
