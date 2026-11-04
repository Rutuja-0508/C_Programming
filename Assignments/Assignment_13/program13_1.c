///////////////////////////////////////
//
// Function Name : CountEven
// Description   : Counts even digits in a given number
// Input         : Integer
// Output        : Count of even digits
// Author        : Rutuja Patil
// Date          : 3/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
