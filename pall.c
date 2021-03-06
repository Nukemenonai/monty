#include "monty.h"

/**
 * pall - prints the elements of a linked list
 *
 * @stack: the pointer to stack's first element
 * @line_number: line of the file being processed.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void) line_number;
	if (stack == NULL)
		exit(EXIT_FAILURE);


	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	while (temp->prev != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
	}
	printf("%d\n", temp->n);
}
