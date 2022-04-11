#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

//______________________________________________________________________________________________________//                                                   
//                                                  RANDW.C                                             //
//______________________________________________________________________________________________________//                                                   


// //int main() {

// // fflush(stdin);

// //   printf("Enter a sentence and see that fgets DOES work, but the SDTDIN buffer is a general problem\n");
// //   fgets(str, MAX_LIMIT, stdin);
// //   printf("%s\n", str);

// // //  printf("enter a string\n");
// // //  scanf("%s", str);
// // //  str[4]='\0';
// // //  printf("your string was %s\n", str);
    

// // //  printf("enter a real number\n");
// // //  scanf("%f", &temp);
// // //  printf("the temperature you entered was %5.3f", temp);
 

// //   printf(" please enter your birthday in standard format example 11/12/62\n");
// //   scanf("%d/%d/%d", &month, &day, &year);
// //   printf("in europe your birthday would look like this %d/%d/%d\n", day, month, year);

// // //  scanf("%[^\n]s",str);
// // //  printf("%s\n",str);

// // //  scanf("%s",str);
// // //  printf("%s\n",str);


// //______________________________________________________________________________________________________//                                                   
// //                                                  RANDW.C                                             //
// //______________________________________________________________________________________________________// 




// #define MAX_LIMIT 100

// char str[MAX_LIMIT];
// int month, day, year;
// double tempDouble;
// float tempFloat;


// int main() {

//   fflush(stdin);

//     // printf("Enter a sentence and see that fgets DOES work, but the SDTDIN buffer is a general problem\n");
//     // fgets(str, MAX_LIMIT, stdin);
//     // printf("%s\n", str);

//      printf("enter a string\n");
//      scanf("%s", str);
//      str[4]='\0';                                   //'\0' delimiter - is a null character
//      printf("your string was %s\n", str);

//      //input: richard
//      //output: rich 



//     // printf("enter a real number\n");
//     // scanf("%lf", &tempDouble);
//     // printf("the temperature you entered was %5.3lf", tempDouble);

//     // printf("enter a real number\n");
//     // scanf("%f", &tempFloat);
//     // printf("the temperature you entered was %5.3f", tempFloat);

//     // printf("please enter your birthday in standard format example 11/12/62\n");    
//     // scanf("%d/%d/%d", &month, &day, &year);
//     // printf("in europe your birthday would look like this %d/%d/%d", day, month, year);

//     //output: please enter your birthday in standard format example 11/12/62
//     //input:  11/12/62
//     //output: in europe your birthday would look like this 12/11/62% 


//     // scanf("%[^\n]s",str);               //^ often means not
//     // printf("%s\n",str);
// //input: hello im justin
// //output: hello im justin

//     // printf("--------------\n");

//     // scanf("%s",str);
//     // printf("%s\n",str);
// //input: hello im justin
// //input: hello

// // fflush(stdin);

// //  fgets(str, MAX_LIMIT, stdin);          //as soon as you hit a space, it presumes you're done
// //  printf("%s\n",str);                    //fflush gets rid of anything after the space " my baby"
// //input: hello my baby
// //output: hello
// //         my baby

//     return 0;



//}


// #include <stdio.h>


// void main()
// {
//   int tuples[3][4] = 
//   { 
//     {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
//     {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
//     {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
//   };

//   int listed[3][4] = {11,10,9,8,7,6,5,4,3,2,1,0};

//   int index1, index2;
 
//    /* output each array element's value */
//    for ( index1 = 0; index1 < 3; index1++ ) 
//       {

//       for ( index2 = 0; index2 < 4; index2++ ) 
//          {
//          printf("tuples[%d][%d] = %d, listed[%d][%d] = %d, Their sum is %d\n"
//                 , index1, index2, tuples[index1][index2]
//                 , index1, index2, listed[index1][index2]
//                 , tuples[index1][index2]+listed[index1][index2]);
//          }
//       }
// }


// #include <stdio.h>
// #include <stdlib.h>


// int main( int argc, char *argv[] )
// {
// int number, index;

// printf("argc: %i\n",argc);
// printf("\nargvArray: ");
// for(index=1; index<argc; index++){
//   printf("%s",argv[index]);
// }

