#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates an array of chars.
 * @size: the size of the array
 * @c: the char that initialize the array
 * Return: the address of the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *)malloc(size * sizeof(char));
	if (p == 0)
	{
		return (NULL);
	}
	*pr = c;
	return (NULL);
}
