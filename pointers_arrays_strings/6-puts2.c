#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: The input string to process.
 */
void puts2(char *str)
{
	int i = 0;

	/* Loop runs only until it hits the null terminator '\0' */
	while (str[i] != '\0')
	{
		/* Print only when index is even (0, 2, 4, etc.) */
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	/* Print the final newline required by the project */
	_putchar('\n');
}
