#include <stdio.h>

/**
 * main - Print the lowercase alphabet in reverse.
 *followed by a new line
 * return: Always 0 (Success)
 */
int main(void)
{
        int ch;

        for (ch = 'z'; ch >= 'a'; ch--)
        {
                putchar(ch);
        }
        putchar('\n');
        return (0);
}
~                   
