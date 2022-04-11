// CSIT231-Sys. Prog. 2/8/22
// Justin Trubela - Lab5
// Purpose - Popeyes Racing Nephews
//     PID,PPID,EXECVP,SYSTEM,SLEEP,RANDOM NUMBERS,SPRINTF,STRCAT,PS -EF


#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <time.h>

int main (int argc, char **argv) {

    //Parent PID variables
    int popeyePID = 0;
    //Parent PID string
    char popeyePIDString[12];

    //Nephews PID variables
    int peepeyePID, pupeyePID, pipeyePID, poopeyePID;
    //Nephew Arguments
    char *peepeye[4], *pupeye[4], *pipeye[4], *poopeye[4];
    //Nephews random number variables
    int peepeyeNum, pupeyeNum, pipeyeNum, poopeyeNum;
    int randNumber = 0;
    time_t randomTime;
    srand((unsigned) time (&randomTime));

    //system variables
    char command[128] = "ps -ef | grep -v grep | grep ";
    int status, wstatus, ret;

    //random number integer to string variables
    char num1[12];
    char num2[12];
    char num3[12];
    char num4[12];


    //Set random number from 4-10
    peepeyeNum = rand() % 10;
    while (peepeyeNum < 4) {
        peepeyeNum = rand() % 10;
    }
    //Set random number from 4-10
    pupeyeNum = rand() % 10;
     while (pupeyeNum < 4) {
        pupeyeNum = rand() % 10;
     }
    //Set random number from 4-10
    pipeyeNum = rand() % 10;
    while (pipeyeNum < 4){
        pipeyeNum = rand() % 10;
    }
    //Set random number from 4-10
    poopeyeNum = rand() % 10;
    while (poopeyeNum < 4){
        poopeyeNum = rand() % 10;
    }

    //Convert integer to string to allow nephew program to utilize
    sprintf(num1, "%i", peepeyeNum);
    sprintf(num2, "%i", pupeyeNum);
    sprintf(num3, "%i", pipeyeNum);
    sprintf(num4, "%i", poopeyeNum);

    //Setting first nephew arguments
    peepeye[0] = "./nephew";
    peepeye[1] = "Peepeye";
    peepeye[2] = num1;
    peepeye[3] = NULL;

    //Setting second nephew arguments
    pupeye[0] = "./nephew";
    pupeye[1] =  "Pupeye";
    pupeye[2] = num2;
    pupeye[3] = NULL;

    //Setting third nephew arguments
    pipeye[0] = "./nephew";
    pipeye[1] = "Pipeye";
    pipeye[2] = num3;
    pipeye[3] = NULL;

    //Setting fourth nephew arguments
    poopeye[0] = "./nephew";
    poopeye[1] = "Poopeye";
    poopeye[2] = num4;
    poopeye[3] = NULL;


    //system variables
    char command[128] = "ps -ef | grep -v grep | grep ";
    int status, wstatus, ret;
    //Clear the console
    system("clear");
    //assign pid to Popeye
    popeyePID = getpid();
    //make a string of popeyes pid to append to end of system command line execution
    sprintf(popeyePIDString, "%i", popeyePID);
    //concatenate to system command 
    strcat(command, popeyePIDString);

//--------------------------------RACE-----------------------------------------

    printf("Announcer: Welcome to Popeyes race!\n");
    printf("Popeye: My PID is %i. My PPID is %i.\n", popeyePID, getppid());

    sleep(2);

    printf("\nAnnouncer: Racers to the starting line!\n");
    sleep(3);
    printf("Announcer: On your marks....\n");
    sleep(1);
    printf("Announcer: Get set....\n");
    sleep(1);
    printf("Announcer: GO!\n");
    printf("--------------------------------\n");


    //Forking first nephew
    peepeyePID = fork();
        if(peepeyePID == 0){
            execvp("./nephew", peepeye); 
        }
        else if (peepeyePID > 0) {
            printf("");
        }
        else  {
            perror("PID < 0. In fork():");
        }
        system(command);
        while (wait(&status) != peepeyePID);

    sleep(2);

    //Forking second nephew
    pupeyePID = fork();
        if(pupeyePID == 0){
            execvp("./nephew", pupeye); 
        }
        else if (pupeyePID > 0) {
            printf("");
        }
        else  {
            perror("PID < 0. In fork():");
        }
        system(command);
        while (wait(&status) != pupeyePID);
   
    sleep(2);

    //Forking third nephew
    pipeyePID = fork();
        if(pipeyePID == 0){
            execvp("./nephew", pipeye); 
        }
        else if (pipeyePID > 0) {
            printf("");
        }
        else  {
            perror("PID < 0. In fork():");
        }
        system(command);
        while (wait(&status) != pipeyePID);
    
    sleep(2);

    //Forking fourth nephew
    poopeyePID = fork();
        if(poopeyePID == 0){
            execvp("./nephew", poopeye);
        }
        else if (poopeyePID > 0) {
            printf("");
        }
        else  {
            perror("PID < 0. In fork():");
        }
        system(command);
    while (wait(&status) != poopeyePID);
    
    sleep(2);
    //-----------------------Congratulate all the nephews---------------------------
    printf("\nPopeye: Congratulations to all of my nephews!\n");
    system(command);

    if (peepeye < pipeyeNum && peepeye < pupeyeNum && peepeye < poopeyeNum)
    peepeyeNum;
    pipeyeNum;
    pupeyeNum;
    poopeyeNum;




    return 0;
}