// for (index=1; index<argc; index++)
// {
//   number=atoi(argv[index]);
//   switch(number)
//     {
//       // case 0:
//       //   printf("0 is spelled \"zero\"\n");
//       //   break;  
//       case 1:
//         printf("\n1 is spelled \"one\"\n");
//         break;
//       case 2:
//         printf("\n2 is spelled \"two\"\n");
//         break;
//       case 3:
//         printf("\n3 is spelled \"three\"\n");
//         break;
//       case 4:
//         printf("\n4 is spelled \"four\"\n");
//         break;
//       case 5:
//         printf("\n5 is spelled \"five\"\n");
//         break;
//       case 6:
//         printf("\n6 is spelled \"six\"\n");
//         break;
//       case 7:
//         printf("\n7 is spelled \"seven\"\n");
//         break;
//       case 8:
//         printf("\n8 is spelled \"eight\"\n");
//         break;
//       case 9:
//         printf("\n9 is spelled \"nine\"\n");
//         break;
//       default:
//         printf("\nsorry I only do single digits, I can\'t spell %i\n",number);
//         break;
//     }
//   }
// }



//Entering command line expressions and interpretting them



//String initialization
// char t[]= "temp string";
// char t10[12]= " temp string";

// " " c thinks anything in double quotes could be a variable
/*
strlen() - length of string
Strcat() - copy the content of a string to another
Strcmp() - concatenate or join two strings
Strlwr() - compare two strings
Strlwr() - convert the string to uppercase
Strupr() - convert the string to uppercase
Strrev() - reverses the string
*/

/*
int main()

{

//strcat
  char srccat[20]= " before";

  char destcat[20]= "after ";

//strcat(char *__s1, const char *__s2)

  strcat(destcat, srccat);

  printf("%s\n", destcat);

//The output will be: after before



//strlen
  int length;

  char s[20] = "We are Here";

  length=strlen(s);

  printf("Length of the string is = %d \n", length);

//Length of the string is = 11




//strcpy()
  char srccpy[20]= " Destination";

  char destcpy[20]= "";

  printf("\n source string is = %s", srccpy);

  printf("\n destination string is = %s", destcpy);

  strcpy(destcpy, srccpy);

  printf ("\ntarget string after strcpy() = %s", destcpy);
//Source string is = Destination
//Target string is =
//Target string after strcpy() = Destination





//strcmp()
// 0 is returned when two strings are the same
// If str1<str2 then a negative value is returned
// If str1>str2 then a positive value is returned

  char str1[]="copy";

  char str2[]="Trophy";

  int i,j,k;

  i=strcmp(str1, "copy");

  j=strcmp(str1, str2);

  k=strcmp(str1, "f");

  printf("\n %d %d %d",i,j,k);
//output: 0  -1  1



//strlwr() / strupr()
  char str[]="CONVERT me To the Lower Case";

  printf("%s\n", strlwr(str));
//Output: convert me to the lower case


//strrev()
  char temp[20]="Reverse";

  printf("String before reversing is : %s\n", temp);

  printf("String after strrev() :%s", strrev(temp));
// Output Reverse esreveR


 return 0;

}
*/


// NULL and /0 are the same thing

// char *strchr(const char *__s, int __c) - 
    //searches for the first occurrence of the character c(an unsigned char) in the string
          //pointed to by the argument c
// char *strpbrk(const char *__s, const char *__charset) - 

