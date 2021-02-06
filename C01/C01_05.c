//
// Created by 赵建强 on 2021/2/6.
//

#include "../apue.h"

int main(void) {
    int c;

    printf("C01_05.c\n");
    while((c=getc(stdin)) !=EOF){
        if (putc(c, stdout) ==EOF){
            err_sys("output error");
        }
    }
    if (ferror(stdin))
    {
        err_sys("input error");
    }

    exit(0);
}