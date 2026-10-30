/////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Prints $ and * alternately
// Input         : Integer
// Output        : Pattern of $ and *
// Author        : Rutuja Patil
// Date          : 30/10/2026
//
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    Pattern(iValue);

    return EXIT_SUCCESS;
}
