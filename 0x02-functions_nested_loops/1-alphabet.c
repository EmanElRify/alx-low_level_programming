#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a function to print alphabets in a lowercase
 *
 * Return: No return
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return;
}
