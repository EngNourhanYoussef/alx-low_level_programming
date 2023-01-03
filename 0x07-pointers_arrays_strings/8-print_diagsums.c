#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - print sum of 2 digona
  * @a:int
  * @size:int size
  * Return:void
  */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i];
		a = a + size;
	}
	a = a - size;
	for (i = 0; i < size; i++)
	{
		s2 = s2 + a[i];
		a = a - size;
	}
	printf("%d, %d\n", s1, s2);
}
