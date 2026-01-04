#include "main.h"

/**
 * _is_prime - checks recursively if n is divisible by any number
 * @n: number to check
 * @i: current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int _is_prime(int n, int i)
{
if (i * i > n)
return (1); /* no divisors found, n is prime */
if (n % i == 0)
return (0); /* divisible by i, not prime */
return (_is_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (_is_prime(n, 2));
}
