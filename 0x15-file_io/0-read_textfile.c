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
	char *buf;
	ssize_t ret;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters + 1);
	 if (buf == NULL)
		 return (0);

	 rd = read(fd, buf, letters);
	 if (rd == -1)
		  return (0);

	 buf[rd] = '\0';
	 ret = write(STDOUT_FILENO, buf, rd);
	 free(buf);
	 close(fd);

	 return (ret);
}
