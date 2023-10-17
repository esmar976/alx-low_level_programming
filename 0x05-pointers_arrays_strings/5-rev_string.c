#include "main.h"

/**
*rev_string-Reverses a string.
*@s:Input string
*Return:String in reserve 
*/
void rev_string(char *s)
{
char rev = s[0];
int tab = 0;
int i;
while (s[tab] != '\0')
tab++;
for (i = 0; i < tab; i++)
{
tab--;
rev = s[i];
s[i] = s[tab];
s[tab] = rev;
}
}
