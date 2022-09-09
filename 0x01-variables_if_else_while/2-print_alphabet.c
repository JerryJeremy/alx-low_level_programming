#include <stdio.h>

/**
 * main - Let us print the alphabet in lowercase,
 * The next line is a new line
 * Return: Always 0
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}

