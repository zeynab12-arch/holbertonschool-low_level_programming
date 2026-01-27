#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char c;
	int j;
	float f;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				printf("%s%c", separator, c);
			}
			if (format[i] == 'i')
			{
				j = va_arg(args, int);
				printf("%s%d", separator, j);
			}
			if (format[i] == 'f')
			{
				f = va_arg(args, double);
				printf("%s%f", separator, f);
			}
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
			}
			separator = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
