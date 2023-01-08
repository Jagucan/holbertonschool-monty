#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @stack: Is a pointer to stack.
 * @line_number: Is the number of line.
*/

void push(stack_t **stack, unsigned int line_number)
{
	char *buffer;
	stack_t *n_node;
	int n;

	buffer = (char *) malloc(sizeof(char *));
	if (!buffer)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	buffer = strtok(NULL, " \t\n");
	if (!buffer)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	n = atoi(buffer);
	if (_strspn(buffer, "0123456789+-") != _strlen(buffer))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	n_node = (stack_t *) malloc(sizeof(stack_t));
	if (!n_node)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *stack;

	if (*stack)
	{
		(*stack)->prev = n_node;
		n_node->next = *stack;
	}
	*stack = n_node;
}
