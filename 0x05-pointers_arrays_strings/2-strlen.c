#include "main.h"
/**
 *_strlen-Returns the length of a string
 * 
 *Return:length
 */

int _strlen(char *s)
{
int longl = 0;
while (*s != '\0')
{
longl++;
s++;
}
return (longl);
}
