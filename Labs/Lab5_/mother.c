#include <stdio.h>
#include <stdlib.h>
//#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main (int argc, char **argv)
{
// you are mom at the start

    int kidpid,mompid;
    int status, wstatus, ret;
    char *theargs[4];
    char command[128];

    theargs[0]="./daughter";
    theargs[1]="LOVE you MA!!!";
    theargs[2]="5";
    theargs[3]=NULL;

    system("clear");

    printf ("Mom: Clean your Room!!!\n");
    sleep(4);
    printf ("Mom: WELL, I am waiting for an answer young lady!!!\n");
    sleep(4);

    ///the following commands are just used to show the PID of the "mother" process
    //two different ways. using the function "getpid" and good old "ps -ef"
    mompid=getpid();
    printf ("mother=%i\n", mompid);
    strcpy(command,"ps -ef|grep mother | grep -v grep");
    system(command);

    kidpid = fork ();
    //after the previous command we have two "mother" programs running 
    //with the pointer on the next commanm
    //so the next thing BOTH will do is sleep
    sleep(5);
    
    //printf("Wait status = %d     kidPID = %d",wait(&status), kidpid);
    sleep(5);

    if (kidpid == 0) 
    //then this is the forked copy of "mother" 
    //which will be swapped out for "daughter" via execvp
    //otherwise it is the original "mother" command
    {
      execvp ("./daughter", theargs);
    }

    //the below "wait" command shows the previous fork/exec waiting 
    //to be complete before proceeding

//    wait(&wstatus);
    while (wait(&status) != kidpid)


    // back to being mom

    printf ("Mom: I don't hear any cleaning going on!!!\n");
}
