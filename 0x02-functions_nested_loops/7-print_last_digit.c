#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: an integer number
 * Return: Last digit of a number
 */
int print_last_digit(long int n)
{
	int d;

	if (n < 0)
	{
		n = n * (-1);
	}
	d = n % 10;
	_putchar(d + '0');
	return (d);
}
