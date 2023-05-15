#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and assign char
 * @size: size of array to be created
 * @c: The character to assign
 * Return: pointer to the created array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int a;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = c;

	return (array);
}
