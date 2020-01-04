#include "monty.h"


/* int push(stack_t **stack, unsigned int elem) */
/* { */
/* 	stack_t *new; */

/* 	new = malloc(sizeof(stack_t)); */
/* 	if (new == NULL) */
/* 	{ */
/* 		dprintf(STDERR_FILENO,"Error: malloc failed"); */
/* 		exit(EXIT_FAILURE); */
/* 	} */
/* 	new->n = elem; */

/* 	while (*stack != NULL) */
/* 		*stack = (*stack)->next; */

/* 	(*stack)->next = new; */
/* 	new->prev = *stack; */
/* 	return (0); */
/* } */
