#include <stdio.h>
#include <pwd.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/*
The <time.h> header declares the structure tm:

int    tm_sec   seconds [0,61]
int    tm_min   minutes [0,59]
int    tm_hour  hour [0,23]
int    tm_mday  day of month [1,31]
int    tm_mon   month of year [0,11]
int    tm_year  years since 1900
int    tm_wday  day of week [0,6] (Sunday = 0)
int    tm_yday  day of year [0,365]
int    tm_isdst daylight savings flag

The <sys/time.h> header defines the timeval structure:
time_t         tv_sec      seconds
suseconds_t    tv_usec     microseconds

*/

int main(int argc, char *argv[])
{

//
//
  struct tm *thetime;
  struct timespec go, stop;
  int biggestname=50;
  char comparename[biggestname];
  char enteredname[biggestname];
  int length;
  double duration;
  int secs;
  long nsecs;
  int rannum;

//  srand(time(NULL));
//  rannum=rand()%6;
//  printf("%i\n", rannum);
//  printf("%i\n", (rand()%5)+1);
//  exit(0);

  clock_gettime(CLOCK_REALTIME, &go);
  printf("Please enter any string less than 50 characters\n");
//  sleep(10);
  fgets(enteredname, biggestname, stdin);
  clock_gettime(CLOCK_REALTIME, &stop);
  secs=stop.tv_sec-go.tv_sec;
  nsecs=stop.tv_nsec-go.tv_nsec;
  printf("go=%i.%i\n", go.tv_sec, go.tv_nsec);
  printf("stop=%i.%i\n", stop.tv_sec, stop.tv_nsec);
  
  
  if (nsecs<0)
  {
    duration=(--secs)+(1.0+(nsecs*1.0)/1000000000);
  }
  else
  {
    duration=(secs/1.0)+((nsecs*1.0)/1000000000);
  }
  printf("%.9f\n",duration); 
} 
