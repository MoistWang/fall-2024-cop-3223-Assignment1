//********************************************************
//
// fracturing.c
// Author: Michael Wang (UCFID 5611386)
// Class: COP 3223, Professor Parra
// Submission for Assingment 1 
//
//********************************************************

#include <stdio.h>  // Input/output header
#include <math.h>   // Header for math operations used in calculations
#include <stdlib.h> // Header for dynamic allocation

#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double* inputPoints(int size);
void outputPoints(double* inputs);

int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
}

double* inputPoints(int size)     
{
    /*  Creates new array for each call. 
    *   Array size dependant on arguments.
    *   Returns array to calculating function. Memory is freed at end of calculation function.
    */

    double* inputs = (double*)malloc(2*size*sizeof(double));
    for(int i = 0; i < 2*size; i++) scanf("%lf", &inputs[i]);
    return inputs;

}

void outputPoints(double* inputs)
{
    printf("Point #1 entered: x1 = %.5lf; y1 = %.5lf\n", inputs[0], inputs[1]);
    printf("Point #2 entered: x2 = %.5lf; y2 = %.5lf\n", inputs[2], inputs[3]);
}

double calculateDistance()
{
    
    /*  Using pythagoras' theorem, we can find distance
    *   a^2 + b^2 = c^2 
    *   => c = sqrt( a^2 + b^2 )
    *   => Distance = sqrt( x^2 + y^2 )
    *   where x = x2 - x1 and y = y2 - y1
    */
    printf("\n\n\nPlease input points for the diameter calculation: ");
    double* data = inputPoints(2);
    outputPoints(data);
    double distance = sqrt(pow(data[2]-data[0],2)+pow(data[3]-data[1],2)); 
    printf("\nThe distance between the two points is %.5lf", distance);
    free(data);
    return distance;

}

double calculatePerimeter()
{
    //  Perimeter = 2pi*r
    //  r = diameter/2
    
    double diameter = calculateDistance();
    double radius = diameter/2.0;
    double perimeter = 2.0 * PI * radius;

    printf("\nThe perimeter of the city encompassed by your request is %.5lf\n", perimeter);
    return 1.0;

}

double calculateArea()
{
    //  Area = PI*r^2,
    //  r = diameter/2

    double diameter = calculateDistance();
    double radius = diameter/2.0;
    double area = PI*radius*radius;

    printf("\nThe area of the city encompassed by your request is %.5lf\n", area);
    return 1.0;

}

double calculateWidth()
{
    // Width = x2 - x1

    printf("\nPlease input points for the width calculation: ");
    double* data = inputPoints(2);
    outputPoints(data);
    double width = fabs(data[2]-data[0]);
    printf("\n\n\nThe width of the city encompassed by your request is %.5lf\n", width);
    free(data);
    return 1.0;
}

double calculateHeight()
{
    // Height = y2 - y1

    printf("\n\n\nPlease input points for the height calculation: ");
    double* data = inputPoints(2);
    outputPoints(data);
    double height = fabs(data[3]-data[1]);
    printf("\nThe height of the city encompassed by your request is %.5lf\n", height);
    free(data);
    return 1.0;
}



