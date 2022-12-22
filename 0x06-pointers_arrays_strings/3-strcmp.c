#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the first string to be string
 *
 *Return: if str1 < str2, the negative difference of the unmatched char
 *	if str1 == strt2,0.
 *	if str1 > str2, the positive difference of the unmatchedchar
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
