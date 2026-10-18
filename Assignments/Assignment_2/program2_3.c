///////////////////////////////////////
//
// Function Name : Display
// Description   : Prints Hello if the number is less
//                 than 10, otherwise prints Demo
// Input         : Integer
// Output        : Hello or Demo
// Author        : Rutuja Patil
// Date          : 19/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("HELLO");
    }
    else
    {
        printf("DEMO");
    }
}


int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
