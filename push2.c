#include "monty.h"

/**
 * push - add node at the end of double linked list.
 *
 * @stack: pointer to the first node
 * @line_number: data to populate the node
 * Return: the pointer to the new node
 */
stack_t *push(stack_t **stack, unsigned int line_number)
{

	stack_t *new;
	stack_t *last = *stack;
	int num = atoi(opvector[1]);


	(void) line_number;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		dprintf(STDERR_FILENO,"Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new->n = num;
	new->next = NULL;
	if (*stack == NULL)
	{
		*stack = new;
		new->next = NULL;
		last = new;
		return (new);
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
		new->prev = last;

		return (new);
	}
}
