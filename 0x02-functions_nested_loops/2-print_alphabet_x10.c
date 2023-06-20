#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int A = 1, B;

	while (A <= 10)
	{
		B = 'a';

		while (B <= 'z')
		{
			_putchar(B);
			B = B + 1;
		}

		_putchar('\n');
		A = A + 1;

	}


}
