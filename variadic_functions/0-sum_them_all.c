#include "variadic_functions.h"
#include <stdarg.h> /* Required for variadic functions */

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: The sum of all parameters, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args; /* To store the variable argument list */
	unsigned int i; /* Iterator for the arguments */
	int sum = 0; /* Accumulator for the sum */

	if (n == 0)
		return (0);

	va_start(args, n); /* Initialize the argument list */

	for (i = 0; i < n; i++)
		sum += va_arg(args, int); /* Retrieve the next argument */

	va_end(args); /* Clean up the argument list */

	return (sum);
}

