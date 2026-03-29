#include <stdio.h>
/**
* main - Entry point
* Return: Always 0
*/

int mian(void)
{
	char m;
	char n;

	m = 'a';

	while(m < 'z' && n < 'Z')
	{
		putchar(m);
		putchar(n);
		m++;
		n++;
	}

	putchar('\n');
	return (0);
}
