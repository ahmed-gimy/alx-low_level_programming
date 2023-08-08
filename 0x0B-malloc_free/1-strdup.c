#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: a copy of the string
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
