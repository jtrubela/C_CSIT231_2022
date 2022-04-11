// CSIT231-Sys. Prog. 2/8/22
// Justin Trubela - Lab5
// Purpose - Popeyes Racing Nephews
//     PID,PPID,EXECVP,SYSTEM,SLEEP,RANDOM NUMBERS,SPRINTF,STRCAT, PS -EF

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main (int argc, char **argv){
    int racerWaiting;
   

    racerWaiting = atoi(argv[2]);
    sleep(racerWaiting);

    printf("----------------------------------------------------\n");

    printf("Popeye: %s!!!! You finished in %i seconds\n", argv[1], racerWaiting);

    printf("%s: My process id/PID\" is %i\n", argv[1], getpid());

    printf("%s: My uncle Popeye\'s process id/PPID\" is %i\n", argv[1], getppid());

    printf("-----------------------------------------------------\n");

    
  
    
    

   
    exit (0);
   
}
