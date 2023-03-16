#include "main.h"
#include <stdlib.h>
/**
  * str_concat - concat 2 string
  * @s1:string1
  * @s2:string2
  * Return:char
  */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int index, len, new_index;

	len = new_index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0 ; s1[index] || s2[index]; index++)
	{
		len++;
	}
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
	{
		str[new_index] = s1[index];
		new_index++;
	}
	for (index = 0; s2[index]; index++)
	{
		str[new_index] = s2[index];
		new_index++;
	}
	return (str);
}
