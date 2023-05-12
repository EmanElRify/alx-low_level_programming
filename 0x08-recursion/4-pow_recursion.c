#include "main.h"

/**
 * _pow_recursion - raise a value to a power
 * @x: the raised value
 * @y: the power value
 * Return: the result of x powered to y
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
