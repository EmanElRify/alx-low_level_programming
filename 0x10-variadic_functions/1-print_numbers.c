#include "variadic_functions.h"
#include <string.h>

/**
 * print_numbers - a function that prints the numbers followed by a newline
 * @separator: the string to be printed between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
