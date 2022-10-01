#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: it will buffer the array
 * @b: it is a constant byte
 * @n: stands for the number of bytes to be filled in the memory
 * Description: Fill the n byte of the memory area
 * pointed to by s with b constant byte
 * Return: Pointer s
 */

char *_memset(char *s, char b, unsigned int n)

{
	int i;

	i = 0;
		while (n > 0)
		{
			s[i]  = b;
			i++;
			n--;
		}
	return (s);
}
