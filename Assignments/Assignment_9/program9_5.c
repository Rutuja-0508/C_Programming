///////////////////////////////////////
//
// Function Name : FactorialDiff
// Description   : Calculates difference between even and odd factorial
// Input         : Integer
// Output        : Difference of factorials
// Author        : Rutuja Patil
// Date          : 30/10/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

long long FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenNo = 0;
    int iOddNo = 0;

    long long iEvenFact = 1;
    long long iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iEvenNo = iNo;
    iOddNo = iNo;

    if(iEvenNo % 2 != 0)
    {
        iEvenNo--;
    }

    if(iOddNo % 2 == 0)
    {
        iOddNo--;
    }

    for(iCnt = iEvenNo; iCnt >= 2; iCnt = iCnt - 2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

    for(iCnt = iOddNo; iCnt >= 1; iCnt = iCnt - 2)
    {
        iOddFact = iOddFact * iCnt;
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0;
    long long iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %lld",iRet);

    return EXIT_SUCCESS;
}