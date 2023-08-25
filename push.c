#include "monty.h"
/**
 * push - adds an item to the top of a linked list
 * @stack: the pointer to the stack
 * @line_number: the line number being executed
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	printf("function called\n");

	if (data == -1)
	{
		fprintf(stderr, "L %u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = data;
	data = -1;
	if (!stack)
		new->prev = NULL;
	else
		new->prev = *stack;
	new->next = NULL;
	*stack = new;
}
