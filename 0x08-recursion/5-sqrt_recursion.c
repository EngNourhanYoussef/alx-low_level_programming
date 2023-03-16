#include "main.h"

/**
  * checker - checks for the square root
  * @x:int
  * @y:int
  *
  * Return: int
  */
int checker(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	else
	{
		return (checker(x + 1, y));
	}
}
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: integer to find sqrt of
  * Return: natural square root or -1
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (checker(1, n));
}
