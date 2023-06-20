#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int A = 'a', B;

	while (A <= '10')
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
