// CSIT231-Sys. Prog. 2/24/22
// Justin Trubela - Lab4
// Purpose - pointers lab
 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    // PI is the ratio of diameter to the circumfrence of a circle
    #define PI 3.14159

    // Variables
    double innerD,    *innerDP1,    **innerDP2;
    double outerD,    *outerDP1,    **outerDP2;
    double density,   *densityP1,   **densityP2; 
    double thickness, *thicknessP1, **thicknessP2;
    int    quantity,  *quantityP1,  **quantityP2;

    /* Calculated variables */
    double weight, *weightP1, **weightP2;
    double volume, *volumeP1, **volumeP2; 
    double batchWeight, *batchWeightP1, **batchWeightP2; 
    double innerA, *innerAP1, **innerAP2;
    double innerDSquared, *innerDSquaredP1, **innerDSquaredP2;
    double outerA, *outerAP1, **outerAP2;
    double outerDSquared, *outerDSquaredP1, **outerDSquaredP2;
    double area, *areaP1, **areaP2;

    //if the user does exactly the number of commands on the command line 
        //then the user may enter the values interactively,
    if(argc != 6){
        printf("\nSorry, that was not enough items entered. Enter numbers now.\n");

        //Enter the Innder Diameter
        printf("\nPlease enter the Inner Diameter of the Washer in cm: ");
            scanf("%lf", &innerD);
            innerDP1 = &innerD;
                innerDP2 = &innerDP1;

        //Enter the Outer Diameter
        printf("Please enter the Outer Diameter of the Washer in cm: ");
            scanf("%lf", &outerD);
            outerDP1 = &outerD;
                outerDP2 = &outerDP1;

        //Enter the density
        printf("Please enter the density of the material of the Washer in g/cm2: ");
            scanf("%lf", &density);
            densityP1 = &density;
                densityP2 = &densityP1;

        //Enter the thickness
        printf("Please enter the thickness of the Washer in cm: ");
            scanf("%lf", &thickness);
            thicknessP1 = &thickness;
                thicknessP2 = &thicknessP1;

        //Enter the number of washers
        printf("Please enter the number of washers ordered: ");
            scanf("%d", &quantity);
            quantityP1 = &quantity;
                quantityP2 = &quantityP1;
    }
    else{
        ///Allow the user to input ALL of the variables on the command line in a fixed order

        //inner diameter
        innerD = atof(argv[1]);
            innerDP1 = &innerD;
            innerDP2 = &innerDP1;

        //outer diameter
        outerD = atof(argv[2]);
            outerDP1 = &outerD;
            outerDP2 = &outerDP1;

        //thickness
        thickness = atof(argv[3]);
            thicknessP1 = &thickness;
            thicknessP2 = &thicknessP1;

        //density
        density = atof(argv[4]);
            densityP1 = &density;
            densityP2 = &densityP1;

        //quantity
        quantity = atoi(argv[5]);
            quantityP1 = &quantity;
            quantityP2 = &quantityP1;
    }

//Please add the "math.h" library and use at least one part of this library to change how your calculations are done. 
//double exp(double x);
    innerDSquaredP1 = &innerDSquared;
    innerDSquaredP2 = &innerDSquaredP1;
    **innerDSquaredP2 = pow(**innerDP2/2.0,2.0);

    innerAP1 = &innerA;
    innerAP2 = &innerAP1;
    **innerAP2 = PI * **innerDSquaredP2;

    outerDSquaredP1 = &outerDSquared;
    outerDSquaredP2 = &outerDSquaredP1;
    **outerDSquaredP2 = pow(**outerDP2/2.0,2.0);

    outerAP1 = &outerA;
    outerAP2 = &outerAP1;
    **outerAP2 = PI * **outerDSquaredP2;

    areaP1 = &area;
    areaP2 = &areaP1;
    **areaP2 = **outerAP2 - **innerAP2;

    volumeP1 = &volume;
    volumeP2 = &volumeP1;
    **volumeP2 = **areaP2 * **thicknessP2;

    weightP1 = &weight;
    weightP2 = &weightP1;
    **weightP2 = **volumeP2 * **densityP2;

    batchWeightP1 = &batchWeight;
    batchWeightP2 = &batchWeightP1;
    **batchWeightP2 = **quantityP2 * **weightP2; 

