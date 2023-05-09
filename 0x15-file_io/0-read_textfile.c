#include "main.h"
#include <stdlib.h>
/*nora jeout */

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *stuck;
	ssize_t of;
	ssize_t w;
	ssize_t r;

	of = open(filename, O_RDONLY);
	if (of == -1)
		return (0);
	stuck = malloc(sizeof(char) * letters);
	r = read(of, stuck, letters);
	w = write(STDOUT_FILENO, stuck, r);

	free(stuck);
	close(of);
	return (w);
}

