#include "main.h"
#include <stdio.h>

int main(void)
{
    char dest[98];
    char *src;
    int n;

    src = "Holberton School!\n";
    n = 9;
    _strncpy(dest, src, n);
    printf("%s\n", dest);
    return (0);
}
