#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 * is written by hajar Makrini
 */

void print_alphabet(void)
{
	char lowerletter;

	for (lowerletter = 'a'; lowerletter <= 'z'; lowerletter++)
		_putchar(lowerletter);

	_putchar('\n');
}
