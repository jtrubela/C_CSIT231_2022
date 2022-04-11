// CSIT231-Sys. Prog. 4/2/22
// Justin Trubela & Edward Wynman - Lab7
 
/*
Might need to cp Dropbox items like beer.c, ffiles.c, fibonacci.c, and maybe test.out
*/
 
#include <time.h>       //enable clock_gettime()
#include <stdio.h>
#include <string.h>
#include <math.h>    
#include <stdlib.h> 
#include <unistd.h> 
#define BUFFERSIZE 256

    //--------------------------------------------------------------------------------
    // 1. Write 2 functions:
    //     A: The first function will recursively calculate a Fibonacci sequence number 
        int fibRecursive(int number){
        if (number <= 1){
            return number;
        }
        return fibRecursive(number-1) + fibRecursive(number-2);
    }
    //--------------------------------------------------------------------------------
    
    //--------------------------------------------------------------------------------
    //     B: The second function will calculate the same WITHOUT using recursion. 
    //         The inputs of both functions will be a single integer 
    //          indicating which number in the series you will calculate.
        int fibb(int number){
            struct tm *thetime;
            struct timespec start, stop;

            int secs;
            long nsecs;
            long timePassed;

            //function variables
            int fibb, fibminus1 = 1,  fibminus2;
        
            if (number == 0 || number == 1){
                return number;
            }
            for(int i = 2; i <= number; i++){
                    fibb = fibminus1 + fibminus2;
                    fibminus2 = fibminus1;
                    fibminus1 = fibb;
            }
            return fibb;
        }
    //--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------
