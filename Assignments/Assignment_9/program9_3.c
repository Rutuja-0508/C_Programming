///////////////////////////////////////
//
// Function Name : EvenFactorial
// Description   : Calculates even factorial of given number
// Input         : Integer
// Output        : Even factorial
// Author        : Rutuja Patil
// Date          : 30/10/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

long long EvenFactorial(int iNo)
{
    int iCnt = 0;
    long long iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 != 0)
    {
        iNo--;
    }

    for(iCnt = iNo; iCnt >= 2; iCnt = iCnt - 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    long long iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %lld",iRet);

    return EXIT_SUCCESS;
}