#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @c: this is the first entry
 * @d: this is the seconrd entry
 *
 */

void swap_int(int *c, int *d)
{
	int changed;

	changed = *c;
	*c = *d;
	*d = changed;
}
