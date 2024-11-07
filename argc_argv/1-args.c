#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: Argument count (number of command-line arguments)
 * @argv: Argument vector (array of strings containing program name and
 * arguments)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
