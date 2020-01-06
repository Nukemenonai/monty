#include "monty.h"

/**
 * nop - doesn't do anything
 *
 * @stack: the pointer to the stack
 * @line_number: line of the file being processed.
 *
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	exit_(EXIT_SUCCESS);
}
