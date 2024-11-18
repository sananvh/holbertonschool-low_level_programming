#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments and prints the result.
 * @argc: Argument count (number of command-line arguments)
 * @argv: Argument vector (array of strings containing program name and
 * arguments)
 *
 * Return: 0 if successful, 1 if incorrect number of arguments is provided
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
