#include "main.h"
/**
  * rev_string - Reverses a string.
  * @s: The string to be reversed.
  */
void rev_string(char *s)
{
	int inx, len;
	char arr[500];

	inx = 0;
	len = 0;

	while (s[inx] != '\0')
	{
		arr[inx] = s[inx];
		inx++;
	}
	inx--;
	while (inx >= 0)
	{
		s[inx] = arr[len];
		inx--;
		len++;
	}
	s[len] = '\0';
}

