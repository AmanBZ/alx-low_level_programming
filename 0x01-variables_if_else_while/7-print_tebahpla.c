#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
        char g = 'z';

        while (g <= 'a')
        {
                putchar(g);
                --g;
        }
        putchar('\n');

        return (0);
}
