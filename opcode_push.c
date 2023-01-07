#include "monty.h"

/**
 * 
 * 
 * 
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
	if (_strspn(buffer, "1234567890-") != _strlen(buffer))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	n_node = (stack_t *) malloc(sizeof(stack_t));
	if (!n_node)
	{
		free(buffer);
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = n_node;
	*stack = n_node;
}
