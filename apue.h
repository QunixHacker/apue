//
// Created by 赵建强 on 2021/2/6.
//

#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

int
err_sys(char *message){
    printf("%s\n", message);
    exit(127);
}