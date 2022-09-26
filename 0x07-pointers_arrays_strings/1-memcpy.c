#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: the char array to copy into
 * @src: the char array to copy from
 * @n: the number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *food;

	food = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (food);
}
