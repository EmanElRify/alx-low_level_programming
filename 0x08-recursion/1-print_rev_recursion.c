#include "main.h"

/**
 * print_rev_recursion - prints a string in reverse
 * @s: a string to be reversed
 * Return: None
 */
void print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		print_rev_recursion(s-1);
		_putchar('\n');
		return;
	}
}
