#include <stdio.h>

/**
 * main - prints all possible combinations of two different digits
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');  /* birinci rəqəm */
			putchar(j + '0');  /* ikinci rəqəm */
			putchar((i == 8 && j == 9) ? '\n' : ','); /* ',' və ya '\n' */
			putchar((i == 8 && j == 9) ? 0 : ' ');    /* boşluq və ya heç nə */
		}
	}
	return (0);
}
