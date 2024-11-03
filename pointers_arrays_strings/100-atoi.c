#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer, accounting for sign and overflow
 * @s: Pointer to the string to be converted
 *
 * Return: The integer converted from the string, or INT_MAX/INT_MIN if overflow
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;

			/* Check for overflow before multiplying by 10 */
			if (result > (INT_MAX - (*s - '0')) / 10)
				return (sign == 1 ? INT_MAX : INT_MIN);

			result = result * 10 + (*s - '0');
		}
		else if (started)
			break;
		s++;
	}

	return (result * sign);
}

