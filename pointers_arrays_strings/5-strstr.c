#include "main.h"
#include <stddef.h> /* NULL üçün */

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to beginning of located substring in haystack,
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;

if (needle[0] == '\0')
return (haystack);

for (i = 0; haystack[i] != '\0'; i++)
{
j = 0;
while (needle[j] != '\0' && haystack[i + j] == needle[j])
j++;

if (needle[j] == '\0')
return (&haystack[i]);
}

return (NULL);
}
