#include "variadic_functions.h"

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 4, "Jay", "Django", NULL, "Python");
    print_strings(NULL, 3, "Hello", NULL, "World");
    print_strings(", ", 0);
    return (0);
}

