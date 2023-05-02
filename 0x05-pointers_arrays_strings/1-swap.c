#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: interger to swap
 * @b: interger to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{

	int n;

	n = *a;
	*a = *b;
	*b = n;
}
