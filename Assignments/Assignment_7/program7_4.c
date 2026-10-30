/////////////////////////////////////////////////
//
// Function Name : OddDisplay
// Description   : Displays all odd numbers up to N
// Input         : Integer
// Output        : Odd numbers up to N
// Author        : Rutuja Patil
// Date          : 30/10/2026
//
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}