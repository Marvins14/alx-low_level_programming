#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - Function that reads a textfile and
 * prints it to the POSIX standard output
 * @filename: pointer to the filename
 * @letters: Number of letters to be printed
 * Return: Actual number of letters it could read and print
 * or 0 if filename is NULL, file cant be opened or read
 * or if fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t writecount, readcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	readcount = read(fd, buffer, letters);
	if (readcount == -1)
		return (0);
	writecount = write(STDOUT_FILENO, buffer, readcount);
	if (writecount == -1 || writecount != readcount)
		return (0);
	free(buffer);
	close(fd);
	return (writecount);
}
