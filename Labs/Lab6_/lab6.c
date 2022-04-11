// CSIT231-Sys. Prog. 3/29/22
// Justin Trubela - Lab6
// Purpose - Coordinate system

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Coordinate Object Structure
struct Coordinates{
    char coordinateName[8]; //The label of the coordinates
    float xCoord; // x coordinate value
    float yCoord; // y coordinate value
} coordinate;

//Function to calculate distance from another point
float distance(char p1[8], char p2[8], float x1, float x2, float y1, float y2){
    float calculation;
    calculation = sqrt( pow((x1-x2),2) + pow((y1-y2),2) ); // c = √(xA − xB)^2 + (yA − yB)^2

    printf("\nDistance between %s and %s is: \t\t\t\t%.2f", p1, p2, calculation);
    return calculation;
}

//Function to print out the current Coordinate
void printCoordinate( struct Coordinates coordinate) {
    printf("%s (x:%.2f, y:%.2f)", coordinate.coordinateName, coordinate.xCoord, coordinate.yCoord);
}

//-----------------------------------MAIN--------------------------------------

int main () {
    //-----------------------------VARIABLES---------------------------------
    // Define number of entries variables
    char ENTRIESstring[8]; 
    int ENTRIES;

    // Define closest and furthest points variables
    float closestPoints = INFINITY, furthestPoints = 0.0;
    int closestPoint1, closestPoint2, furthestPoint1, furthestPoint2;
    // Define calculation variable to check against closest and furthest point
    float calculation;

    //---------------GET COORDINATE INFORMATION FROM INPUT.TXT FILE----------------
    // Get number of calculations from the input.txt file and turn into integer
    scanf("%s", ENTRIESstring);
    ENTRIES = atoi(ENTRIESstring);

    // The number of coordinates to be entered MUST be greater than 1...Check
    if (ENTRIES <= 1){
        printf("Update your input.txt file with the appropriate amount of coordinates");
        exit(1);
    }
    else{
        // Create the array of Coordinate Objects
        struct Coordinates myCoordinates[ENTRIES];

        // Try to get coord name
        // the label CANNOT be used more than once...Check the same label is NEVER used twice.
        // for each coordinate
        for(int i = 0; i<ENTRIES; i++){
            //set coordinate label
            scanf("%s", &*myCoordinates[i].coordinateName);
            char *p1 = myCoordinates[i].coordinateName;
            //for every other coordinate, 
            for(int j = 0; j<ENTRIES; j++){
                char *p2 = myCoordinates[j].coordinateName;

                //if coordinate name is the same as another, then exit
                if( i!=j && strcmp( p1,p2 ) == 0 ){
                    printf("You entered a coordinate label with the same names as another."); 
                    printf("\nUpdate your input.txt file to fix this");
                    exit(1);
                }
                //otherwise continue
                else{ continue; }
            }

            //Coordinates should be positive REAL numbers between 1 and 100...Check
            scanf("%f", &myCoordinates[i].xCoord);
            float xCo = myCoordinates[i].xCoord;

            scanf("%f", &myCoordinates[i].yCoord);
            float yCo = myCoordinates[i].yCoord;
            //if any of the coordinates scanned in is < 1 or > 100, then exit
            if(xCo < 1.0 || xCo > 100.0 || yCo < 1.0 || yCo > 100.0 ){
                printf("One or more of your coordinates is less than or greater than 100");
                exit(1);
            }
            else{ continue; }
        }

        //-------------------------Furthest/Closest calculations------------------------
        for(int i = 0; i < ENTRIES; i++){
            for (int j = 0; j < ENTRIES; j++) {

                //Coordinate 1 information
                char *p1 = myCoordinates[i].coordinateName;
                float x1 = myCoordinates[i].xCoord;
                float y1 = myCoordinates[i].yCoord;
                //Coordinate 2 information
                char *p2 = myCoordinates[j].coordinateName;
                float x2 = myCoordinates[j].xCoord;
                float y2 = myCoordinates[j].yCoord;
                
                //if coordinate 1 is equal to coordinate 2, then skip it
                if(i==j){ continue; }
                else{
                    //print Coordinate information
                    printCoordinate(myCoordinates[i]);
                    printf(" and ");
                    printCoordinate(myCoordinates[j]);

                    //Calcuate the distance from coordinate 1 and coordinate 2
                    calculation = distance(p1, p2, x1, x2, y1, y2);

                    //Determine furthest/closest point/points
                    if (calculation < closestPoints){
                        closestPoint1 = i;
                        closestPoint2 = j;
                        closestPoints = calculation;
                    }
                    else if (calculation > furthestPoints){
                        furthestPoint1 = i;
                        furthestPoint2 = j;
                        furthestPoints = calculation;
                    }
                    printf("\n-----------------------------------------------------------------------\n");
                }
            }
        }
        
        printf("Closest points:  point %s and point %s - distance:  \t%.2f", myCoordinates[closestPoint1].coordinateName, myCoordinates[closestPoint2].coordinateName, closestPoints);
        printf("\nFurthest points: point %s and point %s - distance: \t%.2f\n", myCoordinates[furthestPoint1].coordinateName, myCoordinates[furthestPoint2].coordinateName, furthestPoints);
        return(0);
    }
}