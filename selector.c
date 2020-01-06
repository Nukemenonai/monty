#include "monty.h"

extern char **opvector;

void (*selector(char *opstr))(stack_t **, unsigned int)
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
	return (0);
}
