#include <stdio.h>

/**
  * main- Entry point
  * Return: should be 0 to success
  */

int main(void)
{

	char character;
	int integer;
	long along;

	long long 2long;

	float float1;

	printf("Size of a char: %lu bytes\n", sizeof(character));
	printf("Size of an int: %lu bytes\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(along));
	printf("Size of a long long int: %lu bytes\n", sizeof(2long));
	printf("Size of a float: %lu bytes\n", sizeof(float1));

	return (0);
}
