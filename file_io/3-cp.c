#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

/**
 * error_exit - Prints an error message to stderr and exits with a code
 * @code: Exit code
 * @msg: Error message
 * @file: File name or file descriptor
 */
void error_exit(int code, const char *msg, const char *file)
{
    if (code == 100)
        dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
    else
        dprintf(STDERR_FILENO, "%s %s\n", msg, file);
    exit(code);
}

/**
 * main - Copies the content of a file to another file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, exits on failure
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, rd_bytes, wr_bytes, close_status;
    char buffer[1024];

    if (argc != 3)
        error_exit(97, "Usage: cp", argv[0]);

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Error: Can't read from file", argv[1]);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
        error_exit(99, "Error: Can't write to", argv[2]);

    while ((rd_bytes = read(fd_from, buffer, 1024)) > 0)
    {
        wr_bytes = write(fd_to, buffer, rd_bytes);
        if (wr_bytes != rd_bytes)
            error_exit(99, "Error: Can't write to", argv[2]);
    }

    if (rd_bytes == -1)
        error_exit(98, "Error: Can't read from file", argv[1]);

    close_status = close(fd_from);
    if (close_status == -1)
        error_exit(100, "", "1"); /* file descriptor for fd_from */

    close_status = close(fd_to);
    if (close_status == -1)
        error_exit(100, "", "2"); /* file descriptor for fd_to */

    return 0;
}
