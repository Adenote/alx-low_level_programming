#include "main.h"
/**
 * _strcpy - function that copies the string pointed
 * @desr: this is a charater
 * @src: this is a character
 *
 * Return: this return copy
 */

char _strcpy(char *dest, char *src)
{
	char *start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
