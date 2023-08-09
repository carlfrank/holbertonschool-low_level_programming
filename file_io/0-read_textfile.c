#include "main.h"

/**
 * read_textfile - free's the alocated space of the list.
 *
 * @filename: the name of the file provided.
 * @letters: the letters that the text has.
 *
 * Return: pointer to node.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int Fd, amount;
	char *txt = malloc(sizeof(char) * letters);

	if (txt == NULL || filename == NULL)
	{
		return (0);
	}

	Fd = open(filename, O_RDONLY);
	if (Fd == -1)
	{
		return (0);
	}

	amount = read(Fd, txt, letters);
	txt[letters + 1] = '\0';

	write(STDOUT_FILENO, txt, amount);

	free(txt);
	close(Fd);
	return (amount);
}
