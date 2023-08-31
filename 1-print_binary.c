#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, p = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			p++;
		}
		else if (p)
			_putchar('0');
	}
	if (!p)
		_putchar('1');
}
