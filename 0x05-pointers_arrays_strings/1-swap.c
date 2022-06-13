#include <stdio.h>

/**
 * swap_list-swap the value of  two integers
 * using two input parameters
 *
 * @a:tnput parameter 1
 * @b:input parameter 2
 *
 * Return:Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
