#include "monty.h"

/**
 * pall - Prints all the values on the stack.
 * @stack: Is a pointer to stack.
 * @line_number: Is the number of line.
*/

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;
	(void) line_number;
	
	if (stack || *stack)
	{
		while (node)
		{
			printf("%d\n", node->n);
			node = node->next;
		}
	}
}
