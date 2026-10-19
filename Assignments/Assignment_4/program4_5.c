///////////////////////////////////////
//
// Function Name : CheckDivisibility
// Description   : Checks whether a number is divisible by 5.
// Input         : Integer
// Output        : Divisible by 5 / Not Divisible by 5
// Author        : Rutuja Patil
// Date          : 20/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{

    if((iValue % 5) == 0)
    {
        printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is not Divisible by 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}