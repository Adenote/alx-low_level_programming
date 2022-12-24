#include "main.h"

/**
 * puts2 - function that prints every other first character
 *
 * @str: this is a string
 *
 * Return: void
 */

void puts2(char *str)
{

	int = i, 0;

	while (str[i] != '\n')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar ('\n');
}

