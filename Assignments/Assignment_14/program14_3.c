///////////////////////////////////////
//
// Function Name : NonFact
// Description   : Displays all non-factors of a given number
// Input         : Integer
// Output        : Non-factors of the number
// Author        : Rutuja Patil
// Date          : 04/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}