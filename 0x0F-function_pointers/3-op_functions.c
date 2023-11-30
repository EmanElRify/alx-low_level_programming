#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: the first integer
 * @b: the second integer added to a
 * Return: the sum of two integers as an integer value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sabtracts two integers
 * @a: the Minuend
 * @b: the subtrahend integer
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return ( a - b);
}

/**
 * op_mul - multiply two integers
 * @a: the fist integer (multiplicand)
 * @b: the second integer (multiplicator)
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: dividend
 * @b: divisor
 * Return: the quotient of a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculated the modulus of two integers
 * @a: the dividend
 * @b: the divisor
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

