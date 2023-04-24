#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 'o');
	}
	for (n = 0; n < 6; n++)
	{
		putchar(n + 'a');
	}
	putchar('\n');

	return (0);
}
