#include "monty.h"


void (*selector(char *opstr))(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	instruction_t opcodes[] = {
		{"pall", pall},
		{"push", push},
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

	return(NULL);
}
