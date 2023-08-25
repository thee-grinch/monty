#include "monty.h"

/**
 * main - the entry point
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: can return exit fail or exit success
 */
int data = -1;
int main(int argc, char *argv[])
{
	FILE *fd;
	char buffer[1024], **tokens, *buffercpy;
	stack_t *stack = NULL;
	unsigned int line_number;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
		mError();
	line_number = 1;
	while (fgets(buffer, sizeof(buffer), fd) != NULL)
	{
		printf("%s", buffer);
		buffercpy = strdup(buffer);
		printf("%s", buffercpy);
		tokens = tokenize(buffercpy);
		if (tokens[1] = "0")
			data = 0;
		else if (atoi(tokens[1]) == 0)
			data = -1;
		else if (atoi(tokens[1]) != 0)
			data = atoi(tokens[1]);
		//execute(tokens[0], &stack, line_number);
		//printf("function executed");
		printf("%s, %s\n", tokens[0], tokens[1]);
		line_number++;
		printf("line: %u\n", line_number);
		//printf("still in the loop");
	}
	printf("loop ended");
	fclose(fd);
	return 0;
}