int main (int argc, char **argv){
    // 2. You will input, on the command line, a number for which these sequences will be calculated. 
    //declare variable for command line input
        int fibNumber;

    //set command line number to be used as fibonacci number
    fibNumber = atoi(argv[1]);
 
    //decalre struct time variables with properties for start and top
        struct tm *thetime;
        struct timespec start, stop, tm;

    //time variables needed to calculate final finish time
        int secs;
        long nsecs;
        double timePassed;

    //variable for non recursive call
        int result;

    //-----------------------------------------------------------------------------------------------------------------------------
    //                                                  OUTPUT TO FILE
    //-----------------------------------------------------------------------------------------------------------------------------
        // 3. Before starting the process: 
        //     A: grab the start time of the entire process within the maximum time precision available including nanoseconds. 
        //print start date
        //------------------------------------------------------------------------
            //declare time string
            char timeStringStart[BUFFERSIZE] = {0};
            // get time and set to tm struct variable
            clock_gettime(CLOCK_REALTIME, &tm);
            //printf("\nTIME Second START: %ld\n",tm.tv_sec);
            double startNano = tm.tv_nsec;
            //printf("\nTIME Nano START: %ld\n",tm.tv_nsec);
            // declare and set time pointer struct to local time of time seconds
            thetime = localtime(&tm.tv_sec);
            //format the end time string to include necessary format: November 12, 1962 23:00.123456789.
            strftime(timeStringStart, BUFFERSIZE, "\n%B%e, %G %T", thetime);
            //append nanoseconds to end of the string
            snprintf(timeStringStart + strlen(timeStringStart)-2,sizeof(timeStringStart) - strlen(timeStringStart),"%.9ld", tm.tv_nsec);
            //output string
            puts(timeStringStart);
            printf("\n---------------------------------------------------------------------------------------------------\n");

        //--------------------------------------------------------------------------------
        // print start time
        //--------------------------------------------------------------------------------
            clock_gettime(CLOCK_REALTIME, &start);
            
        //--------------------------------------------------------------------------------
        // 4. For each number, whose Fibonacci sequence is calculated:
        //     grab the start time before the function is called the first time 
        //     and then grab it again when it returns for the final time. 
        //     Calculate how long that number in the sequence took to calculate. 
        //         Remember, you are calculating it 2 ways, so you need two start and stop times 
        //             (recursive and non-recursive) for each. 
        //         Please grab 10 samples of each and calculate the average time for EVERY NUMBER calculated in the series.


            //declare loop variables for start and stop times to be outputted
            struct timespec startFib_Recursive, stopFib_Recursive, startFib_NonRecursive, stopFib_NonRecursive;
            //print header for the file
            printf("\nSequence\tResult\t\tRecursive-Time\t\tNon-Recursive-Time\n");
            //loop to run through fibonacci sequence - Recursive and Non-recursive
            for(int sequenceNum = 1; sequenceNum <= fibNumber ; sequenceNum++){
            //------------------------------------------------------------------------------------------------------------------
                //string to append to file
                char *stringToAppend[128];
                char *sequenceNumber[2];                        //FIGURE THIS OUT
                char *resultString[3];
                char *recursiveTime[16];
                char *nonrecursiveTime[16];
            //------------------------------------------------------------------------------------------------------------------
            // get the result number to that it can be worked out
            result = fibb(sequenceNum);
            //PRINT--------- Sequence number      Result      ...
            printf("\n  %i\t\t%i\t\t", sequenceNum, result);


                //Recursive - calculate time started for time to run up until fib number
                    double start1Nano = startFib_Recursive.tv_nsec;
                    clock_gettime(CLOCK_REALTIME, &startFib_Recursive);
                    fibRecursive(sequenceNum);
                    //printf("\nfibrecursive for number %i is: %i\n", sequenceNum, fibRecursive(sequenceNum));
                    clock_gettime(CLOCK_REALTIME, &stopFib_Recursive);
                    double stop1Nano = startFib_Recursive.tv_nsec;


            //PRINT--------- Recursive TIMES       ...
            printf("%.0f\t\t", stop1Nano-start1Nano);


            //end of rescursive call





            //calculate average time
            //update average time





            //change items to string to append to file
                //sequence number to string
                //result to string
                //average time to string






            //Non-Recursive - calculate time started for time to run up until fib number
                double start2Nano = startFib_NonRecursive.tv_nsec;
                clock_gettime(CLOCK_REALTIME, &startFib_NonRecursive);
                result = fibb(sequenceNum);
                //printf("fib for number %i is: %i\n", sequenceNum, result);
                clock_gettime(CLOCK_REALTIME, &stopFib_NonRecursive);
                double stop2Nano = startFib_NonRecursive.tv_nsec;

            //PRINT--------- ... NONRecursive TIMES
            printf("\t%.0f\n", stop2Nano-start2Nano);
            //end of non recursive call


            //calculate average time
            //update average time
            //change items to string to append to file
                //sequence number to string
                //result to string
                //average time to string

        //--------------------------------------------------------------------------------




            //--------------------------------------------------------------------------------
            //append to file
            // 5. If the file does not already exist:
            //     create a file called fibonacci.out and put the date and time of the run right on top. 
            //     The date should read in THIS FORMAT... November 12, 1962 23:00.123456789.
            //--------------------------------------------------------------------------------

            //--------------------------------------------------------------------------------
            // 6. To fibonacci.out:
            //     for each number calculated in the series:
            //     1. append the sequence number, 
            //     2. the calculated result, 
            //     3. the calculated average:
            //         a: the calculated average recursive time and 
            //         b: the calculated average non-recursive time 
            //         SEPARATED BY TABS or COMMAS (important...you'll see why soon).

                //filep = fopen("text.txt", "w");
                //if (filep == NULL)
                //{
                //    printf("File no opened\n");
                //}
                //Loop for the output
                //fputs("nSequence \t \t Result \t \t Recursive-Time \t \t Non-Recursive-Time\n", filep)

                //printf("%d \t %d \t\t %i.%ld \t\t %i.%ld \n", i+1, result[i], secs1[i], nsecs1[i] , secs2[i],nsecs2[i]);
                /*
                putw(i+1, filep);
                fputs("\t\t", filep);
                putw(result[i], filep);
                fputs("\t\t", filep);
                putw(sec1[i], filep);
                fputs("\t\t", filep);
                putw(sec2[i], filep);
                fputs("\n", filep)
                */

                //printf("\n--------------------------------------------\n");
            //--------------------------------------------------------------------------------

        }
        //------------------------------------------------------------------------

        //------------------------------------------------------------------------
        // 7. At the end of the run: 
        //     add the date and time of the run completion in the same format: November 12, 1962 23:00.123456789.
        // get finish time
            clock_gettime(CLOCK_REALTIME, &stop);

            //------------------------------------------------------------------------
            printf("\n---------------------------------------------------------------------------------------------------\n");
            //------------------------------------------------------------------------
            //Print finish date
            //declare time string
            char timeStringEnd[BUFFERSIZE] = {0};
            // get time and set to tm struct variable
            clock_gettime(CLOCK_REALTIME, &tm);
            double endNano = tm.tv_nsec;
            // declare and set time pointer struct to local time of time seconds
            thetime = localtime(&tm.tv_sec);
            //format the end time string to include necessary format: November 12, 1962 23:00.123456789.
            strftime(timeStringEnd, BUFFERSIZE, "\n%B%e, %G %T", thetime);
            //append nanoseconds to end of the string
            snprintf(timeStringEnd + strlen(timeStringEnd)-2,sizeof(timeStringEnd) - strlen(timeStringEnd),"%.9ld", tm.tv_nsec);
            //output string
            puts(timeStringEnd);
        //--------------------------------------------------------------------------------



        //--------------------------------------------------------------------------------
        // 8. State how long the entire process took to complete at the VERY end.
            printf("Total time = %.0f", endNano-startNano); //? figure out later
        //--------------------------------------------------------------------------------



        //--------------------------------------------------------------------------------
        // 9. Transfer this file to your PC and graph it in Excel. (one line for recursive, one line for non-recursive). 
        //    Time should be the Y-axis and sequence number should be the X-axis. 
        //-----------------------------------------------------------------------------------
        //     (explains why I wanted this tab or comma delimited!!!)

            /*Explanation - It is an easy import the output right into excel and 
                    it automatically delineates everything by tabs/spaces into different cells
            */
        //-----------------------------------------------------------------------------------

 

        //--------------------------------------------------------------------------------
        // 10. Set the permissions to fibonnacci.out so that it is "write-protected" 
        //     (no one has "write" privilege) but can be read by anyone who can log into Turing.
        //--------------------------------------------------------------------------------



    return 0;
}
/*
----------------------------------------------------------------------------------------------------
 
Here is a sample of what the file should look like after running "./lab7 15"

%B - Full Month Name
%e - day space padded (%d 0 padded)
$G - year (with century)
%R - 24-hour HH:MM time, equivalent to %H:%M
%N - nanoseconds?
%T - ISO 8601 time format (HH:MM:SS), equivalent to %H:%M:%S

November 12, 1962 23:00:00.123456789
Sequence    Result    Recursive-time    Non-Recursive-time
1               1        0.123456789    0.34567890
2               1        1.123456789    1.34567890
3               2        3.123456789    4.34567890
4               3        5.123456789    7.34567890
5               5       11.123456789    12.34567890
6               8       15.123456789    19.34567890
7               13      20.123456789    25.34567890
8               21      28.123456789    32.34567890
9               34      40.123456789    45.34567890
10              55     55.123456789    57.34567890
11              89     72.123456789    77.34567890
12              144    94.123456789    97.34567890
13              233   120.123456789    122.34567890
14              377   149.123456789    152.34567890
15              610   200.123456789    201.34567890
November 12, 1962 23:04:00.345678912
Total Time = 4:00.222222123
*/