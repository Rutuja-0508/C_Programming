/////////////////////////////////////////////////
//
// Function Name : MultipleDisplay
// Description   : Displays the first five multiples of N
// Input         : Integer
// Output        : First five multiples of N
// Author        : Rutuja Patil
// Date          : 30/10/2026
//
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}