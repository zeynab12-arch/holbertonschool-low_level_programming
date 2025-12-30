#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers from 0 to 9 using putchar.
 * Return: Always 0.
 */
int main(void)
{
	int n = 48; /* ASCII '0' */

	while (n <= 57) /* ASCII '9' */
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