//String Library
/*
Library Variables
Following is the variable type defined in the header string.h −

Sr.No.	Variable & Description
1	
size_t

This is the unsigned integral type and is the result of the sizeof keyword.

Library Macros
Following is the macro defined in the header string.h −

Sr.No.	Macro & Description
1	
NULL

This macro is the value of a null pointer constant.

String Library Functions
Following are the functions defined in the header string.h −

Sr.No.	Function & Description
1	void *memchr(const void *str, int c, size_t n)
Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.

2	int memcmp(const void *str1, const void *str2, size_t n)
Compares the first n bytes of str1 and str2.

3	void *memcpy(void *dest, const void *src, size_t n)
Copies n characters from src to dest.

4	void *memmove(void *dest, const void *src, size_t n)
Another function to copy n characters from str2 to str1.

5	void *memset(void *str, int c, size_t n)
Copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument str.

6	char *strcat(char *dest, const char *src)
Appends the string pointed to, by src to the end of the string pointed to by dest.

7	char *strncat(char *dest, const char *src, size_t n)
Appends the string pointed to, by src to the end of the string pointed to, by dest up to n characters long.

8	char *strchr(const char *str, int c)
Searches for the first occurrence of the character c (an unsigned char) in the string pointed to, by the argument str.

9	int strcmp(const char *str1, const char *str2)
Compares the string pointed to, by str1 to the string pointed to by str2.

10	int strncmp(const char *str1, const char *str2, size_t n)
Compares at most the first n bytes of str1 and str2.

11	int strcoll(const char *str1, const char *str2)
Compares string str1 to str2. The result is dependent on the LC_COLLATE setting of the location.

12	char *strcpy(char *dest, const char *src)
Copies the string pointed to, by src to dest.

13	char *strncpy(char *dest, const char *src, size_t n)
Copies up to n characters from the string pointed to, by src to dest.

14	size_t strcspn(const char *str1, const char *str2)
Calculates the length of the initial segment of str1 which consists entirely of characters not in str2.

15	char *strerror(int errnum)
Searches an internal array for the error number errnum and returns a pointer to an error message string.

16	size_t strlen(const char *str)
Computes the length of the string str up to but not including the terminating null character.

17	char *strpbrk(const char *str1, const char *str2)
Finds the first character in the string str1 that matches any character specified in str2.

18	char *strrchr(const char *str, int c)
Searches for the last occurrence of the character c (an unsigned char) in the string pointed to by the argument str.

19	size_t strspn(const char *str1, const char *str2)
Calculates the length of the initial segment of str1 which consists entirely of characters in str2.

20	char *strstr(const char *haystack, const char *needle)
Finds the first occurrence of the entire string needle (not including the terminating null character) which appears in the string haystack.

21	char *strtok(char *str, const char *delim)
Breaks string str into a series of tokens separated by delim.

22	size_t strxfrm(char *dest, const char *src, size_t n)
Transforms the first n characters of the string src into current locale and places them in the string dest.
*/


//Math library
/*
1	double acos(double x)
Returns the arc cosine of x in radians.

2	double asin(double x)
Returns the arc sine of x in radians.

3	double atan(double x)
Returns the arc tangent of x in radians.

4	double atan2(double y, double x)
Returns the arc tangent in radians of y/x based on the signs of both values to determine the correct quadrant.

5	double cos(double x)
Returns the cosine of a radian angle x.

6	double cosh(double x)
Returns the hyperbolic cosine of x.

7	double sin(double x)
Returns the sine of a radian angle x.

8	double sinh(double x)
Returns the hyperbolic sine of x.

9	double tanh(double x)
Returns the hyperbolic tangent of x.

10	double exp(double x)
Returns the value of e raised to the xth power.

11	double frexp(double x, int *exponent)
The returned value is the mantissa and the integer pointed to by exponent is the exponent. The resultant value is x = mantissa * 2 ^ exponent.

12	double ldexp(double x, int exponent)
Returns x multiplied by 2 raised to the power of exponent.

13	double log(double x)
Returns the natural logarithm (base-e logarithm) of x.

14	double log10(double x)
Returns the common logarithm (base-10 logarithm) of x.

15	double modf(double x, double *integer)
The returned value is the fraction component (part after the decimal), and sets integer to the integer component.

16	double pow(double x, double y)
Returns x raised to the power of y.

17	double sqrt(double x)
Returns the square root of x.

18	double ceil(double x)
Returns the smallest integer value greater than or equal to x.

19	double fabs(double x)
Returns the absolute value of x.

20	double floor(double x)
Returns the largest integer value less than or equal to x.

21	double fmod(double x, double y)
Returns the remainder of x divided by y. */





//-------------------------------------------------------------------------------------
//                                            UNIX - COMMAND LINE
//-------------------------------------------------------------------------------------

//history - shows you all your commands
  //make a comment in your history
    // example: ls #making a note to show in your history
