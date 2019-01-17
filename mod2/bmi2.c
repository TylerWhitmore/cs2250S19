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
 *       Compiler:  gcc bmi2.c -o bmi2 -lm
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
    float weight = 0;
    float height = 0;
    float BMI = 0;
    printf("Please enter a weight in kilograms:\n ");
    scanf("%f",&weight);
    printf("Please enter a height in meters: \n");
    scanf("%f",&height);
    float temp = pow(height,2);
    BMI = weight/temp;
    printf("With given weight: %0.2fkg\n",weight);
    printf("And given height: %0.2fm\n",height);
    printf("The BMI is: %0.2f\n",BMI);

    return 0;
}
// Function Definitions


