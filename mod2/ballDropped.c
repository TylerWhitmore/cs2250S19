/*
 * =====================================================================================
 *
 *       Filename:  ballDropped.c
 *
 *    Description:  get the distance travelled by a ball when it is dropped
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:07:30 AM
 *       Revision:  none
 *       Compiler:  gcc ballDropped.c -o ballDropped -lm
 *
 *         Author:  Tyler Whitmore (), tylerwhitmore@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants
const double GRAVITY = 9.8;   // m/s^2
// Function Prototypes

// Main Function
int main()
{
    double time = 0.0; //in seconds
    double distance = 0.0;    //in meters
    //formula: s = 0.5 g t^2
    //take user input: Time travelled
    printf("Enter an amount of time travelled in seconds: \n");
    scanf("%lf",&time);
    distance = (0.5*GRAVITY*pow(time,2));
    printf("After %0.2lf seconds, the ball travelled: %0.2lf meters.\n",time,
            distance);
    return 0;
}
// Function Definitions


