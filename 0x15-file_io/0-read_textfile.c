#include "main.h"

/**
 * read_textfile- reads a text file and prints it to the POSIX
 * standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 * Return: The actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread;
	char buf[BUFFER_SIZE];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while (letters > 0)
	{
		nread = read(fd, buf, BUFFER_SIZE);
		if (nread == -1)
			break;
		if (nread == 0)
			break;
		if (write(STDOUT_FILENO, buf, nread) != nread)
			break;
		letters -= nread;

	}
	close(fd);
	return (nread);
}
