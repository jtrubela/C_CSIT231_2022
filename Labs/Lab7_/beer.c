#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int passitaround(int fallen)
{
  while(fallen>0)
  {
  if (fallen!=1)
    {
      sleep(2);
      printf("%i bottles of beer on the wall, %i bottles of beer\n", fallen, fallen);
      printf("you take one down, you pass it around, %i bottles of beer on the wall\n\n", --fallen);
    }
  else
    {
      sleep(2);
      printf("%i bottle of beer on the wall, %i bottle of beer\n", fallen, fallen);
      printf("you take one down, you pass it around, no more bottles of beer on the wall\n\n", --fallen);
    }
  }
}

int happenstofall(int beer)
{
  if (beer==1)
  {
    sleep(2);
    printf("%i bottle of beer on the wall, %i bottle of beer\n", beer, beer);
    printf("if one of those bottles just happens to fall, what a waste of alcohol!!!!\n\n", --beer);
  }
  else
  {
    sleep(2);
    printf("%i bottles of beer on the wall, %i bottles of beer\n", beer, beer);
    printf("if one of those bottles just happens to fall, %i bottles of beer on the wall\n\n", --beer);
    happenstofall(beer);
  }
    printf("cleaning up bottle # %i from the floor\n", beer+1);
    sleep(2);
}


int main( int argc, char *argv[] )
{
  int bottles;
/*  bottles=atoi(argv[1]); */
  printf("Pleased Enter How Many Bottles of Beer are on the Wall: \n");
  scanf("%d", &bottles);
  system("clear");
  passitaround(bottles);
  sleep(4);
  system("clear");
  printf("=========================================================\n");
  printf("ONE MORE TIME!!!!!\n");
  printf("=========================================================\n");
  sleep(4);
  system("clear");
  happenstofall(bottles);
}
