///////////////////////////////////////
//
// Function Name : PrintEven
// Description   : Accept a number and print that many even numbers
// Input         : Integer
// Output        : First iNo positive even numbers
// Author        : Rutuja Patil
// Date          : 19/10/2026
//
///////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iEven = 2;

    if(iNo <= 0)
    {
        return; 
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iEven);
        iEven = iEven + 2;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}
