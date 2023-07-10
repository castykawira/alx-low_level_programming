#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file
* @filename: The name of the file
* @text_content: The text content to append
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
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

fd = open(filename, O_WRONLY | O_APPEND);
ret = write(fd, text_content, text_length);

if (fd == -1 || ret == -1)
return (-1);

close(fd);
return (1);
}
