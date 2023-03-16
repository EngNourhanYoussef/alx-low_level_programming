#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - Frees a listint_t list.
  * @head: A pointer to the head of the listint_t list to be freed.
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
