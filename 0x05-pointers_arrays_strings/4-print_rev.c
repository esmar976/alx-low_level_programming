#include "main.h"
/**
*print_rev-prints a string, in reverse, followed by a new line.
*@s:string
*Return: 0
*/
void print_rev(char *s)
{
int longl = 0;
int j;
while (*s != '\0')
{
longl++;
s++;
}
s--;
for (j = longl; j > 0; j--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
