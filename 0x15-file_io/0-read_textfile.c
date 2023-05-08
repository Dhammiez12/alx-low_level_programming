#include "main.h"
#include <stdio.h>

/**
* read_textfile - A function that reads a text file
* and prints it to the POSIX standard output
* @filename: file name
* @letters: number of letters
* Return: number of letters or 0 if fails
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, res_rd, res_wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	res_rd = read(fd, buffer, letters);
	if (res_rd == -1)
	{
		free(buffer);
		return (0);
	}
	res_wr = write(STDOUT_FILENO, buffer, res_rd);
	if (res_wr == -1 || res_rd != res_wr)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (res_wr);
}
