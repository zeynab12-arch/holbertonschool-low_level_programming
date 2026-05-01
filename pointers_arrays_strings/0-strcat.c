nano "main.h"
char *_strcat(char *dest, char *src);
/**
* _strcat - concanetates two strings
* Return: dest
*/
{
    int i = 0;
    int j = 0;

    while (dest[i] != 0)
        {
            i++
        }
    while (src[j] != 0)
        {
            dest[i] = src[j];
            i++;
            j++;
        }

