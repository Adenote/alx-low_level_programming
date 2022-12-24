#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: this is an input
 *
 *
 */
void puts_half(char *str)
{
	int index, n, half;

	index = 0;

	while (str[index] != '\0');
	{
		index++;
	}
	if (index % 2 == 0)
	{
		for (half = index / 2; str[half] != '\0'; half++)
		{
			_putchar(str[half]);
		}
	}
	else if (index % 2)
	{
		for (n = (index - 1) / 2; n < index - 1; half++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}

