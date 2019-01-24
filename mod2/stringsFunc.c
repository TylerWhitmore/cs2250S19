/*
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  learn some string functions
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:08:17 AM
 *       Revision:  none
 *       Compiler:  gcc stringsFunc.c -o stringsFunc.out
 *
 *         Author:  Tyler Whitmore (), tylerwhitmore@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h> //for string manipulations
// Constants
int SIZE = 50;
// Function Prototypes

// Main Function
int main()
{
    char first[SIZE];
    char last[SIZE];
    char full[SIZE*2];
    printf("Enter first name: ");
    scanf("%s",first);
    printf("Enter last name: ");
    scanf("%s",last);
    strcpy(full,first);
    strcat(full," ");
    strcat(full,last);
    printf("First name: %s\nLast name: %s\nFull name: %s\n",first,last,full);
    return 0;
}
// Function Definitions


