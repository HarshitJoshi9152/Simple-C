#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "[arg1] expected as an int\n");
        return 1;
    }

    int time = atoi(argv[1]);

    sleep(time * 60);

    //printf("time = %d\n", time);
    while(1) printf("\x07");
    return 0;
}
