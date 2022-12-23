#include "main.h"
/**
  * reverse_array - reverse array
  * @a:array
  * @n:integer
  * Return:void
  */
void reverse_array(int *a, int n)
{
	int x, temp;

	for (x = 0; (x < (n - 1) / 2); x++)
	{
		temp = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = temp;
	}
}
