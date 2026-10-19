////////////////////////////////////////
//
// Function Name : CheckNumber
// Description   : Checks whether a number is positive, negative, or zero.
// Input         : Integer
// Output        : Positive Number / Negative Number / Zero
// Author        : Rutuja Patil
// Date          : 20/10/2026
//
////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{

    if(iValue > 0)
    {
        printf("The Number is Positive");
    }
    else if(iValue < 0)
    {
        printf("The Number is Negative");
    }
    else
    {
        printf("The number is Zero");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
