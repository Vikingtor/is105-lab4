#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int main()// Main class of type int
{
	// Parameters of type int
	int fd, sz;
	// Char stores characters and letters,
        // we allocate 300 bytes.
	char *buf = (char *) calloc(300, sizeof(char));
	// Opens readtext.txt and stores it's content in parameter fd
	fd = open("readtext.txt", O_RDONLY);
	// If content of fd is less then 0 (there is no content)
	if (fd < 0)
	{
		// Returns an error message
		perror("feil ved lesing af fil"); exit(1);
	}
	// 
	sz = read(fd, buf, 300);
	printf("Gjorde et kall til read(%d, buf, 300). Returnerte at %d bytes ble lest.\n", fd, sz);
	printf("Bytes som ble lest var: %s\n", buf);
	close(fd);
}
