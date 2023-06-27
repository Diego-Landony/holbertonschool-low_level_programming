#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	/* Check for negative sign */
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	/* Iterate through the string */
	while (s[i])
	{
		/* Check for digits */
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* Multiply the number by 10 and add the current digit */
			num = num * 10 + (s[i] - '0');
		}
		else if (num > 0)
		{
			/* If a non-digit character is encountered after parsing digits, break */
			break;
		}

		i++;
	}

	return (num * sign);
}
