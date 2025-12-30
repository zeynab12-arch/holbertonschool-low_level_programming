#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
int i = 0;
int j;
char sep[] = " \t\n,;.!?\"(){}";

while (str[i] != '\0')
{
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= ('a' - 'A');
}

j = 0;
while (sep[j] != '\0')
{
if (str[i] == sep[j] &&
str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] -= ('a' - 'A');
}
j++;
}
i++;
}

return (str);
}
