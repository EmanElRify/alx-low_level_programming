#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int i, c;
	if (*s != '\0')
	{
		_strlen_recursion(s+1);
		c++;
	}
	return (c);
}
