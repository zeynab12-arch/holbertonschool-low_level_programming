#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - faylı digər fayla kopyalayır
 * @argc: arqumentlərin sayı
 * @argv: arqumentlərin siyahısı
 *
 * Return: 0 uğurlu olanda
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    ssize_t r_bytes, w_bytes;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", argv[2]);
        if (close(fd_from) == -1)
            dprintf(2, "Error: Can't close fd %d\n", fd_from);
        exit(99);
    }

    while ((r_bytes = read(fd_from, buffer, 1024)) > 0)
    {
        w_bytes = write(fd_to, buffer, r_bytes);
        if (w_bytes != r_bytes)
        {
            dprintf(2, "Error: Can't write to %s\n", argv[2]);
            if (close(fd_from) == -1)
                dprintf(2, "Error: Can't close fd %d\n", fd_from);
            if (close(fd_to) == -1)
                dprintf(2, "Error: Can't close fd %d\n", fd_to);
            exit(99);
        }
    }

    if (r_bytes == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        if (close(fd_from) == -1)
            dprintf(2, "Error: Can't close fd %d\n", fd_from);
        if (close(fd_to) == -1)
            dprintf(2, "Error: Can't close fd %d\n", fd_to);
        exit(98);
    }

    if (close(fd_from) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return (0);
}
