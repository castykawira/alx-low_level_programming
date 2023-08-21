#include <stdio.h>

/**
 * add - Adds two integers and returns the result.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The sum of a and b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * subtract - Subtracts the second integer from the first
 * and returns the result
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of subtracting b from a.
 */
int subtract(int a, int b)
{
	return (a - b);
}

/**
 * multiply - Multiplies two integers and returns the result.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The product of a and b.
 */
int multiply(int a, int b)
{
	return (a * b);
}

/**
 * divide - Divides the first integer by the second and returns the result.
 * @a: The numerator.
 * @b: The denominator (must be non-zero).
 * Return: The result of dividing a by b.
 */
int divide(int a, int b)
{
	return (a / b);
}
