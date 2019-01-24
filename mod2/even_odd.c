/*
 * =====================================================================================
 *
 *       Filename:  even_odd.c
 *
 *    Description:  determine if value is even or odd
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:36:37 AM
 *       Revision:  none
 *       Compiler:  gcc even_odd.c -o even_odd.out -lm
 *
 *         Author:  Tyler Whitmore (), tylerwhitmore@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    int num1,num2;
    bool passed = true;
    printf("Enter some even number: ");
    scanf("%d",&num1);
    printf("Enter some odd number: ");
    scanf("%d",&num2);
    if (num1%2 != 0){
        printf("%d was not even\n",num1);
        passed = false;
    }
    if (num2%2 == 0){
        printf("%d was not odd\n",num2);
        passed = false;
    }
    if(passed == true){
        printf("%d was even and %d was odd\n",num1,num2);
    }
    return 0;
}
// Function Definitions


