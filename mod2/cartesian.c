/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  calculate the cartesian coordinates based on:
 *                  radius and the theta angle(degrees)
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:35:50 AM
 *       Revision:  none
 *       Compiler:  gcc cartesian.c -o cartesian.out -lm
 *
 *         Author:  Tyler Whitmore (), tylerwhitmore@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants
const double PI = 3.1415926;
// Function Prototypes

// Main Function
int main()
{
    double radius = 0.0;
    double theta = 0.0;
    double radians = 0.0;
    double x = 0.0;
    double y = 0.0;
    //1) capture user input for radius and theta(degrees)
    printf("Enter the radius: ");
    scanf("%lf",&radius);
    printf("Enter the angle theta in degrees: ");
    scanf("%lf",&theta);
    //2) convert theta to radians
    radians = theta*(PI/180);
    //3) calculate cartesian coordinates
    //=(a+rcos(theta),b+rsin(theta))
    x = radius*(cos(radians));
    y = radius*(sin(radians));
    //4) print result
    printf("With radius: %0.2lf\nAnd theta angle: %0.2lf\n",radius,theta);
    printf("Coordinates are: (%0.2lf,%0.2lf)\n",x,y);
    return 0;
}
// Function Definitions