/*
 1006  history
 1007  ls # make a note of all files in my directory
 1008  history
 1009  clear
 1010  who #all people on the system and when they lologged in
 1011  clear
 1012  id #find out user and group names and numeric ID's (UID or group ID) 
 1013  whoami #whats my login ID
 1014  w #gives you alot more comprehensive information about yourself
 1015  who | sort
 1016  who | sort #input of one command and get what i want
 1017  history
 1018  who | -r #reverse order
 1019  who | sort -r #reverse order
 1020  clear
 1021  who | sort | awk '{print $1}' #print a sorted colum but the first string
 1022  who | sort | awk '{print $1}' | wc #print a sorted colum but the first string and get the word count minus lines
 1023  who | sort | awk '{print $1}' | wc -l #print a sorted colum but the first string and get the word count minus lines
 1024  who | sort | awk '{print $1}' | wc -l | uniq #working off source of names uniquely getting rid of doubles
 1025  who | sort | awk '{print $1}' | uniq #working off source of names uniquely getting rid of doubles
 1026  who | sort | awk '{print $1}' | uniq | wc -l#working off source of names uniquely getting rid of doubles
 1027  who | sort | awk '{print $1}' | uniq | wc #working off source of names uniquely getting rid of doubles
 1028  who | sort | awk '{print $1}' | uniq | wc -l #working off source of names uniquely getting rid of doubles
 1029  clear
 1030  who | sort | awk '{print $1}' | uniq -c
 1031  clear
 1032  who | sort | awk '{print $1}' | uniq -c
 1033  who | sort | awk '{print $1}' | uniq '{myersr}' -c
 1034  who | sort | awk '{print $1}' | uniq | grep myersr
 1035  who | sort | awk '{print $1}' | uniq -c | grep myersr
 1036  who | sort | awk '{print $1}' | uniq -c |sort -k1 -nr
 1037  who | sort | awk '{print $1}' | uniq -c |sort -k1 -nr #show you unique values sorted by number of logins
 1038  clear
 1039  who | sort | awk '{print $1}' | uniq -c | sort -k1 -nr | head -1
 1040  who | sort | awk '{print $1}' | uniq -c | sort -k1 -nr
 1041  who | sort | awk '{print $1}' | uniq -c | sort -k1 -nr | head 1
 1042  who | sort | awk '{print $1}' | uniq -c | sort -k1 -nr | tail -1
 1043  cat /etc/password
 1044  cat /etc/pswd
 1045  cat /etc/psswd
 1046  cat /etc/passwd
 1047  head -5 /etc/passwd
 1048  tail -5 /etc/passwd
 1049  cat /etc/passwd | tail -5
 1050  cat /etc/passwd/ | tail -11 | head -7
 1051  cat /etc/passwd/ | head -11 | tail -7
 1052  cat /etc/passwd | head -11 | tail -7
 1053  cat /etc/passwd | head -11 | tail -5
 1054  vi etc/passwd
 1055  vi /etc/passwd
 1056  clear
 1057  history
[trubelaj1@turing random]$ 

*/




//Pointer


  // int number = 20;                //memory value
  // int *pointer1;                  //memory location
  // pointer1 = &number;             //insert value in mem location

  // //print address of value location
  // printf("Address of memory location for number is: %x\n", &number);  // &num - %x     get address
  // //print pointer
  // printf("Address stored in pointer1 variable: %x\n", pointer1);      // var - %x     get address
  // //address stored in pointer variable
  // printf("value of pointer1 variable: %d\n", *pointer1);              // (star)var - %d     gets value  

  // printf("\n--------------------------------------------------------------\n");
  


/*                  POINTERS
Sr.No.	Concept & Description
1	Pointer arithmetic - https://www.tutorialspoint.com/cprogramming/c_pointer_arithmetic.htm
There are four arithmetic operators that can be used in pointers: ++, --, +, -

int array[] = {10, 100, 200};
int *ptr;


//increment address using front of array as pointer
//Array address in pointer
ptr = array;
for (int i = 0; i < 3; i++)
{
  printf("Address of var[%d] = %x\n", i, ptr);              // ptr - %x - address
  printf("Value of var[%d] =  %d\n", i, *ptr);              // (star)ptr - %d - value 
  ptr++;
}

printf("\n--------------------------------------------------------------\n");


//decrement address using end of array as pointer
//Array address in pointer
ptr = &array[2];
for (int i = 3; i > 0; i--)
{
  printf("Address of var[%d] = %x\n", i, ptr);              // ptr - %x - address
  printf("Value of var[%d] =  %d\n", i, *ptr);              // (star)ptr - %d - value 
  ptr--;
}

printf("\n--------------------------------------------------------------\n");
*/



