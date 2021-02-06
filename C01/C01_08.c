//
// Created by 赵建强 on 2021/2/6.
//

#include "../apue.h"
#include <errno.h>

int main(int argc, char *argv[]) {

    fprintf(stderr,"EACCES: %s\n", strerror(EACCES));
    errno = ENOENT;
    perror(argv[0]);
    printf("\n=%s=\n", argv[0]);
    exit(0);
}

