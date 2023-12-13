#include "search_algos.h"

/**
 * binary_search_recursion - Searches for a value in a sorted array of integers
 * using binary search with recursion
 * @array: Pointer to the first element of the array to search in
 * @value: value to search for
 * @low: The starting index of the search range
 * @high: The ending index of the search range
 *
 * Return: The index where the value is located, or -1 if the value is not
 * present in the specified range
 */
int binary_search_recursion(int *array, int value,
			    size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
							mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
							low, mid));
	}

	return (-1);
}

/**
 * advanced_binary - Searches for the first occurrence of a value in a sorted
 * array of integers using binary search with recursion
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: value to search for
 *
 * Return: The index where the value is located, or -1 if the value is not
 * present in the array or if the array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}
