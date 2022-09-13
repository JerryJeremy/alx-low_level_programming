#include "main.h"

/**
*print_alphabet - alphatbet a-z
*Return: 0 when the code is successful
*Description - Must use _putchar twice
*/

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
