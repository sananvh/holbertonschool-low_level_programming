#include <stdio.h>

/**
 * main - Prints the name of the program, followed by a new line.
 * @argc: Argument count (unused)
 * @argv: Argument vector (array of strings containing program name and arguments)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;  /* Unused parameter */

	printf("%s\n", argv[0]);
	return (0);
}

