#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
 * main - interpreter
 * @argc: arguments
 * @argv: location
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *line;
	FILE *fd;
	size_t s = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int i = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	bus.fd = fd;
	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		line = NULL;
		read_line = getline(&line, &s, fd);
		bus.line = line;
		i++;
		if (read_line > 0)
			execute(line, &stack, i, fd);
		free(line);
	}
	free_dlistint(stack);
	fclose(fd);
return (0);
}
