#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse (z to a)
 * using only putchar (twice).
 * Return: Always 0.
 */
int main(void)
{
	int c = 122; /* ASCII 'z' */

	while (c >= 97) /* ASCII 'a' */
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
