#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: Pointer to the newly created array containing all values from min
 *         to max, or NULL if min > max or if memory allocation fails.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, range;

	if (min > max)
		return (NULL);

	/* Calculate the range (number of elements) */
	range = max - min + 1;

	/* Allocate memory for the array */
	array = malloc(range * sizeof(int));
	if (array == NULL)
		return (NULL);

	/* Initialize array with values from min to max */
	for (i = 0; i < range; i++)
		array[i] = min + i;

	return (array);
}
