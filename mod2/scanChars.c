/*
 * =====================================================================================
 *
 *       Filename:  scanChars.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:43:56 AM
 *       Revision:  none
 *       Compiler:  gcc scanChars.c -o scanChars
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
    char cIn;
    printf("Enter a character: ");
    scanf(" %c", &cIn);
    printf("You entered [%c]\n",cIn);
    //put a space in front of %c so that you dont capture the new line as a char
    printf("Enter a character: ");
    scanf(" %c", &cIn);
    printf("You entered [%c]\n",cIn);

    return 0;
}
// Function Definitions


