#include "monty.h"

/**
 * 
 * 
 * 
*/

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node = NULL;

	if (stack || *stack)
	{
		node = *stack;
		*stack = (*stack)->next;
		free(node);
	}

	else
	{
		fprintf(stderr, "1L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

}
