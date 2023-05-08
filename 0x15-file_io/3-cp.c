#include "main.h"
#include <stdio.h>
#define BUF_SIZE 1024

/**
 * _error - Reads a file for errors
 * @e: Error
 * @filename: file
 */

void _error(int e, char *filename)
{
	if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * cp - A program that copies the content of a file to another file
 * @file_from: file to copy
 * @file_to: destination file.
 * Return: 1 on success, -1 on failure.
 */

void cp(char *file_from, char *file_to)
{
	int fd_read, res_rd, fd_wr, res_wr;
	char *buffer[1024];

	fd_rd = open(file_from, O_RDONLY);
	if (fd_rd < 0)
		_error(98, file_from);

	fd_wr = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_wr < 0)
	{
		close(fd_rd);
		_error(99, file_to);
	}
	do {
		res_rd = read(fd_read, buffer, 1024);
		if (res_rd < 0)
			_error(98, file_from);

		res_wr = write(fd_write, buf, res_rd);
		if (res_wr < res_rd)
			_error(99, file_to);
	}	while (res_wr == 1024);
	if (close(fd_rd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_rd);
		close(fd_wr);
		exit(100);
	}
	if (close(fd_wr) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_wr);
		exit(100);
	}
}

/**
 * main - A program that copies the content of a file to another file
 * @argc: Argument count
 * @argv: argument vector
 * Return: 0 on success, -1 if error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
