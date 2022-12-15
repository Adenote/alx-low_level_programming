#include "main.h"
#include <stdio.h>


/**
 * _abs - There is no such thing as absolute value in this world
 * @t: is an integer
 * Return: always 0
 */
int _abs(int t)
{
	if (t >= 0)
		return (t);
	else
		return (-t);
}
