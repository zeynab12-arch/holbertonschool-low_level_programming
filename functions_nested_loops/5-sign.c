#include "main.h"

int print_sign(int n);
{
    int i;
    if (n > 0)
    {
        _putchar('+')
        return (1);
    }
    else if(n == 0)
    {
        _putchar('-')
        return (-1);
    }
    else
    {
        _putchar('0')
        return(0);
    }
}
