#include "monty.h"

/**
 * pall - Removes the top element of the stack.
 * @stack: Is a pointer to stack.
 * @line_number: Is the number of line.
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
