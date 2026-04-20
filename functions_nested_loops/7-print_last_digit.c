#include "main.h"


/**
 * print_last_digit - last dig
 * @res: num to check
 * Return: last dig
 */

int print_last_digit(int i);
{
    int m;

    m = i % 10
    if (m < 0)
        m *= -1;

    _putchar(m + '0');
    return (m);
}
