#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an array of chars
  * @size:unssigned int
  * @c:char
  * Return:char
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	if (size == 0)
		return (NULL);
	x = malloc(size * sizeof(char));
	if (x == Null)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
}
