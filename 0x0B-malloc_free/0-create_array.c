#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - a function that creates an array of char
 * @size: the size of the array
 * @c: the fist elemet of the array
 * Return: a pointer to the array or Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
