#include "monty.h"

/**
 * _div - Div the top two elements of the stack.
 * @stack: Is a pointer to stack.
 * @line_number: Is the number of line.
*/

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	if (!stack || !(*stack) || !node->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	node->next->n = node->next->n / node->n;
	pop(stack, line_number);

}
