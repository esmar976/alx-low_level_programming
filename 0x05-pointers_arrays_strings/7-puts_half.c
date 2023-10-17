#include "main.h"
/**
*puts_half-A function that prints half of a string 
*if add len, n = (length_of_the_string -1) / 2
*@str:input 
*Return:half of input
*/
void puts_half(char *str)
{
int a, n, longl = 0;
longl = 0;
for (a = 0; str[a] != '\0'; a++)
longl++;
n = (longl / 2);
if ((longl % 2) == 1)
n = ((longl + 1) / 2);
for (a = n; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
