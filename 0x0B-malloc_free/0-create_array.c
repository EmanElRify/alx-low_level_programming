#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates an array of chars, and initializes it with a specific char.
 * @size: the size of the array
 * @c: the char that initialize the array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return ('\0');
	}
	char *p;
	unsigned int n;

	p = (char *)malloc(sizeof(char) * size);
	if (p == '\0')
	{
		return (0);
	}
	while (n < size)
	{
		*(p + n) = c;
		i++;
	}
	*(p + n) = '\0';
	return(p);
}