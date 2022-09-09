#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 start from 0,
 * new line, use putchar
 * Return: Always 0
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
