#include "monty.h"

/**
 * get_opcodes - Select the corret function.
 * @op: Is the opcode.
 * Return: Return a pointer.
*/

void get_opcodes(char *op, stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	int i;
	for (i = 0; ops[i].opcode; i++)
	{
		while (_strcmp(op, ops[i].opcode) == 0)
		{
			ops[i].f(stack, line_number);
			return;
		}

	}

	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, op);
	exit(EXIT_FAILURE);
}