/*
2	Array of pointers - https://www.tutorialspoint.com/cprogramming/c_array_of_pointers.htm
You can define arrays to hold a number of pointers.
*/




/*
3	Pointer to pointer - https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm
C allows you to have pointer on a pointer and so on.


// multiple indirection, or a chain of pointers. Pointer2 points to pointer1 which points to variable address which contains variable value
int number, **pointer2, *pointer1;

number = 3000;

//take the address of number
pointer1 = &number;

//take the address of pointer and assign it to pointer
pointer2 = &pointer1;

//print value of number
printf("Value of number: %d\n", number);
//print number using a pointer to number
printf("a pointer pointing to value: %d\n", *pointer1);
//print number using a pointer of pointer to number
printf("another pointer pointing to pointer holding value: %d\n", **pointer2);

printf("\n--------------------------------------------------------------\n");
*/


/*
4	Passing pointers to functions in C - https://www.tutorialspoint.com/cprogramming/c_passing_pointers_to_functions.htm
Passing an argument by reference or by address enable the passed argument to be changed in the calling function by the called function.
*/



/*
5	Return pointer from functions in C - https://www.tutorialspoint.com/cprogramming/c_return_pointer_from_functions.htm
C allows a function to return a pointer to the local variable, static variable, and dynamically allocated memory as well.
*/







//end of program




//integer - 4 bytes
//char    - 1 byte
//float   - 4 bytes


//0x7fff303bf5c8      140734002623944
//0x7fff303bf5c0      140734002623936

//0x7fff303bf570      140734002623856
//0x7fff303bf56c      140734002623852



/*  calculations before adding double pointer to calculations
The Rim Area of the washer is    0.32201
The weight of one washer is    1.62939
The weight of the batch of washers is    8.14693
*/

//*******************************************************************************************************
        // pid_t pid = 0;      //_t defined as a custom data type (ex:8 is a type int)
        
        // printf("Hi Rich\n");

        // pid = fork();       //variable pid is now a fork()
        // sleep(5);
        // //printf("Im Sleeping...shhhhhhhhhh\n");

        // // printf("Im Sleeping...shhhhhhhhhh %d\n",pid);
        // if (pid == 0) {
        //         printf("I am the child. %d\n", pid);
        // }
        // if (pid > 0) {
        //         printf("I am the parent, the child is %d.\n", pid);
        // }
        // if (pid < 0) {
        //         perror("In fork():");
        // }

        // exit;



// int main (int argc, char **argv)
// {
// // you are mom at the start

//     int kidpid,mompid;
//     int status, wstatus, ret;
//     //char *theargs [] = { NULL };
//     char *theargs[2];
//     char *theenv [] = { NULL };
//     char command[128];

//     //theargs[0]="./daughter";
//     theargs[0]="LOVE you MA!!!";
//     theargs[1]="5";
//     theargs[2]=NULL;

//     strcpy(command,"ps -ef|grep mother | grep -v grep");

//     system("clear");

//     printf ("Mom: Clean your Room!!!\n");
//     sleep(4);
//     printf ("Mom: WELL, I am waiting for an answer young lady!!!\n");
//     sleep(4);

//     ///the following commands are just used to show the PID of the "mother" process
//     //two different ways. using the function "getpid" and good old "ps -ef"
//     mompid=getpid();
//     printf ("mother=%i\n", mompid);
//     //strcpy(command,"ps -ef|grep mother | grep -v grep");
//     system(command);

//     kidpid = fork ();
//     //after the previous command we have two "mother" programs running 
//     //with the pointer on the next commanm
//     //so the next thing BOTH will do is sleep
//     //sleep(5);
    
//     if (kidpid == 0) 
//     //then this is the forked copy of "mother" 
//     //which will be swapped out for "daughter" via execvp
//     //otherwise it is the original "mother" command
//     {
//       //execve ("./daughter", theargs, theenv);
//       //execvp ("/usr/bin/pwd", theargs);
//       //execvp ("./endofpipe",theargs);
//       execvp ("./daughter", theargs);
//     }

//     //the below "wait" command shows the previous fork/exec waiting 
//     //to be complete before proceeding

//     wait(&wstatus);
//     //while (wait(&status) != kidpid)


//     // back to being mom

//     printf ("Mom: I don't hear any cleaning going on!!!\n");

// }



