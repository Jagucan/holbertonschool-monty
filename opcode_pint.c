#include "monty.h"

/**
 * pint - Prints all the values on the stack.
 * @stack: Is a pointer to stack.
 * @line_number: Is the number of line.
*/

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	if (stack || *stack)
	{
		while (node)
		{
			printf("%d\n", node->n);
			break;
		}

	}

	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);

}
