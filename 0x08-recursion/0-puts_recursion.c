#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @*s: a string to be printed
 * Return: no return value
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
