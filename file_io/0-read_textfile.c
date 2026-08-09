#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytesRead, bytesWrit;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	bytesRead = read(fd, buff, letters);
	if (bytesRead == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	bytesWrit = write(STDOUT_FILENO, buff, bytesRead);
	if (bytesWrit != bytesRead)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (bytesRead);
}
