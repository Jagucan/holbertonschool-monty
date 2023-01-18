#include "monty.h"

/**
 *main - main of The monty program.
 *@argc: Is the number of arguments.
 *@argv: Is the arguments.
 *Return: Return int.
*/

int main(int argc, char **argv)
{
	FILE *file;
	char *buffer = NULL, *buff = NULL;
	size_t size = 0;
	ssize_t argument = 0;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	buffer = (char *) malloc(sizeof(char *) * size);
	if (!buffer)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	argument = getline(&buffer, &size, file);
	for (line_number = 1; argument != -1; line_number++)
	{
		buff = strtok(buffer, " \t\n");
		if (!buff)
		{
			argument = getline(&buffer, &size, file);
			continue;
		}
		get_opcodes(buff, &stack, line_number);
		argument = getline(&buffer, &size, file);
	}
	free(buffer);
	fclose(file);
	_free(&stack);
	return (argument);
}
