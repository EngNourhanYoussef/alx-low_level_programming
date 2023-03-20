#include "main.h"
/**
  * *_strcpy - copies string pointed to by src to buffer pointed to by dest
  * @dest: the pointer to a string
  * @src: the pointer to a buffer
  * Return: the value of the pointer to dest.
  */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

