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
	unsigned int i, len;

	i = 0;
	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	while ((p[i] = str[i]) != '\0')
	{
		i++;
	}
	return (p);
}
