#include "monty.h"

/**
 * pop - removes the last element of a stack
 *
 * @stack: the pointer to the stack
 * @line_number: line of the file being processed.
 *
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	stack_t *repl;

	(void) line_number;
	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO,
			"L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}

	while (temp->next != NULL)
		temp = temp->next;

		if (temp->next == NULL)
		{
			repl = temp->prev;
			repl->next = NULL;
			free(temp);
		}
}
