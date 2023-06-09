#include "main.h"

/**
* create_file- a function that creates a file
* @filename: the file to be created
* @text_content: The text content to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd;
int ret;
int text_length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (text_length = 0; text_content[text_length];)
text_length++;
}

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
ret = write(fd, text_content, text_length);

if (fd == -1 || ret == -1)
return (-1);

close(fd);

return (1);
}
