#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 * Return: size of list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h = malloc(sizeof(list_t));

	if (!head || !new_h == NULL)
		return (NULL);
	if (str)
	{
		new_h->str = strdup(str);
		if (!new_h->str)
		{
			free(new_h);
			return (NULL);
		}
		new_h->len = _strlen(new_h->str)
	}

	new_h->next = *head;
	*head = new_h;

	return (new_h);

}
