#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 * Return: the factorial of a given number
 */
int factorial(int n)
{
	if (n > = 0)
	{
		if ((n == 1) || (n == 0))
		{
			return (1);
		}
	return(factorial(n - 1) * n);
	}
	else
	{
		return (-1);
}
