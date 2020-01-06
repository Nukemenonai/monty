#include "monty.h"

/**
 * pall - prints the elements of a linked list
 *
 * @h: the pointer to stack's first element
 * Return: size of the list.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	if (stack == NULL)
		exit(EXIT_FAILURE);

	while (*stack != NULL)
	{
		printf("%d", (*stack)->n);
		*stack = (*stack)->next;
	}

}
