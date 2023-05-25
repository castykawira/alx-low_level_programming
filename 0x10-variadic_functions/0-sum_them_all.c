#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of its parameters
 * @n: The number of paramters passed to the function
 *@...: The variadic arguments
 * Return: The sum of the parameters
 *         Otherwise if n is 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
