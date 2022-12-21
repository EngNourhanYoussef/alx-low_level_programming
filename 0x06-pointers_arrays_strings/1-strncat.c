#include "main.h"
/**
  * _strncat - concatenates two strings
  * @dest:char dest
  * @src: char src
  * @n:length int
   * Return:char
   */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}
