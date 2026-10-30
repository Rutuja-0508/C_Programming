///////////////////////////////////////
//
// Function Name : SquareMeter
// Description   : Converts square feet into square metre
// Input         : Integer
// Output        : Double (Area in Square Metre)
// Author        : Rutuja Patil
// Date          : 30/10/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    dMeter = iValue * 0.092903;

    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square metre is: %lf\n", dRet);

    return EXIT_SUCCESS;
}