#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the list
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	int allcount = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		allcount++;
		h = h->next;
	}
	return (allcount);
}
