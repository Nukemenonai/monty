#include "monty.h"

/**
 * main - test the code for operation codes
 *
 *
 *
 *
 */

int main(int ac, char **av)
{


	int fd = open(av[1]);

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s", av[1]);
		exit(EXIT_FAILURE);
	}

	fclose(fd)
	return (0);
}
