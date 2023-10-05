#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates an array of chars.
 * @size: the size of the array
 * @c: the char that initialize the array
 * Return: the address of the array
 * /
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int n = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (0);
	}
	while (n < size)
	{
		*(p + n) = c;
		n++;
	}
	*(p + n) = '\0';
	return (p);
}
