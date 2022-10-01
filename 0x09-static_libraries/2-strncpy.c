#include "main.h"

/**
 * _strncpy - to copy a string
 * @dest: it is a string destination
 * @src: it is a string
 * @n: number of chars to copy
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
