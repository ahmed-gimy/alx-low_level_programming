#include "main.h"

/**
 * *create_array - create an array of chars,
 * description: and initialized it with char.
 * @size: array size
 * @c: char
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
