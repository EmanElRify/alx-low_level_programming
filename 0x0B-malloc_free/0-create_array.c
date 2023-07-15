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
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(size * sizeof(char));
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			arr[0] = c;
		}
	}
}
