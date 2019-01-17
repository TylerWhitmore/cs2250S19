/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  Calculate BMI
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:00:18 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyler Whitmore (), tylerwhitmore@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    //BMI = weight/height^2
    //1) Capture user input: Weight and Height
    //2) Capture BMI
    //3) Display BI
    float weight = 0.0;
    float height = 0.0;
    float BMI = 0.0;
    printf("Please enter a weight in kilograms:\n ");
    scanf("%f",&weight);
    printf("Please enter a height in meters: \n");
    scanf("%f",&height);
    float temp = powf(height,2);
    BMI = weight/temp;
    printf("With given weight: %0.2f\n",weight);
    printf("And given height: %0.2f\n",height);
    printf("The BMI is: %0.2f\n",BMI);

    return 0;
}
// Function Definitions


