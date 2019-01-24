/*
 * =====================================================================================
 *
 *       Filename:  hex.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/24/2019 10:00:47 AM
 *       Revision:  none
 *       Compiler:  gcc hex.c -o hex.out
 *
 *         Author:  Tyler Whitmore (), tylerwhitmore@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const unsigned char pin4 = 0x08;
const unsigned char pin3 = 0x04;
const unsigned char pin2 = 0x02;
const unsigned char pin1 = 0x01;
// Function Prototypes

// Main Function
int main()
{
    unsigned char hex;
    //printf("Your [%02X]and dec [%d]\n",hex,hex);
    //1)ask user to enter a hex number (1 byte max)
    //2)which bits/pins are on
    printf("Enter one hex number: ");
    scanf("%hhx",&hex);
    printf("Hex [%02X] and dec [%d]\n",hex,hex);
    if(hex & pin1) //use bitwise and "&"
    {
        printf("pin1 is on\n");
    }
    return 0;
}
// Function Definitions


