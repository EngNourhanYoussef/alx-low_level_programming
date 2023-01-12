#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  **string_nconcat - a function that concatenates two strings.
  *@s1 : pointer to string
  *@s2 : pointer to string
  *@n : integer
  *Return: pointer to string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int x, y, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
	{
		;
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
		;
	}
	if (n >= y)
		n = y;
	c = malloc(sizeof(char) * (x + n + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		c[i] = s1[i];
	}
	for (j = x; j < x + n; j++)
	{
		c[j] = s2[j - x];
	}
	c[j] = '\0';
	return (c);
}

