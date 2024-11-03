#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0, start;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Determine the starting point for the second half */
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}

	/* Print from the starting point to the end of the string */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
