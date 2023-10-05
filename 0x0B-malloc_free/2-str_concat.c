#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: the fisrt string
 * @s2: the second string to be added
 * Return: a pointer to the newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i = 0, len_1 = 0;
	unsigned int j = 0, len_2 = 0;

	while (s1[len_1])
	{
		len_1++;
	}
	while (s2[len_2])
	{
		len_2++;
	}
	p = (char *) malloc(sizeof(char) * (len_1 + len_2 + 1);
	if (p == NULL)
		return (NULL);
	while (s1 && (i < len_1))
	{
		p[i] = s1[i];
		i++;
	}
	while (s2 && (i < len_1 + len_2))
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	p[i] = '\0'
	return (p);
}
