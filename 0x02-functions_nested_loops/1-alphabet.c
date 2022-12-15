#include "main.h"

/**
 *print_alphabet - print prints the alphabet, in lowercase
 *@c: it's a character
 *@void: one opren
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
