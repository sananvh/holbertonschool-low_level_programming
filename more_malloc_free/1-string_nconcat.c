#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate.
 *
 * Return: Pointer to the newly allocated memory containing s1,
 *         followed by the first n bytes of s2, null-terminated.
 *         If malloc fails, returns NULL.
 *         If n is greater or equal to the length of s2, uses the entire s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, len1 = 0, len2 = 0;

	/* Treat NULL as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Use entire s2 if n is greater than or equal to its length */
	if (n >= len2)
		n = len2;

	/* Allocate memory for concatenated string */
	concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy the first n bytes of s2 into concat */
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	/* Null-terminate the concatenated string */
	concat[i] = '\0';

	return (concat);
}
