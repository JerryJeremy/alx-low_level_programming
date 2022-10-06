#include "main.h"

/**
 * malloc_checked - To allocate memory
 * Description - Malloc fails terminate process and return 98
 * @b: unsigned int
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
