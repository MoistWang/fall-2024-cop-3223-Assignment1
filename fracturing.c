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


#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
void outputPoints(double x1, double y1, double x2, double y2);

int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
}

void outputPoints(double x1, double y1, double x2, double y2)
{
    printf("Point #1 entered: x1 = %.3lf; y1 = %.3lf\n", x1, y1);
    printf("Point #2 entered: x1 = %.3lf; y1 = %.3lf\n", x2, y2);
}

double calculateDistance()
{
    double x1, y1, x2, y2;
    printf("Please input points for the distance calculation: ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    outputPoints(x1,y1,x2,y2);
    double distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("The distance between the two points is %.3lf\n", distance);
    return distance;

}

double calculatePerimeter()
{

    double x1, y1, x2, y2;
    printf("Please input points for the perimeter calculation: ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    outputPoints(x1,y1,x2,y2);
    double perimeter = 2*fabs(y2-y1) + 2*fabs(x2-x1);
    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);
    return 1.0;

}

double calculateArea()
{
    double x1, y1, x2, y2;
    printf("Please input points for the area calculation: ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    outputPoints(x1,y1,x2,y2);
    double area = fabs((y2-y1)*(x2-x1));
    printf("The area of the city encompassed by your request is %.3lf\n", area);
    return 1.0;

}

double calculateWidth()
{
    double x1, y1, x2, y2;
    printf("Please input points for the width calculation: ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    outputPoints(x1,y1,x2,y2);
    double width = fabs(x2-x1);
    printf("The width of the city encompassed by your request is %.3lf\n", width);
    return 1.0;
}

double calculateHeight()
{
    double x1, y1, x2, y2;
    printf("Please input points for the height calculation: ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    outputPoints(x1,y1,x2,y2);
    double height = fabs(y2-y1);
    printf("The height of the city encompassed by your request is %.3lf\n", height);
}


