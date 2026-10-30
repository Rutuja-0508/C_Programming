/////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays numbers from -N to +N
// Input         : Integer
// Output        : Numbers from -N to +N
// Author        : Rutuja Patil
// Date          : 30/10/2026
//
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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

    Display(iValue);

    return EXIT_SUCCESS;
}