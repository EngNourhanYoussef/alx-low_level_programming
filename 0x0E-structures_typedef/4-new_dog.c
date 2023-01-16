#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: returns pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len, x;
	dog_t *doggy;

	name_len = owner_len = 0;
	while (name[name_len++])
	{
		;
	}
	while (owner[owner_len++])
	{
		;
	}
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}
	doggy->name = malloc(name_len * sizeof(doggy->name));
	if (doggy == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < name_len; x++)
	{
		doggy->name[x] = name[x];
	}
	doggy->age = age;
	doggy->owner = malloc(owner_len * sizeof(doggy->owner));
	if (doggy == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < owner_len; x++)
	{
		doggy->owner[x] = owner[x];
	}
	return (doggy);
}
