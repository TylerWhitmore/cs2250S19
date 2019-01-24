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

// Constants
const double pi = 3.1415;
// Function Prototypes

// Main Function
int main()
{
    double radius;
    double theta;
    //1) capture user input for radius and theta(degrees)
    printf("Enter the radius: ");
    scanf("%lf",&radius);
    printf("Enter the angle theta in degrees: ");
    scanf("%lf",&theta);
    //2) convert theta to radians
    theta = theta*(pi/180);
    //3) calculate cartesian coordinates
    //4) print result
    return 0;
}
// Function Definitions


