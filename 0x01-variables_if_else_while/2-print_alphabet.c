#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c < 'z')
	{
		printf("%c", c);
		c++;
	}
	return (0);
}
