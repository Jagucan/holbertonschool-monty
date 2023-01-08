#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Is a pointer to stack.
 * @line_number: Is the number of line.
*/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;
	int n = 0;

	if (!stack || !(*stack) || !(node->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		if (node)
			_free(stack);
		exit(EXIT_FAILURE);
	}

	n = node->next->n;
	node->next->n = node->n;
	node->n = n;
}