/*

Mom: Clean your Room!!!
Mom: WELL, I am waiting for an answer young lady!!!
mother=1308897
trubela+  915431       1 99 Mar03 ?        5-18:17:46 ./mother
trubela+ 1308897 1308375  0 11:20 pts/4    00:00:00 ./mother
greeting=LOVE you MA!!! delay=5
Daughter: MOM!!!!! LOVE you MA!!! !!!!
Daughter: I am cleaning my room
Daughter: text...text...text
my ...the daughter'...process id is 1308912
my mom's process id or my "parent process id/PPID" is 1308897
Daughter: tiktok


*/


// int main()
// {


    // for (int i = 0; i < ; i++) {
    //     /* code here */ 
    // }
    // printf("/$100 :>>\n");
    // printf(" :>> %c\n", );
    // printf("%s",command);


  // int thevar;
  // int* thepoint;
  // int** theptop;

  // thevar=5;

  // *thepoint=&thevar;

  // **theptop=&thepoint;

  // //&theptop+1;

  // printf("theptop :>> %d\n", theptop);


  //  int thevar=5;

  // if (thevar++==5)
  // {
  //       printf("4");

  //   exit(4);
  // }
  // else
  // {
  //   printf("2");
  //   exit(2);
  // }



  // int temp[5] = {1,2,3,4,5};

  // temp += 5;

  // for (int i = 5; i < 5; i++) {
  //     printf("temp[i] :>> %d\n", temp[i]);
  // }

// printf("select 1 for do\n");
// printf("select 2 for re\n");
// printf("select 3 for mi\n");

// int num;

// scanf("%i",&num);

// switch (num) {
//   case 1:
//     printf("doe, a deer, a female deer\n");
//     break;
//   case 2:
//     printf("ray, a lock of golden sun\n");
//     break;
//   case 3:
//     printf("me, a name I call myself\n");
//     break;
//   default:
//     printf("and that brings us back to do, do ,do ,do\n");
//     break;
// }

//     return 0;

/*

C

Write code that checks to see if either 0 or 6 numbers are entered on the command line

if there are 0 variables entered call a function named "interactive" (NO NEED TO WRITE THIS FUNCTION..PRETEND IT EXISTS ALREADY)

if there are 6 variables PASS THEM all to a different function "aretheynums" that checks to see if they are actually numbers(NO NEED TO WRITE THIS FUNCTION..PRETEND IT EXISTS ALREADY)

if there are more than 6 or less than 6 (but at least 1) variables send a "usage" message" such as...
USAGE: mycode string
...(the previous line is LITERAL!!!) and then go no further and leave the program with a return code of 6

otherwise go ahead and print out the numbers entered backwards and exit with a return code of 0
*/



// #include <stdio.h>
// #include <stdlib.h>

// int main (int argc, char *argv[]) {

//   if(argc == 0){
//     interactive();
//   }
//   else if(argc == 6){
//     for (int i = 1; i < argc; i++) {
//         aretheynums(atoi(i));
//     }
//   }

//   else if(argc > 6 || argc >= 1 && argc < 6){
//     printf("USAGE: mycode string");
//     return 6;
//   }

//   for (int i = argc; i >= 1; i--) {
//       printf("%i ", atoi(argv[i]));
//   }
// return 0;
//}



// int main() {

// //   for( a = 10; a < 20; a = a + 1 ){
// //    printf("value of a: %d\n", a);
// // }

//   int a = 10;
//   while (a < 20) {

//     printf("value of a: %d\n", a);
//     a = a+1;
//   }

//   return 0;


// }


int var1, var2, var3;
var1 = 1;
var2 = 2;
var3 = 3;

int main(){

  int *var01, *var02, *var03;
  int before[3];
  int after[3];

  var01 = &var1;
  var02 = &var2;
  var03 = &var3;

  printf("var1:%i - Address: %p\n", var1, &var1);
  printf("var2:%i - Address: %p\n", var2, &var2);
  printf("var3:%i - Address: %p\n", var3, &var3);

  printf("var1:%i - Address: %p\n", *var01, &var01);
  printf("var1:%i - Address: %p\n", *var02, &var02);
  printf("var1:%i - Address: %p\n", *var03, &var03);

  before[0] = &var1;
  before[1] = &var2;
  before[2] = &var3;

  after[0] = &var01;
  after[1] = &var02;
  after[2] = &var03;


}