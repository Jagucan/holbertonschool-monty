#include "monty.h"

/**
 * get_opcodes - Select the corret opcode.
 * @op: Is the opcode.
 * @stack: Is a pointer to stack.
 * @line_number: Is the number o the line.
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
		{"swap", swap},
		{"mul", mul},
		{"div", _div},
		{NULL, NULL}
	};

	int i = 0;

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
