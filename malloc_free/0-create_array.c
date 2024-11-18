#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	/* Allocate memory for the array */
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	/* Initialize each element with the character c */
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

