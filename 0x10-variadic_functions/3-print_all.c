#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: None
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *x;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 's':
				x = va_arg(args, char *);
				if (x == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", x);
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
		}
		if (format[i + 1] != '\0' && (format[i + 1] == 'i' || format[i + 1] == 'c'
					|| format[i + 1] == 's' || format[i + 1] == 'f') &&
				(format[i] == 'i' || format[i] == 's' || format[i] == 'f'
				|| format[i] == 'c'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
