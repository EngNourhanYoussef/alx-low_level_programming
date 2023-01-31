#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - Frees a listint_t list.
  * @head: A pointer to the head of the listint_t list to be freed.
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
