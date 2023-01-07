#include "monty.h"

/**
 * 
 * 
 * 
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
	else
		free(node);
}
