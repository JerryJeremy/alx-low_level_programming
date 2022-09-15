#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Prototype: void print_numbers(void)
 * Return: null/void
 */

void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
