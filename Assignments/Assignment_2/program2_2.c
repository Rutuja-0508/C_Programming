///////////////////////////////////////
//
// Function Name : Display
// Description   : Prints * iNo times by decrementing iNo
// Input         : Integer
// Output        : Prints * on the screen
// Author        : Rutuja Patil
// Date          : 19/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    while(iNo > iCnt)
    {
        printf("*");
        iNo--;
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
