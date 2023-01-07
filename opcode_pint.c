#include "monty.h"

/**
 * inicio de la pila
 * 
 * 
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

	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

}
