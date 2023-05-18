#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		arr[a] = min++;

	return (arr);
}
