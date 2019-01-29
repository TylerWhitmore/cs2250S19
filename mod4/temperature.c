/*
 * =====================================================================================
 *
 *       Filename:  temperature.c
 *
 *    Description:  program to calculate temperature
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:27:06 AM
 *       Revision:  none
 *       Compiler:  gcc temperature.c -o temperture
 *
 *         Author:  Tyler Whitmore (), tylerwhitmore@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
//const int CELSIUS = 0;
//const int FAHRENHEIT = 1;
#define CELSIUS 0
#define FAHRENHEIT 1
// Function Prototypes

// Main Function
int main()
{
    //float temp = 7.9; //Celsius
    double in_temp, out_temp;
    int choice;
    //1) Ask user which temperature mode they want to use
    printf("Welcome to the temperature calculator\n");
    printf("Please enter your choice:\n");
    printf("\t0 for Celsius or 1 for Fahrenheit: ");
    scanf("%d",&choice);
    if(choice == CELSIUS)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%lf",&in_temp);
        out_temp = (in_temp*9.0/5)+32;
        printf("Your temperature in Fahrenheit is: %.02lf\n",out_temp);
    }
    else if(choice == FAHRENHEIT)
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf",&in_temp);
        out_temp = (in_temp -32)*(5.0/9);
        printf("Your temperature in Celsius is: %.02lf\n",out_temp);
    }
    else
    {
        printf("Sorry, you did not enter a 0 or 1\n");
        return 0;
    }
    /*
    //use %f to capture float info
    //use %lf to capture double info
    scanf("%f",&temp);
    double f_temp = 0;
    f_temp = (temp * 9/5)+32;
    printf("I see, your temp is %0.2lf in F.\n",f_temp);
    */
    return 0;
}
// Function Definitions


