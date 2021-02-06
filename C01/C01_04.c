//
// Created by 赵建强 on 2021/2/6.
//

#include "../apue.h"

#define BUFFSIZE 4096

int
main(void) {
    int n;
    char buf[BUFFSIZE];

    printf("\nSTDIN_FD:%d\n", STDIN_FILENO);
    printf("STDOUT_FD:%d\n", STDOUT_FILENO);

    while ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0) {
        if (write(STDOUT_FILENO, buf, n) != n) {
            err_sys("write error");
        }
    }

    if (n < 0) {
        err_sys("read error");
    }
    exit(0);
}