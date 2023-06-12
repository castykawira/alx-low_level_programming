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
text_length = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content != NULL)
ret = write(fd, text_content, text_length);

else
ret = write(fd, "", 0);
close(fd);

return (1);
}
