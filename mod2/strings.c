/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:49:28 AM
 *       Revision:  none
 *       Compiler:  gcc strings.c -o strings
 *
 *         Author:  Tyler Whitmore (), tylerwhitmore@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const int SIZE = 50;
// Function Prototypes

// Main Function
int main()
{
    //string is just an array of chars
    char fName[SIZE];
    printf("Please enter your name: ");
    //when using arrays, do not include the '&' operator in scanf
    scanf("%s",fName);
    printf("Hi [%s]\n",fName);
    return 0;
}
// Function Definitions


