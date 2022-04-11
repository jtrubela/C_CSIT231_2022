#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main (int argc, char **argv)
{ 
  int waiting=atoi(argv[2]);  
  printf ("greeting=%s delay=%i\n", argv[1],waiting);
  printf ("Daughter: MOM!!!!! %s !!!!\n", argv[1]);
  printf ("Daughter: I am cleaning my room\n");
  sleep(1);
  printf ("Daughter: text...text...text\n");
  sleep(1);
  printf("my ...the daughter'...process id is %i\n", getpid());
  printf("my mom\'s process id or my \"parent process id/PPID\" is %i\n", getppid());
  sleep(2);
  printf ("Daughter: tiktok\n");
  sleep(waiting);
  exit (0);
}
