#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int i, c;

	c = 0;
	for (i = 0; *s != '\0'; i++)
	{
		c++;
	}
	return (c);
}
