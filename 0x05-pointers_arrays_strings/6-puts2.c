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

	int = i;
	i = 0;

	while (str[i] != '\n')
	{
		if (1 % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar ('\n');
}

