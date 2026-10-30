///////////////////////////////////////
//
// Function Name : OddFactorial
// Description   : Calculates odd factorial of given number
// Input         : Integer
// Output        : Odd factorial
// Author        : Rutuja Patil
// Date          : 30/10/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

long long OddFactorial(int iNo)
{
    int iCnt = 0;
    long long iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
    {
        iNo--;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt = iCnt - 2)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %lld",iRet);

    return EXIT_SUCCESS;
}