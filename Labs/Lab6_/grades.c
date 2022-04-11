#include <stdlib.h>
#include <stdio.h>
//this is a demonstration of the "struct" data type which is a defineable data type
//that contains other variables of various data types.

  struct  grades
{
     char  *name;
     int   final;
     int   midterm;
     int   extra;
};


int main(int argc, char *argv[])
{   
	struct grades CSIT231;        /* Declare CSIT231 to type "grades" idefined above */
	struct grades CSIT[30];        /* Declare an array of struct type "grades" idefined above */
        struct grades *pCSIT231;
	int failing;
        int round;
	float cumulative;

	failing=atoi(argv[1]);
	printf("%i and below indicates a failing grade\n", failing);

	CSIT231.name="Rich";
	CSIT231.final=32;
	CSIT231.midterm=76;
	CSIT231.extra=3;

	CSIT[1].name="Paris";
	CSIT[1].final=90;
	CSIT[1].midterm=96;
	CSIT[1].extra=4;

	CSIT[2].name="Tina";
	CSIT[2].final=72;
	CSIT[2].midterm=80;
	CSIT[2].extra=5;

// set up a pointer to the CSIT231 struct
        pCSIT231=&CSIT231;

	
//cumulative is the real average
//round is the integer average with decimal removed
	cumulative=pCSIT231->final*.40+pCSIT231->midterm*.60+pCSIT231->extra;
	round=pCSIT231->final*.40+pCSIT231->midterm*.60+pCSIT231->extra;

//exploiting how integer and real math work by comparing the operation's results
	if (cumulative>round)
	{
	  round++;
	}

	printf("%s, your cumulative grade was %i\n",pCSIT231->name, round);

	if (round>failing)
	  printf("yay you passed\n");
	else
	  printf("boo you failed becasue your grade was less than %i\n\n\n\n", failing);

  int index=1;
  while (index < 3)
  {
    	cumulative=CSIT[index].final*.40+CSIT[index].midterm*.60+CSIT[index].extra;
	round=CSIT[index].final*.40+CSIT[index].midterm*.60+CSIT[index].extra;

	if (cumulative>round)
	{
	  round++;
	}

	printf("%s, your cumulative grade was %i\n",CSIT[index].name, round);

	if (round>failing)
	  printf("yay %s passed\n", CSIT[index].name);
	else
	  printf("boo %s failed becasue your grade was less than %i\n", CSIT[index].name, failing);
        index++;
  }
}
