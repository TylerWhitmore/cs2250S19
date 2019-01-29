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
#define BoilC 100
#define FreezeC 0
#define BoilF 212
#define FreezeF 32
#define Gas 2
#define Liquid 1
#define Solid 0
// Function Prototypes

// Main Function
int main()
{
    //float temp = 7.9; //Celsius
    double in_temp, out_temp;
    int choice;
    int state;
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
    //task 2
    //test for boiling point, freezing point, and liquid point of water
    if(choice == CELSIUS){
        if(in_temp >= BoilC){
            state = Gas;
        }
        else if(in_temp <= FreezeC){
            state = Solid;
        }
        else{
            state = Liquid;
        }
    }
    else if(choice == FAHRENHEIT){
        if(in_temp >= BoilF){
            state = Gas;
        }
        else if(in_temp <= FreezeF){
            state = Solid;
        }
        else{
            state = Liquid;
        }
    }
    switch (state){
        case Gas:
            printf("Water is boiling\n");
            break;
        case Solid:
            printf("Water is frozen\n");
            break;
        case Liquid:
            printf("Water is liquid\n");
            break;
    }
    return 0;
}
// Function Definitions


