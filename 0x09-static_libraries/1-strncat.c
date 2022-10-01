#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: it is a string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointing the result to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
