 #include "main.h"

/**
 * create_file - free's the alocated space of the list.
 *
 * @filename: the name of the file provided.
 * @text_content: the letters that the text has.
 *
 * Return: pointer to node.
 */
int create_file(const char *filename, char *text_content)
{
	int OP, WR, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	if (OP == -1 || WR == -1)
	{
		return (-1);
	}

	close(OP);

	return (1);
}
                                