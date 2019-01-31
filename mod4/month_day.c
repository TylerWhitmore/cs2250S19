/*
 * =====================================================================================
 *
 *       Filename:  month_day.c
 *
 *    Description:  take month and day from user and verify entries are valid
 *
 *        Version:  1.0
 *        Created:  01/31/2019 09:17:12 AM
 *       Revision:  none
 *       Compiler:  gcc month_day.c -o month_day.out
 *
 *         Author:  Tyler Whitmore (), tylerwhitmore@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define JANUARY 31      //1
#define FEBRUARY 28     //2
#define MARCH 31        //3
#define APRIL 30        //4
#define MAY 31          //5
#define JUNE 30         //6
#define JULY 31         //7
#define AUGUST 30       //8
#define SEPTEMBER 30    //9
#define OCTOBER 31      //10
#define NOVEMBER 30     //11
#define DECEMBER 31     //12
// Function Prototypes

// Main Function
int main()
{
    char cont = 'y';
    while(cont == 'y'||cont == 'Y'){
    int month = 0;
    int day = 0;
    int numDays = 0;
    //capture user input
    printf("Please enter the month(1-12): ");
    scanf("%d",&month);
    printf("Please enter the day(1-31): ");
    scanf("%d",&day);
    //use if statement to validate month
    switch(month){
        case(1):
            numDays = JANUARY;
            if(day < 1 || day > numDays){
                printf("Error, %d is not a valid day.\n",day);
            }
            else{printf("Your month is January and your day is %d.\n",day);}
            break;
        case(2):
            numDays = FEBRUARY;
            if(day < 1 || day > numDays){
                printf("Error, %d is not a valid day.\n",day);
            }
            else{printf("Your month is February and your day is %d.\n",day);}
            break;
        case(3):
            numDays = MARCH;
            if(day < 1 || day > numDays){
                printf("Error, %d is not a valid day.\n",day);
            }
            else{printf("Your month is March and your day is %d.\n",day);}
            break;
        case(4):
            numDays = APRIL;
            if(day < 1 || day > numDays){
                printf("Error, %d is not a valid day.\n",day);
            }
            else{printf("Your month is April and your day is %d.\n",day);}
            break;
        case(5):
            numDays = MAY;
            if(day < 1 || day > numDays){
                printf("Error, %d is not a valid day.\n",day);
            }
            else{printf("Your month is May and your day is %d.\n",day);}
            break;
        case(6):
            numDays = JUNE;
            if(day < 1 || day > numDays){
                printf("Error, %d is not a valid day.\n",day);
            }
            else{printf("Your month is June and your day is %d.\n",day);}
            break;
        case(7):
            numDays = JULY;
            if(day < 1 || day > numDays){
                printf("Error, %d is not a valid day.\n",day);
            }
            else{printf("Your month is July and your day is %d.\n",day);}
            break;
        case(8):
            numDays = AUGUST;
            if(day < 1 || day > numDays){
                printf("Error, %d is not a valid day.\n",day);
            }
            else{printf("Your month is August and your day is %d.\n",day);}
            break;
        case(9):
            numDays = SEPTEMBER;
            if(day < 1 || day > numDays){
                printf("Error, %d is not a valid day.\n",day);
            }
            else{printf("Your month is September and your day is %d.\n",day);}
            break;
        case(10):
            numDays = OCTOBER;
            if(day < 1 || day > numDays){
                printf("Error, %d is not a valid day.\n",day);
            }
            else{printf("Your month is October and your day is %d.\n",day);}
            break;
        case(11):
            numDays = NOVEMBER;
            if(day < 1 || day > numDays){
                printf("Error, %d is not a valid day.\n",day);
            }
            else{printf("Your month is November and your day is %d.\n",day);}
            break;
        case(12):
            numDays = DECEMBER;
            if(day < 1 || day > numDays){
                printf("Error, %d is not a valid day.\n",day);
            }
            else{printf("Your month is December and your day is %d.\n",day);}
            break;
        default:
            printf("Error, %d is not a valid month.\n",month);
            if(day < numDays || day > numDays){
                printf("Error, %d is not a valid day.\n",day);

            }
            break;
    }
    printf("Would you like to go again?(y/n): ");
    scanf(" %c",&cont);
    }
    //use switch to validate day of month
    return 0;
}
// Function Definitions


