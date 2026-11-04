///////////////////////////////////////
//
// Function Name : FactRev
// Description   : Displays all factors of a number in decreasing order
// Input         : Integer
// Output        : Factors in decreasing order
// Author        : Rutuja Patil
// Date          : 04/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
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

    FactRev(iValue);

    return EXIT_SUCCESS;
}