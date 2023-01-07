#include "monty.h"

/**
 *
 * 
 * 
*/

int main(int argc, char **argv)
{
	FILE *file;
	char *buffer = NULL;
	char *buff = NULL;
	size_t size = 0;
	ssize_t argument;
	unsigned int line_number = 1;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	buffer = (char *) malloc(sizeof(char *) * size);
	if (!buffer)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	buff = (char *) malloc(sizeof(char *) * size);
	if (!buff)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	argument = getline(&buffer, &size, file);
	if (argument == -1)
		return(-1);

	while (argument != -1)
	{
		buff = strtok(buffer, " \t\n");
		if (!buff)
			break;

		get_opcodes(buff, &stack, line_number);
		argument = getline(&buffer, &size, file);
		line_number++;
		continue;
	}
	free(buffer);
	fclose(file);
	return (EXIT_SUCCESS);
}
