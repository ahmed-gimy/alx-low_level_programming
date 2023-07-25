#include "main.h"

/**
  * _strlen - returns the length of a string
  *
  * @s: string parameter
  *
  * Return: string length
  */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		++length;
	}
	return (length);
}
