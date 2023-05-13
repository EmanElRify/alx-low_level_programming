#include <stdio.h>
#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 * @n: integer to get its absolute value
 * Return: Absolute value
 */
int _abs(int n)
{
	int abs_;

	if (n >= 0)
	{
		abs_ = n;
		return (abs_);
	}
	else
	{
		abs_ = n * (-1);
		return (abs_);
	}
}
