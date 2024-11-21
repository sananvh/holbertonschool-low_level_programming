#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format provided.
 * @format: A string of format specifiers:
 *          c - char, i - integer, f - float, s - string.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, print_sep = 0;
	char *str, *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				print_sep = 1;
				break;
		}
		if (!print_sep)
			sep = ", ";
		print_sep = 0;
		i++;
	}

	va_end(args);
	printf("\n");
}

