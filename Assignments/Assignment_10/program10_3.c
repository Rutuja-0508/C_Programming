///////////////////////////////////////
//
// Function Name : KMtoMeter
// Description   : Converts kilometre into metre
// Input         : Integer
// Output        : Integer (Distance in Metres)
// Author        : Rutuja Patil
// Date          : 30/10/2026
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometre: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in metre is: %d\n", iRet);

    return EXIT_SUCCESS;
}