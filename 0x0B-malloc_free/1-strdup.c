#include "main.h"
#include <stdlib.h>

/**
  * _strdup - a function that returns a pointer to a newly allocated
  *  space in memory,which contains a copy of the string given
  * as a parameter.
  * @str:string
  * Return:char
  */
char *_strdup(char *str)
{
	char *s;
	int i, c;

	i = c = 0;
	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		c++;
	}
	s = malloc(sizeof(char) * (c + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	s[c] = '\0';
	return (s);
}
