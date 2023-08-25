#include "monty.h"
/**
 * mError - prints a malloc error
 */
void mError()
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
