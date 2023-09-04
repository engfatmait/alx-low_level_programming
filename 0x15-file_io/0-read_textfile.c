#include "main.h"
/**
 * read_textfile - reads a text file and prints to the POSIX standard output.
 * @filename: pointer to file name
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print,
 * 0 if any error occured
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buf;
	size_t nr, nw;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	nr = read(f, buf, letters);
	nw = write(STDIN_FILENO, buf, nr);
	if (nr == -1 || nw == -1)
		return (0);

	close(f);
	free(buf);
	return (nw);

}
