#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array
 * @array: The array to search in
 * @size: size of elements in array
 * @cmp: pointer to the function used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
