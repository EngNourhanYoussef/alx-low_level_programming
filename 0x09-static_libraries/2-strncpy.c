#include "main.h"
/**
  * _strncpy - copie a string
  * @dest:char
  *  @src:char
  * @n:int
  * Return:char
  */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}


