#include "main.h"

/**
 * _pow_recursion - returns the value of an integer x raised to power y
 * @x: an integer
 * @y: an integer
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
			

