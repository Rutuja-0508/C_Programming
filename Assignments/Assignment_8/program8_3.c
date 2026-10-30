///////////////////////////////////////
//
// Function Name : Factorial
// Description   : Calculates factorial of given number
// Input         : Integer
// Output        : Factorial of number
// Author        : Rutuja Patil
// Date          : 30/10/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

long long Factorial(int iNo)
{
    int iCnt = 0;
    long long iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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

    iRet = Factorial(iValue);

    printf("Factorial of number is %lld",iRet);

    return EXIT_SUCCESS;
}