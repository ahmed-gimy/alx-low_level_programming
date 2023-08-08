#include "main.h"

/**
 * *create_array - creat an array of chars,
 * initialized it with char
 * @size: array size
 * @c: char
 * return: pointer to array
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
