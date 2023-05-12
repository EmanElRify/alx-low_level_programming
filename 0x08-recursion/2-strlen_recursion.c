#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int c;
	c = 0;
	if (*s != '\0')
	{
		_strlen_recursion(s+1);
		c++;
	}
	return (c);
}
