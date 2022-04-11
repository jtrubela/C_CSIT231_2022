//Justin Trubela
//lab2.c
//CSIT231-1 Professor Meyers
//2/22/2022
//Expected melting temp program

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
  //---------------------------------------------------------------------------------------//
  //                                   Declare variables                                   //
  //---------------------------------------------------------------------------------------//
  //how many samples we are taking
  int sampleSize; 
  //what the expected melting temp is of the compound              
  float expectedMeltingTemp;  
  //array holding all sample values
  float samples[sampleSize];
  //sample melting temps to be recorded for testing
  float sampleMeltingTemp=0.0;
  //number of samples used to keep count of number of samples given                 
  int sampleNumber=0;   
 
  //convert °F to Celcius
  float celcius; 
  //convert °F to Kelvin     
  float kelvin;

  //difference from melting temp
  float difference;

  //running sum to calculate average      
  float sum=0.0;    
  //weight
  int weight=0;
  //average temperature
  float averageTemp=0.0;

  //Outcome string to report back to user
  char *outcomeString; 

  //Booleans to determine outcome of sample test - if its within a certain range
  const int GOOD = 1;
  const int BAD = 0;
  int outcome = 0;

//---------------------------------------------------------------------------------------//
//                               Enter Compound information                              //
//---------------------------------------------------------------------------------------//
      //Get sample size from user
      printf("\nEnter sample Size: ");
      scanf("%d",&sampleSize);

      //Get expected melting temp from user
      printf("Enter expected melting temperature of this compound in °F: ");
      scanf("%f",&expectedMeltingTemp);
//---------------------------------------------------------------------------------------//
//                  Get multiple sample temperatures for compound from user              //
//---------------------------------------------------------------------------------------//
  while(sampleNumber < sampleSize){  
    //increase sample amount
    sampleNumber++;
        
        //Get Melting Temp for compound from User
        printf("----------------------------SAMPLE#%d----------------------------\n", sampleNumber);
        printf("Enter melting temperature for this sample: ");
        scanf("%f", &sampleMeltingTemp);

    //add sample to array    
    samples[sampleNumber] = sampleMeltingTemp;

    //convert °F to Celcius
    celcius = (sampleMeltingTemp - 32.0) * (5.0/9.0);
    //convert °F to Kelvin     
    kelvin = ((sampleMeltingTemp - 32.0) * (5.0/9.0)) + 273.0; 

    //---------------------------------------------------------------------------------------//
    //                                Calculate the averages - weighted                      //
    //---------------------------------------------------------------------------------------//
    //add sample temp to running sum to calculate average                                                  
    sum += sampleMeltingTemp*sampleNumber;
    //keep track of the weight
    weight += sampleNumber;     

    //difference from melting temp
    difference = fabsf(expectedMeltingTemp-sampleMeltingTemp);

          //Report sample temps in F,C,K
          printf("Temperatures:");
          printf("°F:%10.3f°, ",sampleMeltingTemp);
          printf("°Celcius:%10.3f°, ",celcius);
          printf("°K:%10.3f°\n", kelvin);
        
    //Check the outcome and present it to the user
    outcome = (difference >= 0.0 && difference <= 0.5) ? GOOD : BAD;
    outcomeString = (outcome == 1) ? "Good" : "Bad";

    //If sampletemp has less than a .5 difference from sampleMeltingAverage then 
    (difference >= 0.0 && difference <= 0.5) ? 
    /*True condition: show good sample */ 
          printf("\nSample status: Within Melting Temperature range(0.0°F - 0.5°F): ") : 
    /*False condition: otherwise show bad sample */
          printf("\nSample status: Out of Melting Temperature range(>0.5°F): ");
          printf("%s\n", outcomeString);
          //calculate the running average sample melting temperature
          averageTemp = sum/weight;
          printf("Average Melting Temp is %10.3f °F\n", averageTemp);

          printf("----------------------------------------------------------------\n");
  }
  //---------------------------------------------------------------------------------------//
  //                                    Final Report                                       //
  //---------------------------------------------------------------------------------------//
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~Final Report~~~~~~~~~~~~~~~~~~~~~~~~~~\n"     );
  //Print sample list back to the user
  printf("For Samples:[");
  for(int index=1; index<=sampleSize; index++){
    if(fabsf(samples[index]-expectedMeltingTemp) >= 1.0) {
      outcome = BAD;
    }
    printf("%10.3f°F,",samples[index]);
    averageTemp+=samples[index];
  }
  printf("]\n");

  //calculate the running average sample melting temperature
  averageTemp = sum/weight;

  //Give final report of average melting point temperatures
  printf("Average Melting Temp is %10.3f °F\n", averageTemp);
  //Give final report of average temperature difference to expected
  (fabsf(expectedMeltingTemp-averageTemp) >= 0.0 && fabsf(expectedMeltingTemp-averageTemp) <= 0.5) ?
      /*True*/
      printf("\nGood Test: Averages were within range of expected melting temp\n") :
      /*False*/
      printf("\nBad Test: Averages were not within range of expected melting temp\n");

      (outcome == GOOD) ? 
          printf("All samples were good\n") :
          printf("At least one bad sample > 1.0°F\n");

  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}


