#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Find the end of dest string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append src to dest */
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* Add the terminating null byte */
	dest[dest_len] = '\0';

	return (dest);
}
