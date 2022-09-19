#include "main.h"

/**
 * swap_int - check the code
 * @a: input integer pointer
 * @b: input integer pointer
 * Return: void
 *
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
