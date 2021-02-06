//
// Created by 赵建强 on 2021/2/6.
//

#include "../apue.h"
#include <sys/wait.h>

static void sig_int(int);

int main(void) {
    char buf[MAXLINE];
    pid_t pid;
    int status;

    if (signal(SIGINT, sig_int) == SIG_ERR) {
        err_sys("signal error");
    }

    printf("%%");
    while (fgets(buf, MAXLINE, stdin) != NULL) {
        if (buf[strlen(buf) - 1] == '\n') {
            buf[strlen(buf) - 1] = 0;
        }
        if ((pid = fork()) < 0) {
            err_sys("fork error");
        } else if (pid == 0) {
            execlp(buf, buf, (char *) 0);
            err_ret("could not execute: %s\n", buf);
            exit(127);
        }
        if ((pid = waitpid(pid, &status, 0)) < 0) {
            err_sys("waitpid error");
        }
        printf("CHILD_PROC_STATUS: %d\n", status);
        printf("%ld_%%", (long) pid);

    }
    exit(0);
}

void
sig_int(int signo) {
    printf("interrupt\n%%");
}