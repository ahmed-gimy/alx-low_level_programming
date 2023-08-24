#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: name of the list
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	int allcount = 0;

	while (h)
	{
		allcount++;
		h = h->next;
	}
	return (allcount);
}
