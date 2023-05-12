#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 * Return: the factorial of a given number
 */
int factorial(int n)
{
	return(factorial(n - 1) * n);
}
