#include <fcntl.h>
#include <stdlib.h>

int main() {

    int fd, sz;

    fd = open("writetext.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0) {
        perror("feil ved skriving av filen"); exit(1);
    }
    sz = write(fd, "Tester lang tekst for å se om det er noen forskjell i systemkall", 65);

    close(fd);

}
