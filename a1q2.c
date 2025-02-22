#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define BUFSIZE 256

int main(int argc, char** argv) {
    if (argc != 2) { 
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }

    char cmd[BUFSIZE];
    if (snprintf(cmd, BUFSIZE, "wc -c < %s", argv[1]) >= BUFSIZE) {
        fprintf(stderr, "Command too long.\n");
        return -1;
    }

    system(cmd);
    return 0;
}