#include "monty.h"

/**
 * _free - free the stack
 * @stack: Is a pointer to stack.
*/

void _free(stack_t **stack)
{
	stack_t *node = *stack;

	while (node)
	{
		if (node->next)
		{
			node = node->next;
			free(node->prev);
		}

		free(node);
		break;
	}
}
