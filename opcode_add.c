#include "monty.h"

/**
 * 
 * 
*/

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	if (!stack || !(*stack) || !node->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}

	else
	{
		node->next->n = node->next->n + node->n;
		pop(stack, line_number);
	}

}
