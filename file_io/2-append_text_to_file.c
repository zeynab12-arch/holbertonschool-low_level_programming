#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - faylın sonuna mətn əlavə edir
 * @filename: faylın adı
 * @text_content: fayla əlavə olunacaq mətn (NULL ilə bitən sətir)
 *
 * Return: uğurlu olarsa 1, səhv olarsa -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t bytes_written;
    size_t len = 0;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[len])
            len++;

        bytes_written = write(fd, text_content, len);
        if (bytes_written == -1)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
