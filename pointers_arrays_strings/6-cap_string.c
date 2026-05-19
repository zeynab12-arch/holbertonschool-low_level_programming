#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to modify
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i;
	int j;
	int is_sep;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 0;

	while (str[i] != '\0')
	{
		is_sep = 0;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (i == 0 || str[i - 1] == sep[j])
				is_sep = 1;
		}

		if (is_sep == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

		i++;
	}

	return (str);
}
