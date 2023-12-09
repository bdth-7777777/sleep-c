#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <getopt.h>

int main(int argc, char *argv[]) {
    int sleep_time = 0;
    int opt;

    while ((opt = getopt(argc, argv, "s:")) != -1) {
        switch (opt) {
            case 's':
                sleep_time = atoi(optarg);
                break;
            default:
                fprintf(stderr, "Usage: sleep-c -s <milliseconds>\n");
                exit(EXIT_FAILURE);
        }
    }

    if (sleep_time <= 0) {
        fprintf(stderr, "Sleep time must be a positive integer\n");
        exit(EXIT_FAILURE);
    }

    Sleep(sleep_time);

    return 0;
}