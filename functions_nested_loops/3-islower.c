#include "main.h"
#include <stdio.h> /* For testing output only */

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'g';
	int result;

	result = _islower(c);
	printf("Is '%c' lowercase? %d\n", c, result);

	c = 'G';
	result = _islower(c);
	printf("Is '%c' lowercase? %d\n", c, result);

	return (0);
}
