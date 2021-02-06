//
// Created by 赵建强 on 2021/2/6.
//

#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <string.h>

#define MAXLINE 100

void
err_sys(char *message){
    printf("%s\n", message);
    exit(127);
}

void
err_ret(char *message, char* buf){
    printf(message, buf);
}