#include "monty.h"
/**
 * f_pstr - Used to print a string at the top of the stack
 * @head: The head of the stack
 * @counter: this is the line number
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
