#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: elements array
 * @size: array size
 * @cmp: comparasion func
 * Return: index of result, if not -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);

	return (-1);
}