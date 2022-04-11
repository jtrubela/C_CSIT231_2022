//Justin Trubela
//lab3.c
//CSIT231-1 Professor Myers
//2/22/2022
//Simple calculator program from command line

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Accept 2 arguments on the command line...
//1. The name of your Calculator                //ENTER ./lab3 <calculatorName> <magicNumber>
//2.  a "magic" number
int main( int argc, char *argv[] ){
  //---------------------------------------------------------------------------------------//
  //                                    Declare Variables                                  //
  //---------------------------------------------------------------------------------------//
    char *CalculatorName = argv[1];
    //Magic number from command line
    int magicNumber = atoi(argv[2]);
    //Expression Variables
    printf("%i",argc);
    int num1;
    char operand;
    int num2;
    int answer;
    //find out how many times the user entered correct operands
    int successAmount=0;
  //---------------------------------------------------------------------------------------//
  //                                    Ask the user 6x                                    //
  //---------------------------------------------------------------------------------------//
    printf("\nWelcome to %s simple calculator. The magic number is %i\n", CalculatorName, magicNumber);

    for(int index = 0; index<6; index++){
        //Get the user to input the expression
        printf("\nEnter an mathematic expression in the form 2+2: ");
        scanf("%i%c%i", &num1,&operand,&num2);
        //---------------------------------------------------------------------------------------//
        //                          Switch cases for each operand                                //
        //---------------------------------------------------------------------------------------//
        switch (operand) {
            //if operand is addition
            case '+':
                //increment success amount to determine return value
                successAmount++;
                //get answer for given operand
                answer = num1 + num2;
                //give answer back to user
                printf("\n%s says %i plus %i equals %i\n", CalculatorName, num1, num2, answer);
                //if the user enters the magic number let them know
                if (num1 == magicNumber || num2 == magicNumber) {
                    printf("\n%s says %i is the MAGIC NUMBER.....WOOOOOOOO!!!!",CalculatorName, magicNumber);
                }
                printf("\n-------------------------------------------------------");
                break;

            //if operand is multiplication
            case '*':
                //increment success amount to determine return value
                successAmount++;
                //get answer for given operand
                answer = num1 * num2;
                //give answer back to user
                printf("\n%s says %i times %i equals %i\n", CalculatorName, num1, num2, answer);
                //if the user enters the magic number let them know
                if (num1 == magicNumber || num2 == magicNumber) {
                    printf("\n%s says %i is the MAGIC NUMBER.....WOOOOOOOO!!!!",CalculatorName, magicNumber);
                }
                printf("\n-------------------------------------------------------");
                break;

            //if operand is division
            case '/':
                //increment success amount to determine return value
                successAmount++;
                //get answer for given operand
                answer = num1 / num2;
                //give answer back to user
                printf("\n%s says %i divided by %i equals %i\n", CalculatorName, num1, num2, answer);
                //if the user enters the magic number let them know
                if (num1 == magicNumber || num2 == magicNumber) {
                    printf("\n%s says %i is the MAGIC NUMBER.....WOOOOOOOO!!!!",CalculatorName, magicNumber);
                }
                printf("\n-------------------------------------------------------");
                break;

            //if operand is subtraction
            case '-':
                //increment success amount to determine return value
                successAmount++;
                //get answer for given operand
                answer = num1 - num2;
                //give answer back to user
                printf("\n%s says %i minus %i equals %i\n", CalculatorName, num1, num2, answer);
                //if the user enters the magic number let them know
                if (num1 == magicNumber || num2 == magicNumber) {
                    printf("\n%s says %i is the MAGIC NUMBER.....WOOOOOOOO!!!!",CalculatorName, magicNumber);
                }
                printf("\n-------------------------------------------------------");
                    break;

            //if operand is modulo
            case '%':
                //increment success amount to determine return value
                successAmount++;
                //get answer for given operand
                answer = num1 % num2;
                //give answer back to user
                printf("\n%s says %i modulo %i equals %i\n", CalculatorName, num1, num2, answer);
                //if the user enters the magic number let them know
                if (num1 == magicNumber || num2 == magicNumber) {
                    printf("\n%s says %i is the MAGIC NUMBER.....WOOOOOOOO!!!!",CalculatorName, magicNumber);
                }
                printf("\n-------------------------------------------------------");                        
                break;
            //if operand cannot be determined let the user know
            default:
                printf("\n%s never learned how to do that, I can only do +, -, /, * or %%\n", CalculatorName);
                break;
        }
    }
    //---------------------------------------------------------------------------------------//
    //                          Return value depending on how many                           //
    //                          correct operands are used during execution                   //
    //---------------------------------------------------------------------------------------//
    if(successAmount == 6){
        printf("\nSuccessful attempt. Returning magic number %i\n", magicNumber);
        return magicNumber;  
    } else {
        return 0;
    }  
}