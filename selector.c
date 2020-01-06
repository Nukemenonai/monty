#include "monty.h"


/**
 * selector - selects the appropriate function for main
 *
 * @opstr: the string to evaluate
 * Return: pointer to the function
 */

void (*selector(char *opstr))(stack_t **, unsigned int)
{
	int i = 0;
	instruction_t opcodes[] = {
		{"pall", pall},
		{"push", push},
		{"pop", pop},
		{"pint", pint},
		{NULL, NULL}
	};

	while (opcodes[i].opcode != NULL)
	{
		if (strcmp(opcodes[i].opcode, opstr) == 0)
		{
			return (opcodes[i].f);
		}
		i++;
	}
	return (0);
}
