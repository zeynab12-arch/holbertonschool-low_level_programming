#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - fayl yaradır və istəyə uyğun mətn yazır
 * @filename: yaradılacaq faylın adı
 * @text_content: fayla yazılacaq mətn (NULL ilə bitən sətir)
 *
 * Return: uğurlu olarsa 1, səhv olarsa -1
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t bytes_written;
    size_t len = 0;

    if (filename == NULL) // Fayl adı verilməyibsə
        return (-1);

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600); 
    /* O_WRONLY - yazmaq üçün açılır
       O_CREAT - fayl yoxdursa yaradır
       O_TRUNC - fayl varsa mövcud mətn silinir
       0600 - icazələr: rw------- */
    if (fd == -1)
        return (-1);

    if (text_content != NULL) // Mətn verilibsə
    {
        while (text_content[len])
            len++; // Mətnin uzunluğunu hesablayırıq

        bytes_written = write(fd, text_content, len);
        if (bytes_written == -1)
        {
            close(fd);
            return (-1);
        }
    }

    if (close(fd) == -1) // Faylı bağlaya bilmiriksə
        return (-1);

    return (1);
}
