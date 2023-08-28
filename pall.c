#include "monty.h"
/**
 * f_pall - palls the stack
 * @head: this is the head of the stack
 * @counter: line number
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
