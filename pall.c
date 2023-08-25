#include "monty.h"
/**
 * pall - prints all values in the stack starting with the one at the top
 * @stack: pointer to the stack
 * @line_number: the number of the line
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *buffer;

	(void)line_number;
	if(stack && *stack)
	{
		buffer = *stack;
		while (buffer)
		{
			printf("%d", buffer->n);
			buffer = buffer->prev;
		}
	}
}
