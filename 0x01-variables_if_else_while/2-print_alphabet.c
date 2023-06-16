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
	char g = 'a';

	while (g <= 'z')
	{
		putchar(g);
		g = g + 1;
	}
	putchar("\n");

	return (0);
