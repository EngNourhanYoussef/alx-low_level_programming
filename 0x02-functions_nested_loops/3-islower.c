#include "main.h"
/**
  * _islower - check whether a character is
  * a lowercase letter from the English alphabet.
  * @c: the character to check
  * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
