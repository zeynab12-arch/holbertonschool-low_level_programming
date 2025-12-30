#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
int i = 0, sign = 1, num = 0;

while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
if (num > (2147483647 - (s[i] - '0')) / 10)
return (sign == 1 ? 2147483647 : -2147483648);
num = num * 10 + (s[i] - '0');
i++;
}
return (num *sign);
}
