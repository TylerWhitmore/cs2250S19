/*
 * =====================================================================================
 *
 *       Filename:  float.c
 *
 *    Description:  playing with some floats
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:27:06 AM
 *       Revision:  none
 *       Compiler:  gcc float.c -o float
 *
 *         Author:  Tyler Whitmore (), tylerwhitmore@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    float temp = 7.9; //Celsius
    //for floats use %f placeholder
    //for doubles use %lf placeholder
    printf("The temperature is %0.2f Celsius\n",temp);
    printf("What is the temperature in Ogden now: \n");
    //use %f to capture float info
    //use %lf to capture double info
    scanf("%f",&temp);
    double f_temp = 0;
    f_temp = (temp * 9/5)+32;
    printf("I see, your temp is %0.2lf in F.\n",f_temp);
    return 0;
}
// Function Definitions


