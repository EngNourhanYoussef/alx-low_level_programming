#include "main.h"
#include "stdio.h"
/**
  * print_array - Print an array up to n.
  * @a: the array of elements
  * @n: the number of elements of the array *a.
  */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
		x++;
	}
	putchar('\n');
}

