#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer to start counting
 * Return: no return value
 */
void print_to_98(int n)
{
	int r;

	while (n < 99)
	{
		r = n;
		if (n < 0)
		{
			_putchar('-');
			r = -n;
		}
		if (r < 10)
		{
			_putchar(r + '0');
		}
		else
		{
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
		}
		if (r == 98)
			break;
		_putchar(',');
		_putchar(' ');
		n++;
	}
	_putchar('\n');
}
