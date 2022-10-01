#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y, z;

	x = 0;
	z = 0;
	while (haystack[x] != '\0')
	{
		y = 0;
		while (needle[y + z] != '\0' && haystack[x + z] != '\0'
		       && needle[y + z] == haystack[x + z])
		{
			if (haystack[x + z] != needle[y + z])
				break;
			z++;
		}
		if (needle[y + z] == '\0')
			return (&haystack[x]);
		y++;
		x++;
	}

	return (NULL);
}

