#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to prints
 *
 * Return: on success 1
 * On error, - is returned, and error is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
