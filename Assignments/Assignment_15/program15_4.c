///////////////////////////////////////
//
// Function Name : Multiply
// Description   : Multiplies three numbers
// Input         : Three integers
// Output        : Multiplication of three numbers
// Author        : Rutuja Patil
// Date          : 04/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iResult = 0;

    if(iNo1 == 0)
    {
        return 0;
    }

    if(iNo2 == 0)
    {
        return iNo1 * iNo3;
    }

    if(iNo3 == 0)
    {
        return iNo1 * iNo2;
    }

    iResult = iNo1 * iNo2 * iNo3;

    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d\n", iRet);

    return EXIT_SUCCESS;
}