//Print the output of calculations
printf("\n----------------------CALCULATIONS--------------------------");
    printf("\nThe Rim Area of the washer is %10.5lf\n", **areaP2);
    printf("The weight of one washer is %10.5lf\n", **weightP2);
    printf("The weight of the batch of washers is %10.5lf\n", **batchWeightP2);
printf("---------------------MEMORY ADDRESSES-----------------------");


//Print the memory addresses of ALL of the variable defined in your program at the VERY end of the code. 
    //No automation here...just the name of the variable and the memory address at which it resided during the  run. 

    //inner D
    printf("\nMemory address of      innerD:             %p", (void *)&innerD);
    printf("\nMemory address of      *innerDP1:          %p", (void *)&innerDP1);
    printf("\nMemory address of      *innerDP2:          %p", (void *)&innerDP2);

    //outerD
    printf("\n\nMemory address of      outerD:             %p", (void *)&outerD);
    printf("\nMemory address of      *outerDP1:          %p", (void *)&outerDP1);
    printf("\nMemory address of      *outerDP2:          %p", (void *)&outerDP2);

    //density
    printf("\n\nMemory address of      density:            %p", (void *)&density);
    printf("\nMemory address of      *densityP1:         %p", (void *)&densityP1);
    printf("\nMemory address of      *densityP2:         %p", (void *)&densityP2);

    //thickness
    printf("\n\nMemory address of      thickness:          %p", (void *)&thickness);
    printf("\nMemory address of      *thicknessP1:       %p", (void *)&thicknessP1);
    printf("\nMemory address of      *thicknessP2:       %p", (void *)&thicknessP2);

    //quantity - Integer
    printf("\n\nMemory address of      quantity:           %p", (void *)&quantity);
    printf("\nMemory address of      *quantityP1:        %p", (void *)&quantityP1);
    printf("\nMemory address of      *quantityP2:        %p", (void *)&quantityP2);

    //weight
    printf("\n\nMemory address of      weight:             %p", (void *)&weight);
    printf("\nMemory address of      weightP1:           %p", (void *)&weightP1);
    printf("\nMemory address of      weightP2:           %p", (void *)&weightP2);

    //volume
    printf("\n\nMemory address of      volume:             %p", (void *)&volume);
    printf("\nMemory address of      volumeP1:           %p", (void *)&volumeP1);
    printf("\nMemory address of      volumeP2:           %p", (void *)&volumeP2);\

    //batchWeight
    printf("\n\nMemory address of      batchWeight:        %p", (void *)&batchWeight);
    printf("\nMemory address of      batchWeightP1:      %p", (void *)&batchWeightP1);
    printf("\nMemory address of      batchWeightP2:      %p", (void *)&batchWeightP2);

    //innerA
    printf("\n\nMemory address of      innerA:             %p", (void *)&innerA);
    printf("\nMemory address of      innerAP1:           %p", (void *)&innerAP1);
    printf("\nMemory address of      innerAP2:           %p", (void *)&innerAP2);

    //innerDSquared
    printf("\n\nMemory address of      innerDSquared:      %p", (void *)&innerDSquared);
    printf("\nMemory address of      innerDSquaredP1:    %p", (void *)&innerDSquaredP1);
    printf("\nMemory address of      innerDSquaredP2:    %p", (void *)&innerDSquaredP2);

    //outerA
    printf("\n\nMemory address of      outerA:             %p", (void *)&outerA);
    printf("\nMemory address of      outerAP1:           %p", (void *)&outerAP1);
    printf("\nMemory address of      outerAP2:           %p", (void *)&outerAP2);

    //outerDSquared
    printf("\n\nMemory address of      outerDSquared:      %p", (void *)&outerDSquared);
    printf("\nMemory address of      outerDSquaredP1:    %p", (void *)&outerDSquaredP1);
    printf("\nMemory address of      outerDSquaredP2:    %p", (void *)&outerDSquaredP2);

    //area
    printf("\n\nMemory address of      area:               %p", (void *)&area);
    printf("\nMemory address of      areaP1:             %p", (void *)&areaP1);
    printf("\nMemory address of      areaP2:             %p", (void *)&areaP2);

    printf("\n------------------------------------------------------------\n");

}

