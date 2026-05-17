#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: char
 * Return: int
 */
int _strlen_recursion(char *s)
{
    int i;
    if (*s == '\0')
    {
        return i;
    }
    i++;
    _strlen_recursion(s + 1);

}