//
// Created by 赵建强 on 2021/2/6.
//

#include "../apue.h"
#include <dirent.h>

int main(int argc, char *argv[]) {
    //    printf("hi there");
    DIR *dp;
    struct dirent *dirp;

    if (argc != 2) {
        printf("usage: ls directory_name");
        exit(127);
    }
    if ((NULL == (dp = opendir(argv[1])))) {
        printf("can not open %s", argv[1]);
        exit(126);
    }
    while ((NULL != (dirp = readdir(dp)))) {
        printf("%d, %s\n", dirp->d_namlen, dirp->d_name);
    }
    closedir(dp);
    exit(0);
}