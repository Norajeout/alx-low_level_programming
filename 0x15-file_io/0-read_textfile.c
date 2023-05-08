#include "main.h"
/* nora jeout */
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: parameter
 * @letters: parameter
 * Return: result
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int dod, dmg, meta;
	char *stck;

	if (!filename)
		return (0);
	dod = open(filename, O_RDONLY);
	dod = open(filename, O_RDONLY);
	if (dod < 0)
		return (0);
	stck = (char *) malloc(letters * sizeof(char));
	if (!stck)
		return (0);
	dmg = read(dod, stck, letters);
	if (dmg < 0)
	{
		free(stck);
		return (0);
	}
	stck[dmg] = '\0';
	meta = write(STDOUT_FILENO, stck, dmg);
	if (meta < 0)
	{
		free(stck);
		return (0);
	}
	free(stck);
	close(dod);
	return (meta);
}
