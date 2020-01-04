#include "monty.h"

/**
 * main - test the code for operation codes
 *
 * @ac: argument count.
 * @av: vector of strings
 * Return: 0 on succes, exit failure on error.
 */

int main(int ac, char **av)
{
	FILE *fd;
	char buffer[100];

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

	while (fgets(buffer, 100, fd)!= NULL)
	{
		puts(buffer);
	}

	fclose(fd);
	return (0);
}
