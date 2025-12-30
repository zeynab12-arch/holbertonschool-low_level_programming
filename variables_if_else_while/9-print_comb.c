#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers (0–9) separated by
 * ", " using only putchar (max 4 calls).
 * Return: Always 0.
 */
int main(void)
{
	int n = 48; /* ASCII '0' */

	while (n <= 57)
	{
		putchar(n);

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}

	putchar('\n');
	return (0);
}
