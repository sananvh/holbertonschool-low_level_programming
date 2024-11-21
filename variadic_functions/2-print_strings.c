#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h> /* Include this header for va_start, va_arg, va_end */

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    char *str;

    va_start(args, n); /* Initialize the argument list */

    for (i = 0; i < n; i++)
    {
        str = va_arg(args, char *); /* Retrieve the next string */

        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);

        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }

    va_end(args); /* Clean up the argument list */
    printf("\n");
}

