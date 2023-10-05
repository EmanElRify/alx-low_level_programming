#include <stdlib.h>
#include "main.h"

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 * @str: the string to be copied
 * Return:  a pointer to a newly allocated space (Success), Null (Error)
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int n, len;

	n = 0;
	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++:
	}
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	while ((p[n] = str[n]) != '\0')
		n++;

	return (p);
}
