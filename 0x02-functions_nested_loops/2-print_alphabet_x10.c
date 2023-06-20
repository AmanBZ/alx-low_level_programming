#include"main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
	int A = 'a';

	while (A <= 'z')
	{
		_putchar(A);
		A = A + 1;
	}

	_putchar('\n');
}

