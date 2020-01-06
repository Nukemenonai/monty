#include "monty.h"

/**
 * add - adds the top two elements of the stack
 *
 * @stack: the pointer to the stack
 * @line_number: line of the file being processed.
 *
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	stack_t *repl;
	int sum = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short",
			line_number);
		exit(EXIT_FAILURE);
	}

	while (temp->next != NULL)
		temp = temp->next;

	sum = temp->n;

	if (temp->next == NULL)
	{
		repl = temp->prev;
		repl->n += sum;
		repl->next = NULL;
		free(temp);
	}
}
