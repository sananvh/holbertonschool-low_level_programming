#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	for (n = 0; n < 6; n++)
		putchar(n + 'a');
	putchar('\n');

	return (0);
}

