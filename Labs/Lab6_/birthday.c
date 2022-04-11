#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
  time_t now;
  struct tm *today;
  struct tm ptoday;
  time_t mybirthday;
  struct tm *bd;
  struct tm pbd;
  struct tm askdate;
  int month, day, year;
  char buf[80];

//enter month day and year and
//put them in tm struct format
//then convert that date to epoch time using "mktime"
  printf("Please Enter your Birthday in this format [11/12/1962]\n");
  scanf("%i/%i/%i",&month, &day, &year); 
  askdate.tm_mon=month-1;
  askdate.tm_mday=day;
  askdate.tm_year=year-1900;
  mybirthday=mktime(&askdate);
//mktime converts human readable to epoch





//get the time it is NOW using "time()"
//then convert into the variable "today" with tm struct
  now=time(NULL);
  today=localtime(&now);
  ptoday=*localtime(&now);
//localtime converts epochtime into a tm struct

  printf("Today is %i/%i/%i    epoch=%i\n", today->tm_mon+1, today->tm_mday,today->tm_year+1900,now);

  strftime(buf, sizeof(buf), "the date %a %Y-%m-%d %H:%M:%S %Z", &ptoday);
  printf("%s\n", buf);



//convert mybirthday epoch time 
//to a tm struct called "bd"

  bd=gmtime(&mybirthday);
  pbd=*gmtime(&mybirthday);
//gmtime converts epoch to tm struct with a variable argument
 
  printf("My Birthday is %i/%i/%i    epoch=%i\n", bd->tm_mon+1, bd->tm_mday, bd->tm_year+1900,mybirthday);

  strftime(buf, sizeof(buf), "the date %a %Y-%m-%d %H:%M:%S %Z", &pbd);
  printf("%s\n", buf);




}
