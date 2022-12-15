#include "main.h"

/**
 * function - check the lower code.
 *  Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}

