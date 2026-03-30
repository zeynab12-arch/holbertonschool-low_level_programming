#include <stdio.h>

/**
* main - Entry point
* Return: Always 0
*/

int main(void)
{
	int m;
	char n;
	for (m = 0; m < 10; m++)
	{
		putchar(m + '0');
	}
	for(n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
