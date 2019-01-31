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
#define JANUARY 31
#define FEBRUARY 28
#define MARCH 31
#define APRIL 30
#define MAY 31
#define JUNE 30
#define JULY 31
#define AUGUST 30
#define SEPTEMBER 30
#define OCTOBER 31
#define NOVEMBER 30
#define DECEMBER 31
// Function Prototypes

// Main Function
int main()
{
    int month = 0;
    int day = 0;
    //capture user input
    printf("Please enter the month(1-12): ");
    scanf("%d",&month);
    printf("Please enter the day(1-31: ");
    scanf("%d",&day);
    //use if statement to validate month
    //use switch to validate day of month
    return 0;
}
// Function Definitions


