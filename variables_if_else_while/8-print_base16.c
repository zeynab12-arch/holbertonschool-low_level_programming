#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all hexadecimal digits in lowercase
 * (0-9 then a-f) using only putchar (three calls allowed).
 * Return: Always 0.
 */
int main(void)
{
	int n = 48; /* ASCII '0' */
	int a = 97; /* ASCII 'a' */

	while (n <= 57) /* 0-9 */
	{
		putchar(n);
		n++;
	}

	while (a <= 102) /* a-f */
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
