#include "main.h"
/**
  * _strlen - lenght of string
  * @s:char
  * Return:int
  */
int _strlen(const char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		continue;
	return (x);
}
/**
  * binary_to_uint - convert binary to unsigned int
  * @b:string from 0 and 1 else NULL
  *
  * Return:unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 1;
	unsigned int d = 0;
	int c;
	unsigned int len;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
		{
			return (0);
		}
		if (b[c] == '1')
		{
			d += a;
		}
		a *= 2;
	}
	return (d);
}
