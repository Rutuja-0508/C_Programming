///////////////////////////////////////
//
// Function Name : MultFact
// Description   : Calculates multiplication of all factors of a number
// Input         : Integer
// Output        : Multiplication of factors
// Author        : Rutuja Patil
// Date          : 04/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
