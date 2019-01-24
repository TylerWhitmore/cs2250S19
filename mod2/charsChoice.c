/*
 * =====================================================================================
 *
 *       Filename:  charsChoice.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/22/2019 10:12:12 AM
 *       Revision:  none
 *       Compiler:  gcc charsChoice.c -o charsChoice.out
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
    char letter;
    double grade;
    printf("Enter the grade you want fro this class\n");
    printf("Your choices are: 'A'\t'B'\t'C'\n");
    printf("\t\t\t'D' or 'F' : ");
    scanf("%c",&letter);
    if(letter == 'A'||letter == 'a')
    {
        grade = 94;
    }
    if(letter == 'B'||letter == 'b')
    {
        grade = 84;
    }
    printf("To get an [%c], you need the following grade:%0.2lf\n",letter,grade);
    return 0;
}
// Function Definitions


