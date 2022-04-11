#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
        pid_t pid; //= 0;
        
        printf("Hi Rich\n");

        pid = fork();
        sleep(5);
        printf("Im Sleeping...shhhhhhhhhh %d\n",pid);
        if (pid == 0) {
                printf("I am the child. %d\n", pid);
        }
        if (pid > 0) {
                printf("I am the parent, the child is %d.\n", pid);
        }
        if (pid < 0) {
                perror("In fork():");
        }

        exit;
}
