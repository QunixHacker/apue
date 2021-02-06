//
// Created by 赵建强 on 2021/2/6.
//

#include "../apue.h"

int
main(void)
{
    printf("hello world form process ID : %ld\n", (long)getpid());
    exit(0);
}