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
            putchar(i + '0');
            putchar(j + '0');

            if (!(i == 8 && j == 9))  /* sonuncudan sonra , boşluq lazım deyil */
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return (0);
}
