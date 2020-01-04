#include "monty.h"

/**
 * strsplit - splits a string into an array of substrings
 *
 * @buffer: the string passed
 *
 * Return: a double pointer to the new array
 */

char **strsplit(char *buffer)
{
	int i, len;
	char **res;
	char *tmp;
	char *dupl = strdup(buffer);

	len = strlen(dupl);
	res = malloc((len + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	tmp = strtok(dupl, " ");
	i = 0;

	while (tmp != NULL)
	{
		res[i] = malloc(strlen(tmp) + 1);
		if (res[i] == NULL)
		{
			free(res[i]);
			return (NULL);
		}
		strcpy(res[i], tmp);
		tmp = strtok(NULL, " ");
		++i;
	}
	res[i] = NULL;
	return (res);
}
