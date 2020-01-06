#include "monty.h"

/**
 * pint - prints last item of stack
 *
 * @stack the pointer to the stack
 * @line_number line of the file being processed.
 *
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void) line_number;
	if (*stack == NULL)
		exit(EXIT_FAILURE);

	while (temp->next != NULL)
		temp = temp->next;

		if (temp->next == NULL)
		{
		        printf("%d\n", temp->n);
		}
}
