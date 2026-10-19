///////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description   : Checks whether a number is even or odd.
// Input         : Integer
// Output        : Even Number / Odd Number
// Author        : Rutuja Patil
// Date          : 20/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if((iValue % 2) == 0)
    {
        printf("The Number is Even");
    }
    else
    {
        printf("The Number is Odd");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}