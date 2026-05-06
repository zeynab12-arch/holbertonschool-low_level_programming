#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    /* src-dən kopyala */
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* əgər src qısadırsa, qalan yerləri \0 ilə doldur */
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return (dest);
}