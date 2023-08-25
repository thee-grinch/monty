#include "monty.h"
/**
 * tokenize - tokenizes the array
 * buffer - the buffer to be tokenized
 * Return: the double pointer of the tokenised array
 */
char **tokenize(char *buffer)
{
	char **tokens;

	if (buffer == NULL)
		return (NULL);
	tokens = malloc(2 * sizeof(char *));
	if(!tokens)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	tokens[0] = strtok(buffer, " \t\n\r");
	tokens[1] = strtok(NULL, " \t\r\n");
	return (tokens);
}

