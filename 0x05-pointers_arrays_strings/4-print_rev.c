#include "main.h"
/**
 *print_rev -  function that prints a string, in reverse
 *
 *@s: this is a string
 */

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index--)
	{
		-puchar(s[index]);
	}
	-putchar('\n');
}
