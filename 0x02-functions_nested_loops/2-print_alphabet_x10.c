#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * is written by hajar Makrini
 */
void print_alphabet_x10(void)
{
	char ten;
	int i;

	i = 0;

	while (i < 10)
	{
		ten = 'a';
		while (ten <= 'z')
		{
			_putchar(ten);
			ten++;
		}
		_putchar('\n');
		i++;
	}
}
