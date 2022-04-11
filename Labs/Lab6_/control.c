#include <stdlib.h>
#include <stdio.h>

// this program will tell you which numbers are even in a sequence
// the author DID NOT like the number 13 and quits as soon as it appears
// 

int main(int argc, char *argv[])
{
//the variable counter is used to increment through the "for" loop later on
  int counter;

//the first meaningful command line variable is argv[1] but it comes in as a character string
//the following command converts argv[1] to an integer
  counter=atoi(argv[1]);

//scrub the data to make sure that the user did not enter a negative #. it is checked in the "if"
  if (counter<0)
    {
      printf("You need to enter a number greater than 0 or 0 itself, be more careful next time\n");
      exit(2); 
    }

//this for loop decrements down from the number entered to 0.
//Unconditionally it always shows which number it is evaluating
  for (counter; counter>=0; --counter)
    {
      printf("evaluating %i\n", counter);

//once we hit "0" we are done and exit because we no longer want to continue into negatives
      if (counter==0)
      {
	printf("Sorry I won't argue whether 0 is even or odd\n");
	printf("and I don't do negative numbers...so I'm OUTTTA here\n");;
        exit(1);
      }

//heres where our programmer is tempermental and stops the for loop by using break!!!!
//control continues to the next command after the termination of the for loop
      if (counter==13)
      {
        break;
      }

//we use moudlo of 2 remainder to check if the number is even
//if the number is not even, we go back to the first command in the for loop after decrementing
      if (counter%2!=0)
      {
        continue;
      }

//if you got here the number WAS EVEN!!!      
      printf("%i is an even number\n",counter);
    }

//This is actually where the for loop ends....if you got here you entered 13
//or a number greater than 13
    printf("I hate the number 13 and refuse to continue\n");
    exit(13);
}
