/*
 * =====================================================================================
 *
 *       Filename:  chars.c
 *
 *    Description:  learning chars
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:02:56 AM
 *       Revision:  none
 *       Compiler:  gcc chars.c -o chars
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
    double age;
    double weight;
    char sex;
    printf("Enter your age in years: \n");
    scanf("%lf",&age);
    printf("Enter your weight in kilograms: \n");
    scanf("%lf",&weight);
    printf("Enter your gender: \n");
    scanf(" %c",&sex);
    printf("Your age is: %0.0lf\nYour weight is: %0.2lfkg\nYour gender is: %c\n",
            age,weight,sex);
    return 0;
}
// Function Definitions


