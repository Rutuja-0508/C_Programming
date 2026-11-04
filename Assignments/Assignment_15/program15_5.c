///////////////////////////////////////
//
// Function Name : Percentage
// Description   : Calculates percentage from total and obtained marks
// Input         : Total marks and obtained marks
// Output        : Percentage
// Author        : Rutuja Patil
// Date          : 04/11/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

float Percentage(int iTotal, int iObtained)
{
    float fResult = 0.0f;

    if(iTotal == 0)
    {
        return 0.0f;
    }

    fResult = ((float)iObtained / iTotal) * 100;

    return fResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.1f%%\n", fRet);

    return EXIT_SUCCESS;
}