#include "monty.h"

/**
 * free_dlistint - frees a list.
 *
 * @head: the pointer to the first node.
 */

void free_dlistint(stack_t *head)
{
	if (head != NULL)
		free_dlistint(head->next);
	free(head);
}
