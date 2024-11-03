#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Capitalize first letter if it's lowercase */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;

	while (str[i] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i - 1] == separators[j] && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
				break;
			}
		}
		i++;
	}

	return (str);
}
