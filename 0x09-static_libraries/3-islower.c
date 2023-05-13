#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: a character to be checked
 * Return: 0 when it is a lowercase, 1 when it's an uppercase
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
