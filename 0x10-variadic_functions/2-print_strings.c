#include "variadic_functions.h"
#include <string.h>

/**
 * print_strings - a function that prints strings followed by a newline
 * @separator: the string to be printed between strings
 * @n: the number of strings
 * Return: None
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char *);
		if (x != NULL)
		{
			printf("%s", x);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
