#include <stdio.h>

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
}

/**
 * main - source code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
