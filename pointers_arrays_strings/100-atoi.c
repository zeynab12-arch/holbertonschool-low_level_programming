#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int num = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		/* sign handling before number */
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			num = num * 10 + (s[i] - '0');

			/* if next char is not digit, break */
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		else if (found)
			break;

		i++;
	}

	if (found == 0)
		return (0);

	return (sign * num);
}
