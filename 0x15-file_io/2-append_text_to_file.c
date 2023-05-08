#include "main.h"
#include <stdio.h>

/**
* append_text_to_file - A function that appends
* text at the end of a file
* @filename: file name
* @text_content:NULL terminated string to add at the end of the file
* Return: 1 on success, -1 on failure
**/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res_wr, lenght;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		lenght = 0;
		while (*(text_content + lenght) != '\0')
			lenght++;
		res_wr = write(fd, text_content, lenght);
		if (res_wr == -1)
		{
			close(fd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
