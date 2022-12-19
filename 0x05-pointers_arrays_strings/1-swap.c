#include "main.h"
/**
  * swap_int - switches value
  * @a: First value to swap.
  * @b: Second value to swap.
  */
void swap_int(int *a, int *b)
{
	int place;

	place = *a;
	*a = *b;
	*b = place;
}
