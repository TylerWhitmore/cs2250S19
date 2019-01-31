/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description: calculate the quadrant based on input angle
 *                 Quadrant 1: angle between 0-90
 *                 Quadrant 2: angle between 90-180
 *                 Quadrant 3: angle between 180-270
 *                 Quadrant 4: angle between 270-360
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:35:06 AM
 *       Revision:  none
 *       Compiler:  gcc angle.c -o angle.out -lm
 *
 *         Author:  Tyler Whitmore (), tylerwhitmore@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h> //for fabs(decimals)
#include <stdlib.h>//for abs
// Constants

// Function Prototypes

// Main Function
int main()
{
    int input = 0;
    printf("Please input an angle integer: ");
    scanf("%d",&input);
    while(input < 0 || input > 360){
        if(input > -360 && input < 0){
            input = 360 - abs(input);
        }
        if(input < -360){
            input = input + 360;
        } 
        if(input > 360){
            input = input - 360;
        }
    }
    if(input > 0 && input < 90){//quadrant1
        printf("Your angle is in quadrant I\n");
    }
    else if(input > 90 && input < 180){//quadrant2
        printf("Your angle is in quadrant II\n");
    }
    else if(input > 180 && input < 270){//quadrant3
        printf("Your angle is in quadrant III\n");
    }
    else if(input > 270 && input < 360){//quadrant4
        printf("Your angle is in quadrant IV\n");
    }
    else{
        printf("Your angle %d is not in a quadrant\n",input);
    }
    return 0;
}
// Function Definitions


