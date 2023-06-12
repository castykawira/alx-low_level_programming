#include "main.h"

/**
* main- Entry point of the program
* @argc: The number of command-line arguments
* @argv: The array of command-line arguments
* Return: 0 on success, or the corresponding exit code on failure
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to;
char buf[1024];
ssize_t nread;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
while ((nread = read(fd_from, buf, 1024)) > 0)
{
write(fd_to, buf, nread);
}
if (nread == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
