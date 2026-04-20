#include main.h
/**
 * _isalpha - entry point
 * @c: char to check
 * Return: 1 if char is letter, 0 otherwise
 */

int _isalpha(int c);
{
    char c;
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        Return(1);
    }
    else
    {
        Return(0);
    }
}
