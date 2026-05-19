#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[]){
    int before_read, after_read, fd;
    char buf[512];

    before_read = getreadcount();
    printf(1, "Initial read count accumulated during boot: %d\n", before_read);

    fd = open("README", 0);
    printf(1, "Reading the README file...\n");
    read(fd, buf, sizeof(buf));

    close(fd);

    after_read = getreadcount();
    printf(1, "Read count after reading the README file: %d\n", after_read);

    exit();
}