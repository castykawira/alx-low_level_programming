#include "main.h"

int _sqrt(int n, int a);

/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt_recursion - calculates the natural square root
 * @n: number to calculate the sqaure root of
 * @a: iterate number
 *
 * Return: the natural square root
 */
int actual_sqrt_recursion(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (a);

	return (_sqrt(n, a + 1));
}
