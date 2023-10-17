#include "main.h"
/**
 * puts2 - function should print only one character out of two 
 * starting with the first one
 * @str: input 
 * return: print
 */
void puts2(char *str)
{
int longl = 0.
int t = 0;
char *y = str;
int z;
while (*y != '\0')
{
y++;
longl++;
}
t = longl - 1;
for (z = 0; z <= t; z++)
{
if (z % 2 == 0)
{
_putchar(str[z]);
}
}
_putchar('\n');
}
