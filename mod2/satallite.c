/*
 * =====================================================================================
 *
 *       Filename:  satallite.c
 *
 *    Description:  calculate altitude of satallite
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:47:27 AM
 *       Revision:  none
 *       Compiler:  gcc satallite.c -o satallite.out -lm
 *
 *         Author:  Tyler Whitmore (), tylerwhitmore@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants
const double GRAVITY = 6.67e-11; //Newton's Constant
const double MASSEARTH = 5.97e24; //kg
const double RADIUSEARTH = 6.371e6; //Radius of Earth in meters
const double PI = 3.1415941;
// Function Prototypes

// Main Function
int main()
{
    double period = 0.0; // in seconds
    double height = 0.0; // in meters
    //1) Enter the period
    printf("Enter the period in seconds: \n");
    scanf("%lf",&period);
    //formula: height=((Gravity*MassOfEarth*Time^2)/4pi^2)^1/3 -RadiusOfEarth
    height = 
        cbrt((GRAVITY * MASSEARTH * pow(period,2))/(4*pow(PI,2)))-RADIUSEARTH;

    //Display result
    printf("The height after %0.2lf seconds is: %0.2lf meters\n",period,height);
    return 0;
}
// Function Definitions


