#include "main.h"

/**
<<<<<<< HEAD
  * _atoi - convert to a int
  * @s:string
  * Return:int
  */
int _atoi(char *s)
{
	int i, j, n, x;
=======
 * _atoi - convert to a int
 * @s:string
 * Return:int
 */

int _atoi(char *s)
{
int i, j, n, x;
>>>>>>> c1c8614277faa82e3a0fcc2a8f8c54665da8ec22

	i = n = 0;
	x = 1;
	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			x *= -1;
		i++;
	}
	j = i;
	while ((s[j] >= '0') && (s[j] <= '9'))
	{
		n = (n * 10) + x * ((s[j]) - '0');
		j++;
	}
	return (n);
}
