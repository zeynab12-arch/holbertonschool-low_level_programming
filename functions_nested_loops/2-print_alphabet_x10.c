#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char *alphabet = "abcdefghijklmnopqrstuvwxyz\n";
int i;
for (i = 0; i < 10; i++)
{
int j = 0;
while (alphabet[j] != '\0')
{
_putchar(alphabet[j]);
j++;
}
}
}
