#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexa = 0x0;

	while (hexa <= 0xf)
	{
		putchar(hexa + '0x0');
		hexa = hexa + 0x1;
	}
	putchar('\n');
	return (0);
}
