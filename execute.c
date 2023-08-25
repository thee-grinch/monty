#include "monty.h"
/**
 * initialize - initializes an instruction pointer
 * @pointer: the pointer to be initialized
 * @opcode: the opcopde part
 * @func: the function pointer
 */
void initialize(instruction_t *pointer, char *opcode, void (*func)(stack_t**, unsigned int))
{
	pointer->opcode = opcode;
	pointer->f = func;
}
/**
 * execute - executes a function
 * @opcode: the opcode to be excecuted
 * @stack: the stack to be excecuted
 * @line_number: the number of the line
 *
 */
void (*execute(char *opcode, stack_t **stack, unsigned int line_number))(stack_t **stack, unsigned int line_number)
{
	instruction_t *instPush, *instPall, *instArr[2];
	int i;
	void (*f)(stack_t **, unsigned int);

	instPush = malloc(sizeof(instruction_t));
	if (!instPush)
		mError();
	printf("allocated 1\n");
	initialize(instPush, "push", push);
	instPall = malloc(sizeof(instruction_t));
	if (!instPall)
		mError();
	
	printf("allocated 2\n");
	initialize(instPall, "pall", pall);
	printf("expecting error\n");
	instArr[0] = instPush;
	printf("arrsy i\n");
	instArr[1] = instPall;
	for (i = 0; instArr[i] != NULL; i++)
	{
		if (strcmp(instArr[i]->opcode,opcode) == 0)
		{
			printf("code runing\n");
			f = instArr[i]->f;
			printf("123\n");
			f(stack, line_number);
			printf("fsfd\n");
		}
		if (instArr[i + 1] == NULL)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
			exit(EXIT_FAILURE);
		}
	}
	printf("No error\n");
}




