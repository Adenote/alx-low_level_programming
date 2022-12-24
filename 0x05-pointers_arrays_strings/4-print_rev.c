#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 *
 * @s: this is a string
 * Return: nothing
 */

void print_rev(char *s)
{
	int index;

	while (s[index])
		index++;
	while (index--)
	{
		_puchar(s[index]);
	}
	_putchar('\n');
}
