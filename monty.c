#include "monty.h"

char **opvector;

/**
 * main - test the code for operation codes
 *
 * @ac: argument count.
 * @av: vector of strings
 * Return: 0 on succes, exit failure on error.
 */

int main(int ac, char **av)
{
	void (*f)(stack_t **, unsigned int);
	FILE *fd;
	char *buffer;
	unsigned int line = 1;
	stack_t *head = NULL;

	buffer = malloc(100 * sizeof(char));
	fd = fopen(av[1], "r");
	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (fd == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(buffer, 100, fd) != NULL)
	{
		opvector = strsplit(buffer);
		f = selector(opvector[0]);
		if (f == NULL)
		{
			dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n",
				line, opvector[0]);
		}
		f(&head, line);
		line++;
	}

	fclose(fd);
	_frees(opvector);
	free_dlistint(head);
	free(buffer);
	return (0);
}
