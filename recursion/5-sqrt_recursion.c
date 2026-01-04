#include "main.h"

/**
 * _sqrt_helper - checks for natural square root recursively
 * @n: number to find sqrt of
 * @i: current candidate
 *
 * Return: natural square root or -1 if none
 */
int _sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns natural square root of n
 * @n: number
 *
 * Return: sqrt of n or -1 if no natural sqrt
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}
