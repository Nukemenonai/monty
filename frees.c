#include "monty.h"

/**
 * _frees - function that frees a double pointer
 * @str: double pointer
 */
void _frees(char **str)
{
	size_t len = 0;

	if (str == NULL)
		return;

	while (str[len])
	{
		free(str[len]);
		++len;
	}

	if (str[len] == NULL)
		free(str[len]);

	free(str);
}
