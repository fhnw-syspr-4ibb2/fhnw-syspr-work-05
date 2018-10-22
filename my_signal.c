#include <stdio.h>
#include <stdlib.h>

int my_system(const char *command) {
    return system(command); // TODO
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("usage: my_system command");
    } else {
        my_system(argv[1]);
    }
}
